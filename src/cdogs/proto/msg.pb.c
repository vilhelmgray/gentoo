/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.0 at Wed Feb 03 20:36:31 2016. */

#include "msg.pb.h"

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

const int32_t NActorAdd_PlayerUID_default = -1;
const int32_t NActorHeal_PlayerUID_default = -1;
const int32_t NActorHit_PlayerUID_default = -1;
const int32_t NActorHit_HitterPlayerUID_default = -1;
const int32_t NActorAddAmmo_PlayerUID_default = -1;
const int32_t NActorUseAmmo_PlayerUID_default = -1;
const int32_t NAddPickup_SpawnerUID_default = -1;
const int32_t NRemovePickup_SpawnerUID_default = -1;
const int32_t NGunReload_PlayerUID_default = -1;
const int32_t NGunFire_UID_default = -1;
const int32_t NGunFire_PlayerUID_default = -1;
const int32_t NAddBullet_PlayerUID_default = -1;
const int32_t NAddBullet_ActorUID_default = -1;


const pb_field_t NServerInfo_fields[9] = {
    PB_FIELD(  1, INT32   , REQUIRED, STATIC  , FIRST, NServerInfo, ProtocolVersion, ProtocolVersion, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, NServerInfo, ENetPort, ProtocolVersion, 0),
    PB_FIELD(  3, STRING  , REQUIRED, STATIC  , OTHER, NServerInfo, Hostname, ENetPort, 0),
    PB_FIELD(  4, INT32   , REQUIRED, STATIC  , OTHER, NServerInfo, GameMode, Hostname, 0),
    PB_FIELD(  5, STRING  , REQUIRED, STATIC  , OTHER, NServerInfo, CampaignName, GameMode, 0),
    PB_FIELD(  6, INT32   , REQUIRED, STATIC  , OTHER, NServerInfo, MissionNumber, CampaignName, 0),
    PB_FIELD(  7, INT32   , REQUIRED, STATIC  , OTHER, NServerInfo, NumPlayers, MissionNumber, 0),
    PB_FIELD(  8, INT32   , REQUIRED, STATIC  , OTHER, NServerInfo, MaxPlayers, NumPlayers, 0),
    PB_LAST_FIELD
};

const pb_field_t NClientId_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NClientId, Id, Id, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, NClientId, FirstPlayerUID, Id, 0),
    PB_LAST_FIELD
};

const pb_field_t NCampaignDef_fields[4] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, NCampaignDef, Path, Path, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NCampaignDef, GameMode, Path, 0),
    PB_FIELD(  3, UINT32  , REQUIRED, STATIC  , OTHER, NCampaignDef, Mission, GameMode, 0),
    PB_LAST_FIELD
};

const pb_field_t NCharLooks_fields[7] = {
    PB_FIELD(  1, INT32   , REQUIRED, STATIC  , FIRST, NCharLooks, Face, Face, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NCharLooks, Skin, Face, 0),
    PB_FIELD(  3, INT32   , REQUIRED, STATIC  , OTHER, NCharLooks, Arm, Skin, 0),
    PB_FIELD(  4, INT32   , REQUIRED, STATIC  , OTHER, NCharLooks, Body, Arm, 0),
    PB_FIELD(  5, INT32   , REQUIRED, STATIC  , OTHER, NCharLooks, Leg, Body, 0),
    PB_FIELD(  6, INT32   , REQUIRED, STATIC  , OTHER, NCharLooks, Hair, Leg, 0),
    PB_LAST_FIELD
};

