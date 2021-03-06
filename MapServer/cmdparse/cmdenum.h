
#ifndef CMDENUM_H
#define CMDENUM_H

#include "cmdcommon_enum.h"

// private header file for server command enums
enum
{
	SCMD_SAY = SVCMD_LASTCMD,
	SCMD_ENTSAVE,
	SCMD_ENTCORRUPTED,
	SCMD_SETENTCORRUPTED,
	SCMD_ENTDELETE,
	SCMD_DROPTEST,
	SCMD_DELTEST,
	SCMD_PYRTEST,
	SCMD_ENTGENLOAD,
	SCMD_BEACONLOAD,
	SCMD_BEACONPROCESS,
	SCMD_BEACONPROCESSFORCED,
	SCMD_BEACONPROCESSTRAFFIC,
	SCMD_BEACONPROCESSNPC,
	SCMD_BEACONGENERATE,
	SCMD_BEACONREADFILE,
	SCMD_BEACONREADTHISFILE,
	SCMD_BEACONWRITEFILE,
	SCMD_BEACONFIX,
	SCMD_BEACONPATHDEBUG,
	SCMD_BEACONRESETTEMP,
	SCMD_BEACONGOTOCLUSTER,
	SCMD_BEACONGETVAR,
	SCMD_BEACONSETVAR,
	SCMD_BEACONCHECKFILE,
	SCMD_BEACONREQUEST,
	SCMD_BEACONMASTERSERVER,
	SCMD_PERFINFOSETBREAK,
	SCMD_PERFINFO_ENABLE_ENT_TIMER,
	SCMD_PERFINFO_DISABLE_ENT_TIMERS,
	SCMD_PERFINFO_CLIENT_PACKET_LOG,
	SCMD_PERFINFO_CLIENT_PACKET_LOG_PAUSE,
	SCMD_PROCESSTIMES,
	SCMD_MEMORYSIZES,
	SCMD_MOVE_ENTITY_TO_ME,
	SCMD_ENTCONTROL,
	SCMD_TESTNPCDTA,
	SCMD_TESTNPCS,
	SCMD_TESTGENTYPES,
	SCMD_PRINT_ENT,
	SCMD_SERVER_BREAK,
	SCMD_SMALLOC,
	SCMD_HEAPINFO,
	SCMD_HEAPLOG,
	SCMD_RETURNALL,
	SCMD_SENDMSG,
	SCMD_CRASHNOW,
	SCMD_FATAL_ERROR_NOW,
	SCMD_SENDPACKET,
	SCMD_REQNAMES,
	SCMD_SHOWSTATE,
	SCMD_YOUSAY,
	SCMD_YOUSAYONCLICK,
	SCMD_SET_POS,
	SCMD_SET_POS_PYR,
	SCMD_MAPMOVE,
	SCMD_MAPMOVESPAWN,
	SCMD_SHARDJUMP,
	SCMD_SHARDXFER_INIT,
	SCMD_NEXTPLAYER,
	SCMD_NEXTNPC,
	SCMD_NEXTCRITTER,
	SCMD_NEXTAWAKECRITTER,
	SCMD_NEXTCAR,
	SCMD_NEXTITEM,
	SCMD_NEXTRESET,
	SCMD_NEXTSEQ,
	SCMD_NEXTNPCCLUSTER,
	SCMD_GOTOENT,
	SCMD_DBQUERY,
	SCMD_INVINCIBLE,
	SCMD_UNSTOPPABLE,
	SCMD_DONOTTRIGGERSPAWNS,
	SCMD_ALWAYSHIT,
	SCMD_UNTARGETABLE,
	SCMD_RELOADPRIORITY,
	SCMD_RELOADAICONFIG,
	SCMD_GETENTDEBUGMENU,
	SCMD_SCRIPT_DEBUGSET,
	SCMD_SCRIPT_SHOWVARS,
	SCMD_SCRIPT_SETVAR,
	SCMD_SCRIPT_PAUSE,
	SCMD_SCRIPT_RESET,
	SCMD_SCRIPT_STOP,
	SCMD_SCRIPT_SIGNAL,
	SCMD_SCRIPT_COMBAT_LEVEL,
	SCMD_INITMAP,
	SCMD_CLEARAI_LOG,
	SCMD_ENTDEBUGINFO,
	SCMD_SETDEBUGVAR,
	SCMD_GETDEBUGVAR,
	SCMD_SENDAUTOTIMERS,
	SCMD_SETDEBUGENTITY,
	SCMD_DEBUGMENUFLAGS,
	SCMD_INTERPDATALEVEL,
	SCMD_INTERPDATAPRECISION,
	SCMD_SETSKYFADE,
	SCMD_SCMDS,
	SCMD_CMDLIST,
	SCMD_MAKE_MESSAGESTORE,
	SCMD_SCMDUSAGE,
	SCMD_SERVERWHO,
	SCMD_SUPERGROUPWHO,
	SCMD_TEAMUPWHO,
	SCMD_RAIDWHO,
	SCMD_LEVELINGPACTWHO,
	SCMD_WHO,
	SCMD_WHOALL,
	SCMD_STATUS,
	SCMD_CSR,
	SCMD_CSR_RADIUS,
	SCMD_CSR_LONG,
	SCMD_CSR_OFFLINE,
	SCMD_CSR_OFFLINE_LONG,
	SCMD_TMSG,
	SCMD_SILENCEALL,
	SCMD_SILENCE,
	SCMD_BANCHAT,
	SCMD_BANCHAT_RELAY,
	SCMD_SILENTKICK,
	SCMD_KICK,
	SCMD_BAN,
	SCMD_UNBAN,
	SCMD_INVISIBLE,
	SCMD_TELEPORT,
	SCMD_MAPMOVEPOS,
	SCMD_MAPMOVEPOS_ANDSELECTCONTACT,
	SCMD_OFFLINE_MOVE,
	SCMD_FREEZE,
	SCMD_SPAWN,
	SCMD_SPAWNMANY,
	SCMD_SPAWNNPC,
	SCMD_SPAWNOBJECTIVE,
	SCMD_SPAWNMISSIONNPCS,
	SCMD_RAOULCMD,
	SCMD_IGNORE,
	SCMD_IGNORE_SPAMMER,
	SCMD_IGNORE_SPAMMER_AUTH,
	SCMD_UIGNORE,
	SCMD_IGNORE_LIST,
	SCMD_IGNORETHRESHOLD,
	SCMD_IGNOREMULTIPLIER,
	SCMD_IGNOREDURATION,
	SCMD_REQUEST_PLAYER_CONTROL,
	SCMD_REQUEST_PLAYER_VIEW,
	SCMD_RELEASE_PLAYER_CONTROL,
	SCMD_ENABLE_CONTROL_LOG,
	SCMD_SMAPNAME,
	SCMD_MAPLIST,
	SCMD_PLAYERLOCALE,
	SCMD_GROUPFIND_TEST,
	SCMD_NEXTBADSPAWN,
	SCMD_NEXTBADVOLUME,
	SCMD_RESCANBADVOLUME,
	SCMD_NEXTSPAWN,
	SCMD_NEXTSPAWNPOINT,
	SCMD_NEXTMISSIONSPAWN,
	SCMD_NEXTUMISSIONSPAWN,
	SCMD_ENCOUNTER_RESET,
	SCMD_ENCOUNTER_DEBUG,
	SCMD_ENCOUNTER_RELOAD,
	SCMD_ENCOUNTER_TEAMSIZE,
	SCMD_ENCOUNTER_SPAWN,
	SCMD_ENCOUNTER_SPAWN_CLOSEST,
	SCMD_ENCOUNTER_IGNORE_GROUPS,
	SCMD_ENTITYENCOUNTER_SPAWN,
	SCMD_ENCOUNTER_ALWAYS_SPAWN,
	SCMD_ENCOUNTER_MEMUSAGE,
	SCMD_ENCOUNTER_NEIGHBORHOOD,
	SCMD_ENCOUNTER_PROCESSING,
	SCMD_ENCOUNTER_STAT,
	SCMD_ENCOUNTER_SET_TWEAK,
	SCMD_ENCOUNTER_PANIC_THRESHOLD,
	SCMD_ENCOUNTER_MODE,
	SCMD_ENCOUNTER_COVERAGE,
	SCMD_ENCOUNTER_MINAUTOSTART,
	SCMD_CRITTER_LIMITS,
	SCMD_ZONESCRIPT_START,
	SCMD_ZONEEVENT_START,
	SCMD_ZONEEVENT_STOP,
	SCMD_ZONEEVENT_SIGNAL,
	SCMD_SHARDEVENT_START,
	SCMD_SHARDEVENT_STOP,
	SCMD_SHARDEVENT_SIGNAL,
	SCMD_SCRIPTLOCATION_PRINT,
	SCMD_SCRIPTLOCATION_START,
	SCMD_SCRIPTLOCATION_STOP,
	SCMD_SCRIPTLOCATION_SIGNAL,
	SCMD_DESTROY,
	SCMD_OMNIPOTENT,
	SCMD_DEFS_RELOAD,
	SCMD_INSPIRE,
	SCMD_INSPIREX,
	SCMD_INSPIRE_ARENA,
	SCMD_INSPMERGE,
	SCMD_BOOST,
	SCMD_BOOSTSET,
	SCMD_BOOSTX,
	SCMD_BOOSTS_SETLEVEL,
	SCMD_CONVERT_BOOST,
	SCMD_TEMP_POWER,
	SCMD_TEMP_POWERX,
	SCMD_TEMP_POWER_REVOKE,
	SCMD_PVP,
	SCMD_PVP_SWITCH,
	SCMD_PVP_ACTIVE,
	SCMD_PVP_LOGGING,
	SCMD_COMBATSTATSRESET,
	SCMD_COMBATSTATSDUMP,
	SCMD_COMBATSTATSDUMP_PLAYER,
	SCMD_COMBATSTATSDUMP_AGGREGATE,
	SCMD_SPAWNVILLAIN,
	SCMD_SPAWNMANYVILLAINS,
	SCMD_SPAWN_MOB,
	SCMD_SPAWNPET,
	SCMD_SPAWNDOPPELGANGER,
	SCMD_SPAWNDOPPELGANGERTEST,
	SCMD_TEAMCREATE,
	SCMD_TEAMLEAVE,
	SCMD_TEAMJOIN,
	SCMD_MEMMONITOR,
	SCMD_MEM_CHECK,
	SCMD_STRINGTABLE_MEM_DUMP,
	SCMD_STASHTABLE_MEM_DUMP,
	SCMD_STORYARC_PRINT,
	SCMD_STORYARC_DETAILS,
	SCMD_STORYARC_RELOAD,
	SCMD_STORYARC_COMPLETE_DIALOG_DEBUG,
	SCMD_FIXUP_STORYARCS,
	SCMD_REWARD,
	SCMD_REWARD_RELOAD,
	SCMD_REWARD_INFO,
	SCMD_REWARDDEF_APPLY,
	SCMD_REWARD_STORY,
	SCMD_REWARD_DEBUG_TARGET,
	SCMD_GETTASK,
	SCMD_CONTACT_GETTASK,
	SCMD_GETSTORYARC,
	SCMD_GETSTORYARCTASK,
	SCMD_CONTACT_GETSTORYARC,
	SCMD_CONTACT_ACCEPTTASK,
	SCMD_STARTMISSION,
	SCMD_STARTSTORYARCMISSION,
	SCMD_MISSION_INIT,
	SCMD_MISSION_USEREXIT,
	SCMD_MISSION_DEBUGEXIT,
	SCMD_MISSION_DEBUGKICK,
	SCMD_MISSION_DEBUGUNKICK,
	SCMD_REQUEST_TELEPORT,
	SCMD_REQUEST_MISSION_EXIT_ALT,
	SCMD_REQUEST_SCRIPT_ENTER_DOOR,
	SCMD_BASE_DEBUGENTER,
	SCMD_BASE_ENTERBYSGID,
	SCMD_BASE_EXPLICIT,
	SCMD_BASE_RETURN,
	SCMD_APARTMENT,
	SCMD_CONTACT_INTERACT,
//	SCMD_CONTACT_NEWSPAPER, // using cell phone interface for newspapers now
	SCMD_CONTACT_CELL,
	SCMD_CONTACT_GETALL,
	SCMD_CONTACT_SHOW,
	SCMD_CONTACT_DATAMINE,
	SCMD_CONTACT_SHOW_MINE,
	SCMD_CONTACT_ADD,
	SCMD_CONTACT_ADD_ALL,
	SCMD_CONTACT_GOTO,
	SCMD_CONTACT_GOTO_AND_SELECT,
	SCMD_CONTACT_INTRODUCTIONS,
	SCMD_CONTACT_INTROPEER,
	SCMD_CONTACT_INTRONEXT,
	SCMD_CONTACT_DETAILS,
	SCMD_CONTACT_SETCXP,
	SCMD_MISSION_COMPLETE,
	SCMD_MISSION_REQUEST_SHUTDOWN,
	SCMD_MISSION_OK_SHUTDOWN,
	SCMD_MISSION_FORCE_SHUTDOWN,
	SCMD_MISSION_CHANGE_OWNER,
	SCMD_MISSION_REATTACH_INTERNAL,
	SCMD_MISSION_KICKPLAYER_INTERNAL,
	SCMD_MISSION_RESEED,
	SCMD_MISSION_DEBUG_ADDTIME,
	SCMD_REWARD_BONUS_TIME,
	SCMD_NEWSPAPER_TEAM_COMPLETE_INTERNAL,
	SCMD_TASK_TEAM_COMPLETE_INTERNAL,
	SCMD_TASK_COMPLETE_INTERNAL,
	SCMD_TASK_ADVANCE_COMPLETE,
	SCMD_OBJECTIVE_COMPLETE_INTERNAL,
	SCMD_CLUE_ADDREMOVE_INTERNAL,
	SCMD_CLUE_ADDREMOVE,
	SCMD_TASK_COMPLETE,
	SCMD_TASK_FAIL,
	SCMD_TASK_STARTTIMER,
	SCMD_TASK_STARTTIMER_NOFAIL,
	SCMD_TASK_CLEARTIMER,
	SCMD_TASK_SELECT_VALIDATE,
	SCMD_TASK_SELECT_VALIDATE_ACK,
	SCMD_FLASHBACK_TEAM_REQUIRES_VALIDATE,
	SCMD_FLASHBACK_TEAM_REQUIRES_VALIDATE_ACK,
	SCMD_SHOW_CUTSCENE,
	SCMD_SG_TASK_COMPLETE,
	SCMD_SG_TASK_FAIL,
	SCMD_TASK_GETALL,
	SCMD_TASK_GETDETAIL,
	SCMD_UNIQUETASK_INFO,
	SCMD_TASKFORCE_CREATE,
	SCMD_TASKFORCE_DESTROY,
	SCMD_TASKFORCE_MODE,
	SCMD_TASKFORCE_JOIN,
	SCMD_RESETPREDICT,
	SCMD_PRINTCONTROLQUEUE,
	SCMD_LEVEL_UP_XP,
	SCMD_LEVEL_UP_WISDOM,
	SCMD_PACKETDEBUG,
	SCMD_LOCALE,
	SCMD_INFLUENCE,
	SCMD_INFLUENCE_ADD,
	SCMD_PACTMEMBER_INFLUENCE_ADD,
	SCMD_PACTMEMBER_EXPERIENCE_GET,
	SCMD_LEVELINGPACT_EXIT,
	SCMD_SG_INFLUENCE,
	SCMD_SG_INFLUENCE_ADD,
	SCMD_PRESTIGE,
	SCMD_PRESTIGE_ADD,
	SCMD_EXPERIENCE,
	SCMD_EXPERIENCE_ADD,
	SCMD_XPDEBT,
	SCMD_XPDEBT_REMOVE,
	SCMD_WISDOM,
	SCMD_WISDOM_ADD,
	SCMD_REPUTATION,
	SCMD_REPUTATION_ADD,
	SCMD_TRAIN,
	SCMD_MISSION_SHOW,
	SCMD_MISSION_SHOWFAKECONTACT,
	SCMD_PNPC_SHOW,
	SCMD_VISITLOCATIONS_SHOW,
	SCMD_DOORS_SHOW,
	SCMD_DOORS_SHOW_MISSION,
	SCMD_DOORS_SHOW_MISSION_TYPES,
	SCMD_STORY_INFO_RESET,
	SCMD_STORY_TOGGLE_CONTACT,
	SCMD_GOING_ROGUE_TIPS_RESET,
	SCMD_PNPC_RELOAD,
	SCMD_DOORANIM_ENTER,
	SCMD_DOORANIM_ENTER_ARENA,
	SCMD_DOORANIM_EXIT,
	SCMD_DOORANIM_EXIT_ARENA,
	SCMD_RANDOMFAME_ADD,
	SCMD_RANDOMFAME_TEST,
	SCMD_EMAILHEADERS,
	SCMD_EMAILREAD,
	SCMD_EMAILDELETE,
	SCMD_EMAILSEND,
	SCMD_EMAILSENDATTACHMENT,
	SCMD_EMAILSYSTEM,
	SCMD_MOTION,
	SCMD_SHOW_OBJECTIVES,
	SCMD_GOTO_OBJECTIVE,
	SCMD_NEXT_OBJECTIVE,
	SCMD_ASSIST,
	SCMD_ACCESSLEVEL,
	SCMD_STUCK,
	SCMD_SYNC,
	SCMD_FORCE_MISSION_LOAD,
	SCMD_MISSION_STATS,
	SCMD_MISSION_STATS_TO_FILE,
	SCMD_MAP_CHECK_STATS,
	SCMD_ALL_MAP_CHECK_STATS,
	SCMD_MISSION_CONTROL,
	SCMD_GOTO_SPAWN,
	SCMD_SCAN_LOG,
	SCMD_NET_PROFILE,
	SCMD_NOSHAREDMEMORY,
	SCMD_BE_VILLAIN,
	SCMD_BE_SELF,
	SCMD_BE_VILLAIN_FOR_REAL,
	SCMD_AFK,
	SCMD_DEBUG,
	SCMD_DEBUG_COPYINFO,
	SCMD_DEBUG_DETAIL,
	SCMD_DEBUG_TRAY,
	SCMD_DEBUG_SPECIALIZATIONS,
	SCMD_DEBUG_POWER,
	SCMD_GOTO,
	SCMD_GOTO_INTERNAL,
	SCMD_EDITMESSAGE,
	SCMD_GOTOMISSION,
	SCMD_TESTMISSION,
	SCMD_STATS,
	SCMD_CLEAR_STATS,
	SCMD_KIOSK,
	SCMD_NOJUMPREPEAT,
	SCMD_MISSIONX,
	SCMD_MISSIONXMAP,
	SCMD_SOUVENIRCLUE_GET,
	SCMD_SOUVENIRCLUE_REMOVE,
	SCMD_SOUVENIRCLUE_APPLY,
	SCMD_TEAMTASK_SET,
	SCMD_TEAMTASK_ABANDON,
	SCMD_PETITION_INTERNAL,
	SCMD_TITLE_1,
	SCMD_TITLE_2,
	SCMD_TITLE_THE,
	SCMD_TITLE_SPECIAL,
	SCMD_TITLE_SPECIAL_EXPIRES,
	SCMD_TITLE_AND_EXPIRES_SPECIAL,
	SCMD_CSR_TITLE_AND_EXPIRES_SPECIAL,
	SCMD_FX_SPECIAL,
	SCMD_FX_SPECIAL_EXPIRES,
	SCMD_SAFE_PLAYER_COUNT,
	SCMD_DELINKME,
	SCMD_MAP_SHUTDOWN,
	SCMD_COLLRECORD,
	SCMD_COLLRECORDSTOP,
	SCMD_NEXT_DOOR,
	SCMD_NEXT_MISSIONDOOR,
	SCMD_SHOW_TASKDOOR,
	SCMD_TEAMLOG_DUMP,
	SCMD_TEAMLOG_ECHO,
	SCMD_TRICK_OR_TREAT,
	SCMD_TIMEOFFSET,
	SCMD_TIMEDEBUG,
	SCMD_TIMESET,
	SCMD_TIMESETALL,

