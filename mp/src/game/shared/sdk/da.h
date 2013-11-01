#pragma once

#include "sdk_weapon_parse.h"

#define SDK_DEFAULT_PLAYER_RUNSPEED    230
#define SDK_DEFAULT_PLAYER_SPRINTSPEED 330
#define SDK_DEFAULT_PLAYER_PRONESPEED  100
#define SDK_DEFAULT_PLAYER_SLIDESPEED  320
#define SDK_DEFAULT_PLAYER_ROLLSPEED   200

typedef enum
{
	STYLE_SOUND_NONE,
	STYLE_SOUND_SMALL,
	STYLE_SOUND_LARGE,
	STYLE_SOUND_KNOCKOUT,
} style_sound_t;

typedef enum
{
	STYLE_POINT_SMALL,
	STYLE_POINT_LARGE,
	STYLE_POINT_STYLISH,
} style_point_t;

typedef enum {
	ANNOUNCEMENT_COOL,
	ANNOUNCEMENT_STYLISH,
	ANNOUNCEMENT_DIVE,
	ANNOUNCEMENT_DIVE_KILL,
	ANNOUNCEMENT_SLIDE,
	ANNOUNCEMENT_SLIDE_KILL,
	ANNOUNCEMENT_STUNT,
	ANNOUNCEMENT_STUNT_KILL,
	ANNOUNCEMENT_THROUGH_WALL,
	ANNOUNCEMENT_LAST_BULLET,
	ANNOUNCEMENT_LONG_RANGE,
	ANNOUNCEMENT_LONG_RANGE_KILL,
	ANNOUNCEMENT_DOUBLE_KILL,
	ANNOUNCEMENT_GRENADE,
	ANNOUNCEMENT_GRENADE_KILL,
	ANNOUNCEMENT_SLOWMO_KILL,
	ANNOUNCEMENT_TACTICOOL,
	ANNOUNCEMENT_BRAWL,
	ANNOUNCEMENT_BRAWL_KILL,
	ANNOUNCEMENT_DIVEPUNCH,
	ANNOUNCEMENT_SLIDEPUNCH,
	ANNOUNCEMENT_HEADSHOT,
	ANNOUNCEMENT_POINT_BLANK,
	ANNOUNCEMENT_EXECUTION,
	TOTAL_ANNOUNCEMENTS
} announcement_t;

typedef enum {
	NOTICE_MARKSMAN,
	NOTICE_TROLL,
	NOTICE_BOUNCER,
	NOTICE_ATHLETIC,
	NOTICE_SUPERSLO,
	NOTICE_RESILIENT,
	NOTICE_SLOMO,
	NOTICE_STYLESTREAK,
	NOTICE_WORTHIT,

	NOTICE_FIRST_TOPNOTICE,
	NOTICE_CAPTURE_BRIEFCASE = NOTICE_FIRST_TOPNOTICE,
	NOTICE_PLAYER_HAS_BRIEFCASE,
	NOTICE_PLAYER_CAPTURED_BRIEFCASE,
	/*NOTICE_DENIED*/
	TOTAL_NOTICES
} notice_t;

inline const char* NoticeToString( notice_t id )
{
	static const char* aszNotices[] = {
		"NOTICE_MARKSMAN",
		"NOTICE_TROLL",
		"NOTICE_BOUNCER",
		"NOTICE_ATHLETIC",
		"NOTICE_SUPERSLO",
		"NOTICE_RESILIENT",
		"NOTICE_SLOMO",
		"NOTICE_STYLESTREAK",
		"NOTICE_WORTHIT",

		"briefcase",
	};

	return aszNotices[id];
}

inline const char* WeaponTypeToAlias( weapontype_t id )
{
	static const char* aszWeaponTypes[] = {
		"none",
		"melee",
		"rifle",
		"shotgun",
		"smg",
		"pistol",
		"grenade",
	};

	return aszWeaponTypes[id];
}