const pb_field_t NPlayerData_fields[13] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, NPlayerData, Name, Name, 0),
    PB_FIELD(  2, MESSAGE , REQUIRED, STATIC  , OTHER, NPlayerData, Looks, Name, &NCharLooks_fields),
    PB_FIELD(  3, STRING  , REPEATED, STATIC  , OTHER, NPlayerData, Weapons, Looks, 0),
    PB_FIELD(  4, UINT32  , REQUIRED, STATIC  , OTHER, NPlayerData, Lives, Weapons, 0),
    PB_FIELD(  5, INT32   , REQUIRED, STATIC  , OTHER, NPlayerData, Score, Lives, 0),
    PB_FIELD(  6, INT32   , REQUIRED, STATIC  , OTHER, NPlayerData, TotalScore, Score, 0),
    PB_FIELD(  7, INT32   , REQUIRED, STATIC  , OTHER, NPlayerData, Kills, TotalScore, 0),
    PB_FIELD(  8, INT32   , REQUIRED, STATIC  , OTHER, NPlayerData, Suicides, Kills, 0),
    PB_FIELD(  9, INT32   , REQUIRED, STATIC  , OTHER, NPlayerData, Friendlies, Suicides, 0),
    PB_FIELD( 10, UINT32  , REQUIRED, STATIC  , OTHER, NPlayerData, MaxHealth, Friendlies, 0),
    PB_FIELD( 11, UINT32  , REQUIRED, STATIC  , OTHER, NPlayerData, LastMission, MaxHealth, 0),
    PB_FIELD( 12, UINT32  , REQUIRED, STATIC  , OTHER, NPlayerData, UID, LastMission, 0),
    PB_LAST_FIELD
};

const pb_field_t NTileSet_fields[5] = {
    PB_FIELD(  1, MESSAGE , REQUIRED, STATIC  , FIRST, NTileSet, Pos, Pos, &NVec2i_fields),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, NTileSet, Flags, Pos, 0),
    PB_FIELD(  3, STRING  , REQUIRED, STATIC  , OTHER, NTileSet, PicName, Flags, 0),
    PB_FIELD(  4, STRING  , REQUIRED, STATIC  , OTHER, NTileSet, PicAltName, PicName, 0),
    PB_LAST_FIELD
};

const pb_field_t NMapObjectAdd_fields[6] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NMapObjectAdd, UID, UID, 0),
    PB_FIELD(  2, STRING  , REQUIRED, STATIC  , OTHER, NMapObjectAdd, MapObjectClass, UID, 0),
    PB_FIELD(  3, MESSAGE , REQUIRED, STATIC  , OTHER, NMapObjectAdd, Pos, MapObjectClass, &NVec2i_fields),
    PB_FIELD(  4, UINT32  , REQUIRED, STATIC  , OTHER, NMapObjectAdd, TileItemFlags, Pos, 0),
    PB_FIELD(  5, INT32   , REQUIRED, STATIC  , OTHER, NMapObjectAdd, Health, TileItemFlags, 0),
    PB_LAST_FIELD
};

const pb_field_t NMapObjectDamage_fields[6] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NMapObjectDamage, UID, UID, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NMapObjectDamage, Power, UID, 0),
    PB_FIELD(  3, INT32   , REQUIRED, STATIC  , OTHER, NMapObjectDamage, ActorUID, Power, 0),
    PB_FIELD(  4, INT32   , REQUIRED, STATIC  , OTHER, NMapObjectDamage, PlayerUID, ActorUID, 0),
    PB_FIELD(  5, UINT32  , REQUIRED, STATIC  , OTHER, NMapObjectDamage, Flags, PlayerUID, 0),
    PB_LAST_FIELD
};

const pb_field_t NScore_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NScore, PlayerUID, PlayerUID, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NScore, Score, PlayerUID, 0),
    PB_LAST_FIELD
};

const pb_field_t NSound_fields[4] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, NSound, Sound, Sound, 0),
    PB_FIELD(  2, MESSAGE , REQUIRED, STATIC  , OTHER, NSound, Pos, Sound, &NVec2i_fields),
    PB_FIELD(  3, BOOL    , REQUIRED, STATIC  , OTHER, NSound, IsHit, Pos, 0),
    PB_LAST_FIELD
};

const pb_field_t NVec2i_fields[3] = {
    PB_FIELD(  1, INT32   , REQUIRED, STATIC  , FIRST, NVec2i, x, x, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NVec2i, y, x, 0),
    PB_LAST_FIELD
};