	SCMD_PLAYER_MORPH,
	SCMD_REQUEST_PACKAGEDENT,

	SCMD_PLAYER_RENAME,
	SCMD_SET_PLAYER_RENAME_TOKEN,
	SCMD_UNLOCK_CHARACTER,
	SCMD_ADJUST_SERVER_SLOTS,
	SCMD_PLAYER_RENAME_PAID,
	SCMD_PLAYER_RENAME_RESERVED,
	SCMD_PLAYER_RENAME_RELAY,
	SCMD_CHECK_PLAYER_NAME,
	SCMD_ORDER_RENAME,
	SCMD_ORDER_RESPEC,
	SCMD_SGROUP_RENAME,
	SCMD_SGROUP_RENAME_RELAY,

	SCMD_ARENA_JOIN,
	SCMD_ARENA_CREATE,
	SCMD_ARENA_DESTROY,
	SCMD_ARENA_SETSIDE,
	SCMD_ARENA_READY,
	SCMD_ARENA_SETMAP,
	SCMD_ARENA_CAMERA,
	SCMD_ARENA_UNCAMERA,
	SCMD_ARENA_ENTER,
	SCMD_ARENA_POPUP,
	SCMD_ARENA_DEBUG,
	SCMD_ARENA_PLAYER_STATS,
	SCMD_ARENA_KIOSK,
	SCMD_ARENA_SCORE,

