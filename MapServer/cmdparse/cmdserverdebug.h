#ifndef _CMDSERVERDEBUG_H
#define _CMDSERVERDEBUG_H

#include "entity_enum.h"

typedef enum GotoNextTypes {
	FINDTYPE_SPAWN	= ENTTYPE_COUNT,
	FINDTYPE_SPAWNPOINT,
	FINDTYPE_MISSIONSPAWN,
	FINDTYPE_UMISSIONSPAWN,
	FINDTYPE_BADSPAWN,
	FINDTYPE_SEQ,
	FINDTYPE_OBJECTIVE,
	FINDTYPE_DOOR,
	FINDTYPE_NPC_CLUSTER,
} GotoNextTypes;

// Generated by mkproto
void gotoNextReset(ClientLink* client, int type);
void gotoNextEntity(EntType type, ClientLink* link, int awakeRequired);
void gotoNextSeq(char* seqName, ClientLink* link);
void gotoNextSpawn(ClientLink* link, int type);
void gotoNextMissionSpawn(ClientLink* client, int unconqueredOnly);
void gotoNextBadSpawn(ClientLink* link);
void gotoNextBadVolume(ClientLink* link);
void rescanBadVolume();
void gotoNextObjective(ClientLink* client);
void gotoNextDoor(ClientLink* client, int missiononly);
void gotoNextNPCCluster(ClientLink* client);
void gotoEntity(int id, ClientLink* link);
void gotoEntityByName(char *name, ClientLink* link);
void testNpcs(ClientLink *client,int villain_cnt,int tmp_int,int tmp_int2);
void printEntDebugInfo(ClientLink *client,int value,CmdContext* output);
int GroupFindTrayTest(GroupDef* def, Mat4 parent_mat);
// End mkproto
#endif