const pb_field_t NActorAdd_fields[8] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorAdd, UID, UID, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, NActorAdd, CharId, UID, 0),
    PB_FIELD(  3, INT32   , REQUIRED, STATIC  , OTHER, NActorAdd, Direction, CharId, 0),
    PB_FIELD(  4, INT32   , REQUIRED, STATIC  , OTHER, NActorAdd, Health, Direction, 0),
    PB_FIELD(  5, INT32   , REQUIRED, STATIC  , OTHER, NActorAdd, PlayerUID, Health, &NActorAdd_PlayerUID_default),
    PB_FIELD(  6, UINT32  , REQUIRED, STATIC  , OTHER, NActorAdd, TileItemFlags, PlayerUID, 0),
    PB_FIELD(  7, MESSAGE , REQUIRED, STATIC  , OTHER, NActorAdd, FullPos, TileItemFlags, &NVec2i_fields),
    PB_LAST_FIELD
};

const pb_field_t NActorMove_fields[4] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorMove, UID, UID, 0),
    PB_FIELD(  2, MESSAGE , REQUIRED, STATIC  , OTHER, NActorMove, Pos, UID, &NVec2i_fields),
    PB_FIELD(  3, MESSAGE , REQUIRED, STATIC  , OTHER, NActorMove, MoveVel, Pos, &NVec2i_fields),
    PB_LAST_FIELD
};

const pb_field_t NActorState_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorState, UID, UID, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NActorState, State, UID, 0),
    PB_LAST_FIELD
};

const pb_field_t NActorDir_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorDir, UID, UID, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NActorDir, Dir, UID, 0),
    PB_LAST_FIELD
};

const pb_field_t NActorSlide_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorSlide, UID, UID, 0),
    PB_FIELD(  2, MESSAGE , REQUIRED, STATIC  , OTHER, NActorSlide, Vel, UID, &NVec2i_fields),
    PB_LAST_FIELD
};

const pb_field_t NActorImpulse_fields[4] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorImpulse, UID, UID, 0),
    PB_FIELD(  2, MESSAGE , REQUIRED, STATIC  , OTHER, NActorImpulse, Vel, UID, &NVec2i_fields),
    PB_FIELD(  3, MESSAGE , REQUIRED, STATIC  , OTHER, NActorImpulse, Pos, Vel, &NVec2i_fields),
    PB_LAST_FIELD
};

const pb_field_t NActorSwitchGun_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorSwitchGun, UID, UID, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, NActorSwitchGun, GunIdx, UID, 0),
    PB_LAST_FIELD
};

const pb_field_t NActorPickupAll_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorPickupAll, UID, UID, 0),
    PB_FIELD(  2, BOOL    , REQUIRED, STATIC  , OTHER, NActorPickupAll, PickupAll, UID, 0),
    PB_LAST_FIELD
};

const pb_field_t NActorReplaceGun_fields[4] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorReplaceGun, UID, UID, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, NActorReplaceGun, GunIdx, UID, 0),
    PB_FIELD(  3, STRING  , REQUIRED, STATIC  , OTHER, NActorReplaceGun, Gun, GunIdx, 0),
    PB_LAST_FIELD
};

const pb_field_t NActorHeal_fields[5] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorHeal, UID, UID, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NActorHeal, PlayerUID, UID, &NActorHeal_PlayerUID_default),
    PB_FIELD(  3, INT32   , REQUIRED, STATIC  , OTHER, NActorHeal, Amount, PlayerUID, 0),
    PB_FIELD(  4, BOOL    , REQUIRED, STATIC  , OTHER, NActorHeal, IsRandomSpawned, Amount, 0),
    PB_LAST_FIELD
};