	SCMD_SGRAID_LENGTH,
	SCMD_SGRAID_SIZE,
	SCMD_SGRAID_CHALLENGE,
	SCMD_SGRAID_CHALLENGE_INTERNAL,
	SCMD_SGRAID_WARP,
	SCMD_SGRAID_SETVAR,
	SCMD_SGRAID_STAT,
	SCMD_SGRAID_BASEINFO,
	SCMD_SGRAID_WINDOW,

	SCMD_CSR_BUG_INTERNAL,

	SCMD_POWERS_CASH_IN,
	SCMD_POWERS_RESET,
	SCMD_POWERS_BUY_POWER_DEV,
	SCMD_POWERS_REVOKE_DEV,
	SCMD_POWERS_CANCEL_DEV,
	SCMD_POWERS_CANCEL,
	SCMD_SHOW_POWER_TARGET_INFO,
	SCMD_POWERS_BUY_POWER,
	SCMD_POWERS_CHECK,
	SCMD_POWERS_INFO,
	SCMD_POWERS_INFO_BUILD,
	SCMD_POWERS_SET_LEVEL,
	SCMD_AUTOENHANCE,
	SCMD_AUTOENHANCEIO,
	SCMD_AUTOENHANCESET,
	SCMD_MAXBOOSTS,
	SCMD_RECALC_STR,
	SCMD_SET_POWERDIMINISH,
	SCMD_SHOW_POWERDIMINISH,

