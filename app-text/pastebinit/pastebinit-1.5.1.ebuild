# Copyright 1999-2020 Gentoo Authors
# Distributed under the terms of the GNU General Public License v2

EAPI=7
PYTHON_COMPAT=( python3_{7,8} )
PYTHON_REQ_USE="xml"

inherit python-single-r1

DESCRIPTION="A software that lets you send anything you want directly to a pastebin"
HOMEPAGE="https://launchpad.net/pastebinit"
MY_P="${PN}_${PV}"
SRC_URI="mirror://ubuntu/pool/main/p/${PN}/${MY_P}.orig.tar.gz"

LICENSE="GPL-2"
SLOT="0"
KEYWORDS="amd64 x86"
IUSE="crypt"

REQUIRED_USE="${PYTHON_REQUIRED_USE}"

RDEPEND="${PYTHON_DEPS}
	$(python_gen_cond_dep '
		dev-python/configobj[${PYTHON_MULTI_USEDEP}]
	')
	crypt? ( app-crypt/gnupg )"
DEPEND="app-text/docbook-xsl-stylesheets"

src_prepare() {
	local mo=""

	for lang in ${LINGUAS}; do
		if [ -f po/${lang}.po ]; then
			mo="${mo} ${lang}.mo"
		fi
	done

	sed -i -e "/^build-mo/s/:.*/:${mo}/" po/Makefile || die
	eapply_user
}

src_compile() {
	emake -C po
	xsltproc --nonet \
		"${EROOT}"/usr/share/sgml/docbook/xsl-stylesheets/manpages/docbook.xsl \
		pastebinit.xml || die
}

src_install() {
	dobin pastebinit utils/pbput
	python_fix_shebang "${ED}/usr/bin/${PN}"
	dosym pbput /usr/bin/pbget
	use crypt && dosym pbput /usr/bin/pbputs
	dodoc README
	doman pastebinit.1 utils/*.1
	insinto /usr/share/locale
	[[ -d po/mo ]] && doins -r po/mo/*
	insinto /usr/share
	doins -r pastebin.d
}