const pb_field_t NActorHit_fields[7] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorHit, UID, UID, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NActorHit, PlayerUID, UID, &NActorHit_PlayerUID_default),
    PB_FIELD(  3, INT32   , REQUIRED, STATIC  , OTHER, NActorHit, HitterPlayerUID, PlayerUID, &NActorHit_HitterPlayerUID_default),
    PB_FIELD(  4, INT32   , REQUIRED, STATIC  , OTHER, NActorHit, Special, HitterPlayerUID, 0),
    PB_FIELD(  5, INT32   , REQUIRED, STATIC  , OTHER, NActorHit, Power, Special, 0),
    PB_FIELD(  6, MESSAGE , REQUIRED, STATIC  , OTHER, NActorHit, Vel, Power, &NVec2i_fields),
    PB_LAST_FIELD
};

const pb_field_t NActorAddAmmo_fields[6] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorAddAmmo, UID, UID, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NActorAddAmmo, PlayerUID, UID, &NActorAddAmmo_PlayerUID_default),
    PB_FIELD(  3, UINT32  , REQUIRED, STATIC  , OTHER, NActorAddAmmo, AmmoId, PlayerUID, 0),
    PB_FIELD(  4, UINT32  , REQUIRED, STATIC  , OTHER, NActorAddAmmo, Amount, AmmoId, 0),
    PB_FIELD(  5, BOOL    , REQUIRED, STATIC  , OTHER, NActorAddAmmo, IsRandomSpawned, Amount, 0),
    PB_LAST_FIELD
};

const pb_field_t NActorUseAmmo_fields[5] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorUseAmmo, UID, UID, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NActorUseAmmo, PlayerUID, UID, &NActorUseAmmo_PlayerUID_default),
    PB_FIELD(  3, UINT32  , REQUIRED, STATIC  , OTHER, NActorUseAmmo, AmmoId, PlayerUID, 0),
    PB_FIELD(  4, UINT32  , REQUIRED, STATIC  , OTHER, NActorUseAmmo, Amount, AmmoId, 0),
    PB_LAST_FIELD
};

const pb_field_t NActorDie_fields[2] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorDie, UID, UID, 0),
    PB_LAST_FIELD
};

const pb_field_t NActorMelee_fields[6] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorMelee, UID, UID, 0),
    PB_FIELD(  2, STRING  , REQUIRED, STATIC  , OTHER, NActorMelee, BulletClass, UID, 0),
    PB_FIELD(  3, INT32   , REQUIRED, STATIC  , OTHER, NActorMelee, HitType, BulletClass, 0),
    PB_FIELD(  4, INT32   , REQUIRED, STATIC  , OTHER, NActorMelee, TargetKind, HitType, 0),
    PB_FIELD(  5, UINT32  , REQUIRED, STATIC  , OTHER, NActorMelee, TargetUID, TargetKind, 0),
    PB_LAST_FIELD
};

const pb_field_t NAddPickup_fields[7] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NAddPickup, UID, UID, 0),
    PB_FIELD(  2, STRING  , REQUIRED, STATIC  , OTHER, NAddPickup, PickupClass, UID, 0),
    PB_FIELD(  3, BOOL    , REQUIRED, STATIC  , OTHER, NAddPickup, IsRandomSpawned, PickupClass, 0),
    PB_FIELD(  4, INT32   , REQUIRED, STATIC  , OTHER, NAddPickup, SpawnerUID, IsRandomSpawned, &NAddPickup_SpawnerUID_default),
    PB_FIELD(  5, UINT32  , REQUIRED, STATIC  , OTHER, NAddPickup, TileItemFlags, SpawnerUID, 0),
    PB_FIELD(  6, MESSAGE , REQUIRED, STATIC  , OTHER, NAddPickup, Pos, TileItemFlags, &NVec2i_fields),
    PB_LAST_FIELD
};

const pb_field_t NRemovePickup_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NRemovePickup, UID, UID, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NRemovePickup, SpawnerUID, UID, &NRemovePickup_SpawnerUID_default),
    PB_LAST_FIELD
};