	SCMD_SHARDCOMM,

	SCMD_BADGE_SHOW,
	SCMD_SGRP_BADGE_SHOW,
	SCMD_BADGE_SHOW_ALL,
	SCMD_BADGE_GRANT,
	SCMD_BADGE_GRANT_BITS,
	SCMD_BADGE_SHOW_BITS,
	SCMD_BADGE_GRANT_ALL,
	SCMD_BADGE_REVOKE,
	SCMD_BADGE_REVOKE_ALL,
	SCMD_BADGE_STAT_SHOW,
	SCMD_BADGE_STAT_SET,
	SCMD_BADGE_STAT_ADD,
	SCMD_BADGE_STAT_ADD_RELAY,
	SCMD_BADGE_BUTTON_USE,

	SCMD_SHARDCOMM_FRIEND,
	SCMD_SHARDCOMM_UNFRIEND,
	SCMD_CHAT_CMD_RELAY,
	SCMD_SHARDCOMM_CHAN_INVITE,
	SCMD_SHARDCOMM_CHAN_INVITE_SG,
	SCMD_SHARDCOMM_GMOTD,
	SCMD_SHARDCOMM_GETGLOBAL,
	SCMD_SHARDCOMM_GETGLOBALSILENT,
	SCMD_SHARDCOMM_GMAILCLAIM,
	SCMD_SHARDCOMM_GMAILRETURN,
	SCMD_CSR_GMAILPENDING,

	SCMD_SHARDCOMM_CSR_NAME,
	SCMD_SHARDCOMM_CSR_KILLCHANNEL,
	SCMD_SHARDCOMM_CSR_SILENCE_HANDLE,
	SCMD_SHARDCOMM_CSR_SILENCEALL,
	SCMD_SHARDCOMM_CSR_UNSILENCEALL,
	SCMD_SHARDCOMM_CSR_SENDALL,
	SCMD_SHARDCOMM_CSR_SHUTDOWN,
	SCMD_SHARDCOMM_SEND,
	SCMD_SHARDCOMM_CSR_RENAMEALL,
	SCMD_SHARDCOMM_CSR_GRANTRENAME,
	SCMD_SHARDCOMM_CSR_MEMBERSMODE,
	SCMD_SHARDCOMM_CSR_REMOVEALL,
	SCMD_SHARDCOMM_CSR_CHECKMAILSENT,
	SCMD_SHARDCOMM_CSR_CHECKMAILRECV,
	SCMD_SHARDCOMM_CSR_BOUNCEMAILSENT,
	SCMD_SHARDCOMM_CSR_BOUNCEMAILRECV,
	SCMD_GETHANDLE,
	SCMD_GETHANDLE_RELAY,
	SCMD_CHATSERVERTEST,

	SCMD_GRANT_RESPEC,
	SCMD_RESPEC_STATUS,
	SCMD_GRANT_RESPEC_TOKEN,
	SCMD_GRANT_COUNTER_RESPEC,
	SCMD_GRANT_CAPE,
	SCMD_GRANT_GLOW,
	SCMD_GRANT_COSTUMEPART,
	SCMD_REMOVE_RESPEC,
	SCMD_REMOVE_RESPEC_TOKEN,
	SCMD_REMOVE_COUNTER_RESPEC,
	SCMD_REMOVE_CAPE,
	SCMD_REMOVE_GLOW,
	SCMD_REMOVE_COSTUMEPART,
	SCMD_NEW_SCENE,
	SCMD_RESET_COSTUME,
	SCMD_ADD_TAILOR,
	SCMD_ADD_TAILOR_PER_SLOT,
	SCMD_FREE_TAILOR,
	SCMD_ULTRATAILOR_GRANT,
	SCMD_FREE_TAILOR_STATUS,

	SCMD_CSR_CRITTER_LIST,
	SCMD_CSR_GOTO_CRITTER_ID,
	SCMD_CSR_GOTO_CRITTER_NAME,
	SCMD_CSR_AUTHKICK,
	SCMD_CSR_NEXT_ARCHVILLAIN,

	SCMD_LISTEN,
	SCMD_ATTRIBUTETARGET,
	SCMD_PETATTRIBUTETARGET,
	SCMD_CLEARATTRIBUTETARGET,

	SCMD_AUTHUSERDATA_SET,
	SCMD_AUTHUSERDATA_SHOW,

	SCMD_RESPEC,
	SCMD_CSR_DESCRIPTION_SET,
	SCMD_DIFFICULTY_SET_LEVEL,
	SCMD_DIFFICULTY_SET_TEAMSIZE,
	SCMD_DIFFICULTY_SET_AV,
	SCMD_DIFFICULTY_SET_BOSS,

	SCMD_GET_RATED_ARENA_STATS,
	SCMD_GET_ALL_ARENA_STATS,
	
	SCMD_REWARD_CONCEPTDEF,
	SCMD_REWARD_CONCEPTITEM,
	SCMD_REWARD_RECIPE,
	SCMD_REWARD_RECIPE_ALL,
	SCMD_REWARD_DETAILRECIPE,
	SCMD_INVENTION_REWARDALL, // give every item applicable to invention
	SCMD_INV_CLEARALL,
	SCMD_REMOVE_RECIPE,

	SCMD_DEBUG_EXPR,

	SCMD_SERVER_TIME,

	SCMD_FILL_POWERUP_SLOT, // fill a powerup slot in an enhancement

	SCMD_BASE_SAVE,
	SCMD_BASE_DESTROY,

