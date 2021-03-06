#ifndef _BONES_H
#define _BONES_H

AUTO_ENUM;
typedef enum BoneId
{
	BONEID_HIPS,
	BONEID_WAIST,
	BONEID_CHEST,
	BONEID_NECK,
	BONEID_HEAD,
	BONEID_COL_R,
	BONEID_COL_L,
	BONEID_UARMR,
	BONEID_UARML,
	BONEID_LARMR,
	BONEID_LARML,
	BONEID_HANDR,
	BONEID_HANDL,
	BONEID_F1_R,
	BONEID_F1_L,
	BONEID_F2_R,
	BONEID_F2_L,
	BONEID_T1_R,
	BONEID_T1_L,
	BONEID_T2_R,
	BONEID_T2_L,
	BONEID_T3_R,
	BONEID_T3_L,
	BONEID_ULEGR,
	BONEID_ULEGL,
	BONEID_LLEGR,
	BONEID_LLEGL,
	BONEID_FOOTR,
	BONEID_FOOTL,
	BONEID_TOER,
	BONEID_TOEL,

	BONEID_FACE,
	BONEID_DUMMY,
	BONEID_BREAST,
	BONEID_BELT,
	BONEID_GLOVEL,
	BONEID_GLOVER,
	BONEID_BOOTL,
	BONEID_BOOTR,
	BONEID_RINGL,
	BONEID_RINGR,
	BONEID_WEPL,
	BONEID_WEPR,		// I love how extents are L/R, but everything else is R/L
	BONEID_HAIR,
	BONEID_EYES,
	BONEID_EMBLEM,
	BONEID_SPADL,
	BONEID_SPADR,
	BONEID_BACK,
	BONEID_NECKLINE,
	BONEID_CLAWL,
	BONEID_CLAWR,
	BONEID_GUN,

	BONEID_RWING1,
	BONEID_RWING2,
	BONEID_RWING3,
	BONEID_RWING4,

	BONEID_LWING1,
	BONEID_LWING2,
	BONEID_LWING3,
	BONEID_LWING4,

	BONEID_MYSTIC,

	BONEID_SLEEVEL,
	BONEID_SLEEVER,
	BONEID_ROBE,
	BONEID_BENDMYSTIC,

	BONEID_COLLAR,
	BONEID_BROACH,

	BONEID_BOSOMR,
	BONEID_BOSOML,

	BONEID_TOP,			// really "shirt", but that's an alias for chest
	BONEID_SKIRT,
	BONEID_SLEEVES,

	BONEID_BROW,
	BONEID_CHEEKS,
	BONEID_CHIN,
	BONEID_CRANIUM,
	BONEID_JAW,
	BONEID_NOSE,

	BONEID_HIND_ULEGL,
	BONEID_HIND_LLEGL,
	BONEID_HIND_FOOTL,
	BONEID_HIND_TOEL,
	BONEID_HIND_ULEGR,
	BONEID_HIND_LLEGR,
	BONEID_HIND_FOOTR,
	BONEID_HIND_TOER,
	BONEID_FORE_ULEGL,
	BONEID_FORE_LLEGL,
	BONEID_FORE_FOOTL,
	BONEID_FORE_TOEL,
	BONEID_FORE_ULEGR,
	BONEID_FORE_LLEGR,
	BONEID_FORE_FOOTR,
	BONEID_FORE_TOER,

	BONEID_LEG_L_JET1,
	BONEID_LEG_L_JET2,
	BONEID_LEG_R_JET1,
	BONEID_LEG_R_JET2,

	// these are last!
	BONEID_COUNT,
	BONEID_INVALID = -1,
	BONEID_DEFAULT = 0
} BoneId;

// NOTE: this previously checked against BONES_ON_DISK
//       there may be some lingering code that actually wants to check INRANGE0(boneid, BONES_ON_DISK)
static INLINEDBG int bone_IdIsValid(BoneId boneid) { return boneid >= 0 && boneid < BONEID_COUNT; }
#define bone_NameIsValid(name) bone_IdIsValid(bone_IdFromName(name))

BoneId bone_IdFromName(const char *name);
BoneId bone_IdFromText(const char *text);	// checks if text starts with a bone name
const char* bone_NameFromId(BoneId bone);

#if defined(CLIENT) || defined(SERVER)	// header inclusion gets pretty complicated, bones.h ends up in container servers
#if !defined(DBQUERY) && !defined(NO_TEXT_PARSER) && !defined(UNITTEST)			// for novodex wrapper, textparser uses some incompatible macros
#include "AutoGen/bones_h_ast.h"
#endif
#endif

#endif