const pb_field_t NBulletBounce_fields[6] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NBulletBounce, UID, UID, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NBulletBounce, HitType, UID, 0),
    PB_FIELD(  3, BOOL    , REQUIRED, STATIC  , OTHER, NBulletBounce, Spark, HitType, 0),
    PB_FIELD(  4, MESSAGE , REQUIRED, STATIC  , OTHER, NBulletBounce, BouncePos, Spark, &NVec2i_fields),
    PB_FIELD(  5, MESSAGE , REQUIRED, STATIC  , OTHER, NBulletBounce, BounceVel, BouncePos, &NVec2i_fields),
    PB_LAST_FIELD
};

const pb_field_t NRemoveBullet_fields[2] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NRemoveBullet, UID, UID, 0),
    PB_LAST_FIELD
};

const pb_field_t NGunReload_fields[5] = {
    PB_FIELD(  1, INT32   , REQUIRED, STATIC  , FIRST, NGunReload, PlayerUID, PlayerUID, &NGunReload_PlayerUID_default),
    PB_FIELD(  2, STRING  , REQUIRED, STATIC  , OTHER, NGunReload, Gun, PlayerUID, 0),
    PB_FIELD(  3, MESSAGE , REQUIRED, STATIC  , OTHER, NGunReload, FullPos, Gun, &NVec2i_fields),
    PB_FIELD(  4, INT32   , REQUIRED, STATIC  , OTHER, NGunReload, Direction, FullPos, 0),
    PB_LAST_FIELD
};

const pb_field_t NGunFire_fields[10] = {
    PB_FIELD(  1, INT32   , REQUIRED, STATIC  , FIRST, NGunFire, UID, UID, &NGunFire_UID_default),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NGunFire, PlayerUID, UID, &NGunFire_PlayerUID_default),
    PB_FIELD(  3, STRING  , REQUIRED, STATIC  , OTHER, NGunFire, Gun, PlayerUID, 0),
    PB_FIELD(  4, MESSAGE , REQUIRED, STATIC  , OTHER, NGunFire, MuzzleFullPos, Gun, &NVec2i_fields),
    PB_FIELD(  5, INT32   , REQUIRED, STATIC  , OTHER, NGunFire, Z, MuzzleFullPos, 0),
    PB_FIELD(  6, FLOAT   , REQUIRED, STATIC  , OTHER, NGunFire, Angle, Z, 0),
    PB_FIELD(  7, BOOL    , REQUIRED, STATIC  , OTHER, NGunFire, Sound, Angle, 0),
    PB_FIELD(  8, UINT32  , REQUIRED, STATIC  , OTHER, NGunFire, Flags, Sound, 0),
    PB_FIELD(  9, BOOL    , REQUIRED, STATIC  , OTHER, NGunFire, IsGun, Flags, 0),
    PB_LAST_FIELD
};

const pb_field_t NGunState_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NGunState, ActorUID, ActorUID, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NGunState, State, ActorUID, 0),
    PB_LAST_FIELD
};

const pb_field_t NAddBullet_fields[10] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NAddBullet, UID, UID, 0),
    PB_FIELD(  2, STRING  , REQUIRED, STATIC  , OTHER, NAddBullet, BulletClass, UID, 0),
    PB_FIELD(  3, MESSAGE , REQUIRED, STATIC  , OTHER, NAddBullet, MuzzlePos, BulletClass, &NVec2i_fields),
    PB_FIELD(  4, INT32   , REQUIRED, STATIC  , OTHER, NAddBullet, MuzzleHeight, MuzzlePos, 0),
    PB_FIELD(  5, FLOAT   , REQUIRED, STATIC  , OTHER, NAddBullet, Angle, MuzzleHeight, 0),
    PB_FIELD(  6, INT32   , REQUIRED, STATIC  , OTHER, NAddBullet, Elevation, Angle, 0),
    PB_FIELD(  7, UINT32  , REQUIRED, STATIC  , OTHER, NAddBullet, Flags, Elevation, 0),
    PB_FIELD(  8, INT32   , REQUIRED, STATIC  , OTHER, NAddBullet, PlayerUID, Flags, &NAddBullet_PlayerUID_default),
    PB_FIELD(  9, INT32   , REQUIRED, STATIC  , OTHER, NAddBullet, ActorUID, PlayerUID, &NAddBullet_ActorUID_default),
    PB_LAST_FIELD
};