	SCMD_ARENA_MAKEPETS,
	SCMD_NOVODEX_INIT_WORLD,
	SCMD_NOVODEX_DEINIT_WORLD,
	SCMD_REWARD_TOKEN,
	SCMD_REWARD_TOKEN_TO_PLAYER,
	SCMD_REMOVE_TOKEN,
	SCMD_REMOVE_TOKEN_FROM_PLAYER,
	SCMD_LIST_TOKENS,
	SCMD_LIST_ACTIVE_PLAYER_TOKENS,
	SCMD_LIST_PHASES,
	SCMD_IS_VIP,
	SCMD_MREWARD_TOKEN,
	SCMD_MREMOVE_TOKEN,
	SCMD_MLIST_TOKENS,	
	SCMD_SGRP_REWARD_TOKEN,
	SCMD_SGRP_REMOVE_TOKEN,
	SCMD_SGRP_LIST_TOKENS,
	SCMD_SGRP_STAT,
	SCMD_SHOW_PETNAMES, 
	SCMD_CLEAR_PETNAMES,
	SCMD_SET_PETNAME,
	SCMD_KILL_ALLPETS,
	SCMD_SGRP_BADGESTATES,
	SCMD_SERVEFLOATER,
	SCMD_SGRPBADGEAWARD_NOTIFY_RELAY,
	SCMD_SALVAGE_NAMES,
	SCMD_SALVAGE_LIST,
	SCMD_SALVAGE_GRANT,
	SCMD_SALVAGE_REVOKE,
	SCMD_COSTUME_SLOT_GRANT,
	SCMD_CHECK_COSTUME_SLOTS,
	SCMD_DETAIL_NAMES,
	SCMD_DETAIL_LIST,
	SCMD_DETAIL_GRANT,
	SCMD_DETAIL_REVOKE,
	SCMD_SG_DETAIL_NAMES,
	SCMD_SG_DETAIL_LIST,
	SCMD_SG_DETAIL_GRANT,
	SCMD_TEST_IMEBUG,
	SCMD_SG_DETAIL_REVOKE,
	SCMD_SG_SET_RANK,
	SCMD_DETAIL_CAT_NAMES,
	SCMD_SG_UPDATEMEMBER,
	SCMD_SG_CSR_JOIN,
	SCMD_TELEPORT_TO_BASE,
	SCMD_SG_ITEM_OF_POWER_GRANT_NEW,
	SCMD_SG_ITEM_OF_POWER_GRANT,
	SCMD_SG_ITEM_OF_POWER_REVOKE,
	SCMD_SG_ITEM_OF_POWER_LIST,
	SCMD_SG_ITEM_OF_POWER_TRANSFER,
	SCMD_SG_ITEM_OF_POWER_SYNCH,
	SCMD_SG_ITEM_OF_POWER_UPDATE,
	SCMD_SG_ITEM_OF_POWER_GAME_SET_STATE,
	SCMD_SG_ITEM_OF_POWER_GAME_SHOW_SERVER_STATE,
	SCMD_SG_GRANT_RAID_POINTS,
	SCMD_SG_SHOW_RAID_POINTS,
	SCMD_BASEACCESS_FROMENT_RELAY,
	SCMD_BASEACCESS_RESPONSE_RELAY, 
	SCMD_SGRP_BASE_PRESTIGE_FIXED,
	SCMD_SGRP_BASE_PRESTIGE_SHOW,
	SCMD_SGRP_BASE_PRESTIGE_SET,
	SCMD_SGRP_TASK_COMPLETE,
	SCMD_SG_SWITCH_COLOR_SLOT,
	
	SCMD_POWER_COLOR_P1,
	SCMD_POWER_COLOR_P2,
	SCMD_POWER_COLOR_S1,
	SCMD_POWER_COLOR_S2,

	SCMD_BASE_STORAGE_ADJUST,
	SCMD_BASE_STORAGE_SET,
	
	SCMD_OFFLINE_CHARACTER,
	SCMD_OFFLINE_RESTORE_DELETED,
	SCMD_OFFLINE_LIST_DELETED,

	SCMD_EDIT_VILLAIN_COSTUME,
	SCMD_EDIT_NPC_COSTUME,

	SCMD_DEBUG_POWERS,
	SCMD_BACKUP_PLAYER,
	SCMD_BACKUP_SEARCH,
	SCMD_BACKUP_VIEW,
	SCMD_BACKUP_APPLY,
	SCMD_BACKUP_SG,
	SCMD_BACKUP_SEARCH_SG,
	SCMD_BACKUP_VIEW_SG,
	SCMD_BACKUP_APPLY_SG,
	SCMD_FORCE_LOGOOUT,
	SCMD_COMPLETE_STUCK_MISSION,
	SCMD_PLAYER_EVAL,
	SCMD_COMBAT_EVAL,
	SCMD_AUCTION_REQ_INV,
	SCMD_AUCTION_REQ_INV_FAILED,
	//SCMD_AUCTION_ADD_SALVAGEITEM,
	SCMD_AUCTION_TRUST_GAMECLIENT,
	SCMD_ACC_UNLOCK,
    SCMD_DUMP_STORYARCINFO,
	SCMD_CONPRINT,
	SCMD_ACCOUNT_GRANT_CHARSLOT,
	SCMD_ACCOUNT_INVENTORY_LIST,
	SCMD_ACCOUNT_INVENTORY_CHANGE,
	SCMD_ACCOUNT_CERTIFICATION_TEST,
	SCMD_ACCOUNT_CERTIFICATION_BUY,
	SCMD_ACCOUNT_CERTIFICATION_REFUND,
	SCMD_ACCOUNT_CERTIFICATION_DELETE,
	SCMD_ACCOUNT_CERTIFICATION_ERASE,
	SCMD_ACCOUNT_CERTIFICATION_SHOW,
	SCMD_ACCOUNT_CERTIFICATION_DELETE_ALL,
	SCMD_ACCOUNT_CERTIFICATION_CLAIM,
	SCMD_ACCOUNT_LOYALTY_BUY,
	SCMD_ACCOUNT_LOYALTY_REFUND,
	SCMD_ACCOUNT_LOYALTY_EARNED,
	SCMD_ACCOUNT_LOYALTY_SHOW,
	SCMD_ACCOUNT_LOYALTY_RESET,
	SCMD_RELAY_CONPRINTF,
	SCMD_UNSPAMME,
	SCMD_SELECT_BUILD,
	SCMD_ARCHITECT_USERINFO,
	SCMD_ARCHITECT_JOIN_RELAY,
	SCMD_ARCHITECT_CLAIM_TICKETS,
	SCMD_ARCHITECT_GRANT_TICKETS,
	SCMD_ARCHITECT_GRANT_OVERFLOW_TICKETS,
	SCMD_ARCHITECT_SET_BEST_ARC_STARS,
	SCMD_ARCHITECT_TOKEN,
	SCMD_ARCHITECT_SLOT,
	SCMD_DAYJOB_DEBUG,
	SCMD_ARCHITECT_INVISIBLE,
	SCMD_ARCHITECT_INVINCIBLE,
	SCMD_ARCHITECT_COMPLETEMISSION,
	SCMD_ARCHITECT_NEXTOBJECTIVE,
	SCMD_ARCHITECT_NEXTCRITTER,
	SCMD_ARCHITECT_KILLTARGET,
	SCMD_ARCHITECT_LOGINUPDATE,