const pb_field_t NTrigger_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NTrigger, ID, ID, 0),
    PB_FIELD(  2, MESSAGE , REQUIRED, STATIC  , OTHER, NTrigger, Tile, ID, &NVec2i_fields),
    PB_LAST_FIELD
};

const pb_field_t NExploreTiles_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, STATIC  , FIRST, NExploreTiles, Runs, Runs, &NExploreTiles_Run_fields),
    PB_LAST_FIELD
};

const pb_field_t NExploreTiles_Run_fields[3] = {
    PB_FIELD(  1, MESSAGE , REQUIRED, STATIC  , FIRST, NExploreTiles_Run, Tile, Tile, &NVec2i_fields),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NExploreTiles_Run, Run, Tile, 0),
    PB_LAST_FIELD
};

const pb_field_t NRescueCharacter_fields[2] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NRescueCharacter, UID, UID, 0),
    PB_LAST_FIELD
};

const pb_field_t NObjectiveUpdate_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NObjectiveUpdate, ObjectiveId, ObjectiveId, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NObjectiveUpdate, Count, ObjectiveId, 0),
    PB_LAST_FIELD
};

const pb_field_t NAddKeys_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NAddKeys, KeyFlags, KeyFlags, 0),
    PB_FIELD(  2, MESSAGE , REQUIRED, STATIC  , OTHER, NAddKeys, Pos, KeyFlags, &NVec2i_fields),
    PB_LAST_FIELD
};

const pb_field_t NMissionComplete_fields[2] = {
    PB_FIELD(  1, BOOL    , REQUIRED, STATIC  , FIRST, NMissionComplete, ShowMsg, ShowMsg, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(NPlayerData, Looks) < 65536 && pb_membersize(NTileSet, Pos) < 65536 && pb_membersize(NMapObjectAdd, Pos) < 65536 && pb_membersize(NSound, Pos) < 65536 && pb_membersize(NActorAdd, FullPos) < 65536 && pb_membersize(NActorMove, Pos) < 65536 && pb_membersize(NActorMove, MoveVel) < 65536 && pb_membersize(NActorSlide, Vel) < 65536 && pb_membersize(NActorImpulse, Vel) < 65536 && pb_membersize(NActorImpulse, Pos) < 65536 && pb_membersize(NActorHit, Vel) < 65536 && pb_membersize(NAddPickup, Pos) < 65536 && pb_membersize(NBulletBounce, BouncePos) < 65536 && pb_membersize(NBulletBounce, BounceVel) < 65536 && pb_membersize(NGunReload, FullPos) < 65536 && pb_membersize(NGunFire, MuzzleFullPos) < 65536 && pb_membersize(NAddBullet, MuzzlePos) < 65536 && pb_membersize(NTrigger, Tile) < 65536 && pb_membersize(NExploreTiles, Runs[0]) < 65536 && pb_membersize(NExploreTiles_Run, Tile) < 65536 && pb_membersize(NAddKeys, Pos) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_NServerInfo_NClientId_NCampaignDef_NCharLooks_NPlayerData_NTileSet_NMapObjectAdd_NMapObjectDamage_NScore_NSound_NVec2i_NActorAdd_NActorMove_NActorState_NActorDir_NActorSlide_NActorImpulse_NActorSwitchGun_NActorPickupAll_NActorReplaceGun_NActorHeal_NActorHit_NActorAddAmmo_NActorUseAmmo_NActorDie_NActorMelee_NAddPickup_NRemovePickup_NBulletBounce_NRemoveBullet_NGunReload_NGunFire_NGunState_NAddBullet_NTrigger_NExploreTiles_NExploreTiles_Run_NRescueCharacter_NObjectiveUpdate_NAddKeys_NMissionComplete)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
#error Field descriptor for NCampaignDef.Path is too large. Define PB_FIELD_16BIT to fix this.
#endif