	SCMD_START_ZONE_EVENT,
	SCMD_STOP_ZONE_EVENT,
	SCMD_GOTO_STAGE,
	SCMD_DISABLE_ZONE_EVENT,
	SCMD_ZONE_EVENT_KILL_DEBUG,
	SCMD_SET_TURNSTILE_MAP_INFO,
	SCMD_GET_TURNSTILE_MAP_INFO,
//	SCMD_ASSERT_ON_BITSTREAM_ERRORS,

	SCMD_ZONE_EVENT_KARMA_MODIFY,
	SCMD_ROGUE_STATS,
	SCMD_ROGUE_ADDPARAGON,
	SCMD_ROGUE_ADDHERO,
	SCMD_ROGUE_ADDVIGILANTE,
	SCMD_ROGUE_ADDROGUE,
	SCMD_ROGUE_ADDVILLAIN,
	SCMD_ROGUE_ADDTYRANT,
	SCMD_ROGUE_RESETPARAGON,
	SCMD_ROGUE_RESETHERO,
	SCMD_ROGUE_RESETVIGILANTE,
	SCMD_ROGUE_RESETROGUE,
	SCMD_ROGUE_RESETVILLAIN,
	SCMD_ROGUE_RESETTYRANT,
	SCMD_ROGUE_SETPARAGON,
	SCMD_ROGUE_SETHERO,
	SCMD_ROGUE_SETVIGILANTE,
	SCMD_ROGUE_SETROGUE,
	SCMD_ROGUE_SETVILLAIN,
	SCMD_ROGUE_SETTYRANT,
	SCMD_ROGUE_SWITCHPARAGON,
	SCMD_ROGUE_SWITCHHERO,
	SCMD_ROGUE_SWITCHVIGILANTE,
	SCMD_ROGUE_SWITCHROGUE,
	SCMD_ROGUE_SWITCHVILLAIN,
	SCMD_ROGUE_SWITCHTYRANT,
	SCMD_ALIGNMENT_DROPTIP,
	SCMD_ALIGNMENT_RESETTIMERS,
	SCMD_ALIGNMENT_RESETSINGLETIMER,
	SCMD_DROPTIP_DESIGNER,
	SCMD_DROPTIP_DESIGNER_LIST_ALL,

	SCMD_ROGUE_VERIFYCONTACTS,
	SCMD_ROGUE_VERIFYMYCONTACTS,
	SCMD_ROGUE_SENDMESSAGEIFONALIGNMENTMISSION,
	SCMD_ROGUE_PRINTMESSAGEONALIGNMENTMISSION,

	SCMD_INCARNATE_SLOT_ACTIVATE,
	SCMD_INCARNATE_SLOT_ACTIVATE_ALL,
	SCMD_INCARNATE_SLOT_DEACTIVATE,
	SCMD_INCARNATE_SLOT_DEACTIVATE_ALL,
	SCMD_INCARNATE_SLOT_DEBUGPRINT,
	SCMD_INCARNATE_SLOT_DEBUGPRINT_ALL,
	SCMD_INCARNATE_SLOT_REWARD_EXPERIENCE,

	SCMD_POWERS_DISABLE,
	SCMD_POWERS_ENABLE,
	SCMD_POWERS_DEBUGPRINT_DISABLED,

	SCMD_INCARNATE_GRANT,
	SCMD_INCARNATE_REVOKE,
	SCMD_INCARNATE_GRANT_ALL,
	SCMD_INCARNATE_REVOKE_ALL,
	SCMD_INCARNATE_GRANT_ALL_BY_SLOT,
	SCMD_INCARNATE_REVOKE_ALL_BY_SLOT,
	SCMD_INCARNATE_DEBUGPRINT_HAS_IN_INVENTORY,
	SCMD_INCARNATE_EQUIP,
	SCMD_INCARNATE_UNEQUIP,
	SCMD_INCARNATE_UNEQUIP_BY_SLOT,
	SCMD_INCARNATE_UNEQUIP_ALL,
	SCMD_INCARNATE_FORCE_EQUIP,
	SCMD_INCARNATE_FORCE_UNEQUIP,
	SCMD_INCARNATE_FORCE_UNEQUIP_BY_SLOT,
	SCMD_INCARNATE_DEBUGPRINT_IS_EQUIPPED,
	SCMD_INCARNATE_DEBUGPRINT_GET_EQUIPPED,

	SCMD_SET_COMBAT_MOD_SHIFT,
	SCMD_GOTO_MARKER,
	SCMD_CHANGE_TITLE,

	SCMD_POP_HELP,
	SCMD_POP_HELP_RESET,

	SCMD_DBFLAGS_SHOW,
	SCMD_DBFLAGS_SET,

	SCMD_NAMED_TELEPORT,

	SCMD_FAKEAUCTION_ADD_SALVAGE,
	SCMD_FAKEAUCTION_ADD_RECIPE,
	SCMD_FAKEAUCTION_ADD_SET,
	SCMD_FAKEAUCTION_PURGE,

	SCMD_LOCK_DOORS,

	SCMD_ARCHITECT_CSR_GET_ARC,
	SCMD_ARCHITECT_USERIDINFO,

	SCMD_ENABLEMEMPOOLDEBUG,
	SCMD_GOTOENTBYNAME,

	SCMD_TSS_XFER_OUT,
	SCMD_TSS_XFER_BACK,
	SCMD_SHARDXFER_COMPLETE,
	SCMD_SHARDXFER_JUMP,

	SCMD_ARCHITECT_OTHERUSERINFO,

	SCMD_GROUP_HIDE,

	SCMD_EVENTHISTORY_FIND,

	SCMD_AUTOCOMMAND_ADD,
	SCMD_AUTOCOMMAND_DELETE,
	SCMD_AUTOCOMMAND_SHOWALL,
	SCMD_AUTOCOMMAND_SHOWBYCOMMAND,
	SCMD_AUTOCOMMAND_TESTRUN,

	SCMD_REWARD_WEEKLY_TF_ADD,
	SCMD_REWARD_WEEKLY_TF_REMOVE,
	SCMD_REWARD_WEEKLY_TF_SET_EPOCH_TIME,
	SCMD_REWARD_DB_WEEKLY_TF_UPDATE,
	SCMD_REWARD_WEEKLY_TF_PRINT_ACTIVE,
	SCMD_REWARD_WEEKLY_TF_PRINT_ALL,

	SCMD_CONTACT_DEBUG_OUTPUT_FLOWCHART_FILE,

	SCMD_SET_HELPER_STATUS,
	SCMD_TEST_LOGGING,

	SCMD_NX_PHYSX_CONNECT,
	SCMD_NX_RAGDOLL_COUNT,

	SCMD_ACCESSIBLE_CONTACTS_DEBUG_GET_FIRST,
	SCMD_ACCESSIBLE_CONTACTS_DEBUG_GET_NEXT,
	SCMD_ACCESSIBLE_CONTACTS_DEBUG_GET_PREVIOUS,
	SCMD_ACCESSIBLE_CONTACTS_DEBUG_GET_CURRENT,
	SCMD_ACCESSIBLE_CONTACTS_SHOW_CURRENT,
	SCMD_ACCESSIBLE_CONTACTS_SHOW_NEXT,
	SCMD_ACCESSIBLE_CONTACTS_SHOW_PREVIOUS,
	SCMD_ACCESSIBLE_CONTACTS_TELEPORT_TO_CURRENT,
	SCMD_ACCESSIBLE_CONTACTS_SELECT_CURRENT,

	SCMD_DEBUG_DISABLE_AUTO_DISMISS,
	SCMD_GET_MARTY_STATUS,
	SCMD_SET_MARTY_STATUS,
	SCMD_SET_MARTY_STATUS_RELAY,
	SCMD_CSR_CLEAR_MARTY_HISTORY,
	SCMD_CSR_PRINT_MARTY_HISTORY,
	SCMD_NOKICK,
	SCMD_FLASHBACK_LEFT_REWARD_APPLY,
	SCMD_DEBUG_SET_VIP,
	SCMD_ACCOUNT_RECOVER_UNSAVED,
	SCMD_OPEN_SALVAGE_BY_NAME,
	SCMD_SUPPORT_HOME,
	SCMD_SUPPORT_KB,

	SCMD_SHOW_LUA_LIB,
	SCMD_SHOW_LUA_ALL,
	SCMD_SCRIPTDEF_START,
	SCMD_SCRIPTLUA_START,
	SCMD_SCRIPTLUA_START_STRING,
	SCMD_SCRIPTLUA_EXEC,
	SCMD_NEW_FEATURE_OPEN,
	SCMD_DISPLAY_PRODUCT_PAGE,
	SCMD_FORCE_QUEUE_FOR_EVENT,

	SCMD_SET_ZMQ_CONNECT_STATE,
	SCMD_GET_ZMQ_STATUS,

	SCMD_TOTAL_COMMANDS // must be last
};


enum ChatCmd
{
	CMD_CHAT_PRIVATE = SCMD_TOTAL_COMMANDS,
	CMD_CHAT_PRIVATE_TEAM_LEADER,
	CMD_CHAT_PRIVATE_LEAGUE_LEADER,
	CMD_CHAT_TEAM,
	CMD_CHAT_BROADCAST,
	CMD_CHAT_LOCAL,
	CMD_CHAT_REQUEST,
	CMD_CHAT_LOOKING_FOR_GROUP,
	CMD_CHAT_FRIEND,
	CMD_CHAT_SUPERGROUP,
	CMD_CHAT_LEVELINGPACT,
	CMD_CHAT_EMOTE,
	CMD_CHAT_EMOTE_COSTUME_CHANGE,
	CMD_CHAT_ALLIANCE,
	CMD_CHAT_REPLY,
	CMD_CHAT_TELL_LAST,
	CMD_CHAT_TRIAL_RESPONSE,

	CMD_ADD_FRIEND,
	CMD_REMOVE_FRIEND,
	CMD_FRIENDLIST,

	CMD_TEAM_INVITE,
	CMD_TEAM_INVITE_LONG,
	CMD_TEAM_INVITE_ACCEPT,
	CMD_TEAM_ACCEPT_RELAY,
	CMD_TEAM_ACCEPT_OFFER_RELAY,
	CMD_TEAM_INVITE_DECLINE,
	CMD_TEAM_KICK,
	CMD_TEAM_KICK_INTERNAL,
	CMD_TEAM_KICK_RELAY,
	CMD_TEAM_MAP_RELAY,
	CMD_TEAM_QUIT,
	CMD_TEAM_QUIT_INTERNAL,
	CMD_TEAM_QUIT_RELAY,
	CMD_TEAM_LFG,
	CMD_TEAM_LFG_SET,
	CMD_TEAM_BUFF_DISP,
	CMD_TEAM_CHANGE_LEADER,
	CMD_TEAM_CHANGE_LEADER_RELAY,
	CMD_TEAM_MOVE_CREATE_LEAGUE,
	
	CMD_DEBUG_LEVELINGPACT_ENABLE,
	CMD_LEVELINGPACT_INVITE,
	CMD_LEVELINGPACT_QUIT,
	CMD_LEVELINGPACT_ACCEPT,
	CMD_LEVELINGPACT_DECLINE,

	CMD_LEVELINGPACT_CSR_ADD_MEMBER,
	CMD_LEVELINGPACT_CSR_ADD_MEMBER_XP,
	CMD_LEVELINGPACT_CSR_SET_EXPERIENCE,
	CMD_LEVELINGPACT_CSR_SET_INFLUENCE,
	CMD_LEVELINGPACT_CSR_INFO,

	CMD_SUPERGROUP_INVITE,
	CMD_SUPERGROUP_INVITE_LONG,
	CMD_SUPERGROUP_INVITE_BUSY,
	CMD_SUPERGROUP_INVITE_ACCEPT,
	CMD_SUPERGROUP_ACCEPT_RELAY,
	CMD_SUPERGROUP_INVITE_DECLINE,
	CMD_SUPERGROUP_KICK,
	CMD_SUPERGROUP_KICK_RELAY,
	CMD_SUPERGROUP_QUIT,
	CMD_SUPERGROUP_GET_STATS,
	CMD_SUPERGROUP_GET_STATS_RELAY,
	CMD_SUPERGROUP_GET_REFRESH_RELAY,
	CMD_SUPERGROUP_PROMOTE,
	CMD_SUPERGROUP_DEMOTE,
	CMD_SUPERGROUP_PROMOTE_LONG,
	CMD_SUPERGROUP_CSR_PROMOTE_LONG,
	CMD_SUPERGROUP_SET_DEFAULTS,
	CMD_SUPERGROUP_DEBUG_CREATE,
	CMD_SUPERGROUP_DEBUG_JOIN,
	CMD_SUPERGROUP_REGISTRAR,
	CMD_SUPERGROUP_MOTD_SET,
	CMD_SUPERGROUP_MOTTO_SET,
	CMD_SUPERGROUP_DESCRIPTION_SET,
//	CMD_SUPERGROUP_TITHE_SET,
	CMD_SUPERGROUP_DEMOTETIMEOUT_SET,
	CMD_SUPERGROUP_MODE,
	CMD_SUPERGROUP_MODE_SET,
	CMD_SUPERGROUP_COSTUME,
	CMD_SUPERGROUP_RANK_PRINT,
	CMD_SUPERGROUP_RENAME_LEADER,
	CMD_SUPERGROUP_RENAME_COMMANDER,
	CMD_SUPERGROUP_RENAME_CAPTAIN,
	CMD_SUPERGROUP_RENAME_LIEUTENANT,
	CMD_SUPERGROUP_RENAME_MEMBER,
	CMD_SUPERGROUP_RENAME_RANK,
	CMD_SUPERGROUP_WHO,
	CMD_SUPERGROUP_WHO_LEADER,

	CMD_ALLIANCE_INVITE,
	CMD_ALLIANCE_INVITE_RELAY,
	CMD_ALLIANCE_ACCEPT,
	CMD_ALLIANCE_ACCEPT_RELAY,
	CMD_ALLIANCE_DECLINE,
	CMD_ALLIANCE_CANCEL,
	CMD_ALLIANCE_NOSEND,
	CMD_ALLIANCE_MINTALKRANK,
	CMD_ALLIANCE_SG_MINTALKRANK,


	CMD_TF_QUIT_RELAY,

	CMD_TRADE_INVITE,
	CMD_TRADE_INVITE_ACCEPT,
	CMD_TRADE_INVITE_DECLINE,

	CMD_COSTUME_CHANGE,
	CMD_COSTUME_ADDSLOT,

	CMD_HIDE_SET,

	CMD_CHAT_ADMIN,
	CMD_CHAT_MAP_ADMIN,
	CMD_CHAT_ARENA,
	CMD_CHAT_ARENA_GLOBAL,
	CMD_CHAT_HELP_GLOBAL,
	CMD_CHAT_ARCHITECT_GLOBAL,
	CMD_SEND_SERVER_MSG,
	CMD_SEARCH,
	CMD_SET_BADGE_TITLE,
	CMD_SET_BADGE_TITLE_ID,
	CMD_SET_BADGE_DEBUG_LEVEL,
	CMD_GET_COMMENT,
	CMD_SET_COMMENT,

	CMD_ARENA_INVITE,
	CMD_ARENA_INVITE_LONG,
	CMD_ARENA_INVITE_ACCEPT,
	CMD_ARENA_INVITE_DECLINE,

	CMD_RAID_INVITE,
	CMD_RAID_INVITE_RELAY,
	CMD_RAID_ACCEPT,
	CMD_RAID_DECLINE,

	CMD_LEAGUE_INVITE,
	CMD_LEAGUE_INVITE_LONG,
	CMD_LEAGUE_ACCEPT,
	CMD_LEAGUE_ACCEPT_RELAY,
	CMD_LEAGUE_ACCEPT_OFFER_RELAY,
	CMD_LEAGUE_DECLINE,
	CMD_LEAGUE_QUIT_RELAY,
	CMD_LEAGUE_KICK,
	CMD_LEAGUE_KICK_INTERNAL,
	CMD_LEAGUE_KICK_RELAY,
	CMD_LEAGUE_MAP_RELAY,
	CMD_LEAGUE_CHANGE_LEADER,
	CMD_CHAT_LEAGUE,
	CMD_LEAGUE_TEAM_WITHDRAW,
	CMD_LEAGUE_TEAM_WITHDRAW_RELAY,
	CMD_LEAGUE_TEAM_SWAP_LOCK,
	CMD_LEAGUE_TEAM_SWAP_MEMBERS,
	CMD_LEAGUE_TEAM_MOVE_MEMBER,
	CMD_LEAGUE_REMOVE_ACCEPT_BLOCK,

	CMD_TURNSTILE_LEAGUE_QUIT,
	CMD_TURNSTILE_INVITE_PLAYER_TO_EVENT,
	CMD_TURNSTILE_INVITE_PLAYER_TO_EVENT_RELAY,
	CMD_TURNSTILE_INVITE_PLAYER_TO_EVENT_ACCEPT,
	CMD_TURNSTILE_INVITE_PLAYER_TO_EVENT_ACCEPT_RELAY,
	CMD_TURNSTILE_JOIN_SPECIFIC_MISSION_INSTANCE,
	CMD_REWARDCHOICE_CLEAR,

	CMD_ENDGAMERAID_VOTE_KICK,
	CMD_ENDGAMERAID_VOTE_KICK_OPINION,
	// final
	CHATCMD_TOTAL_COMMANDS // must be last
};

typedef enum ClientSgrpStatCmd
{
	SGRPSTATCMD_STATADJ = CHATCMD_TOTAL_COMMANDS,
	SGRPSTATCMD_SETRENTOVERDUE,
	SGRPSTATCMD_SETRENT,					// debugging function, for developers
	SGRPSTATCMD_PAYRENTFREE,				// for GMs, pays player's rent
	SGRPSTATCMD_PASSTHRU,				// pass strings directly to the debug hook.
	SGRPSTATCMD_SGRPUPDATE,				// force the statserver to update the sgrp
	SGRPSTATCMD_GIVEBADGE,				// reward the named badge
	SGRPSTATCMD_REVOKEBADGE,				// remove the named badge
	SGRPSTATCMD_STATSHOW,				// show the stats
	SGRPSTATCMD_STATSET,					// set the stat
	SGRPSTATCMD_BASEENTRYPERMISSIONS_REQ,// the bases
	SGRPSTATCMD_HAMMER,
	SGRPSTATCMD_SGRP_INFO,
	SGRPSTATCMD_SGRP_INFO_NAME,
	SGRPSTATCMD_SGRP_INFO_ID,
	SGRPSTATCMD_LEVELINGPACT_JOIN,
	SGRPSTATCMD_LEVELINGPACT_ADDXP,
	SGRPSTATCMD_LEVELINGPACT_ADDINFLUENCE,
	SGRPSTATCMD_LEVELINGPACT_GETINFLUENCE,
	SGRPSTATCMD_LEVELINGPACT_CSRXP,
	SGRPSTATCMD_LEVELINGPACT_UPDATEVERSION,	//updates old pacts when we add new features
	STATCMD_LEAGUE_JOIN,
	STATCMD_LEAGUE_JOIN_TURNSTILE,
	STATCMD_LEAGUE_PROMOTE,
	STATCMD_LEAGUE_CHANGE_TEAM_LEADER_TEAM,
	STATCMD_LEAGUE_CHANGE_TEAM_LEADER_SOLO,
	STATCMD_LEAGUE_UPDATE_TEAM_LOCK,
	STATCMD_LEAGUE_QUIT,
	SGRPSTATCMD_TOTAL_COMMANDS // must be last
} ClientSgrpStatCmd;

typedef enum ServerSgrpStatCmd
{
	SERVER_SGRPSTATCMD_STATADJ = SGRPSTATCMD_TOTAL_COMMANDS,
	SERVER_SGRPSTATCMD_CONPRINTF_RESPONSE,				// generic helper command, echos commands to originator
	SCMD_SGRP_BASE_RENTDUE_FROMENTID_RELAY,	// all players know that their rent is due
	SERVER_SGRPSTATCMD_CMDFAILED_RESPONSE,
	SERVER_SGRPSTATCMD_CMDFAILED2_RESPONSE, // 2 string arg resposne
	SERVER_SGRPSTATCMD_STATSHOW_RESPONSE,
	SERVER_SGRPSTATCMD_LOCALIZED_MESSAGE,

	SERVER_SGRPSTATCMD_TOTAL_COMMANDS // must be last
} ServerSgrpStatCmd;

typedef enum ClientAuctionCmd
{
	ClientAuctionCmd_None = SERVER_SGRPSTATCMD_TOTAL_COMMANDS,
	ClientAuctionCmd_GetInv,
	ClientAuctionCmd_RemInv,
	ClientAuctionCmd_LoginUpdate,
	ClientAuctionCmd_AccessLevel,
	ClientAuctionCmd_PlayerCount,

	ClientAuctionCmd_Count
} ClientAuctionCmd;

typedef enum AuctionCmdRes
{
	AuctionCmdRes_None = ClientAuctionCmd_Count,
	AuctionCmdRes_Err,
	AuctionCmdRes_GetInv,
	AuctionCmdRes_RemInv,
	AuctionCmdRes_LoginUpdate,

	AuctionCmdRes_Count
} AuctionCmdRes;


#endif
