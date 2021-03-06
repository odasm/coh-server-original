#ifndef _DBINIT_H
#define _DBINIT_H

#include "netio.h"
#include "container.h"

typedef struct
{
	NetLink		*link;
	int			map_id;
	U32			in_use : 1;
	U32			ready : 1;
	U32			static_link : 1;			// someone manually linked up a local mapserver as a static map - used by designers for testing gameplay / stats changes
	U32			container_server : 1;		// if ready, owns one or more lists
	U32			has_auctionhouse : 1;		// true if has auction house on this map
	U32			wait_list_id;				// list a non-ready container server is waiting on
	U32			lock_id;					// every netlink gets a unique one, to make sure containers are locked/unlocked by the same guy
	U32			last_processed_packet_id;	// Last packet id of a packet we processed
	U32			last_command;				// Command on last processed packet
	U32			last_packet_sib_count;		// Last packet sibling cound
} DBClientLink;

extern DbList	*map_list,*ent_list,*doors_list, *supergroups_list, *teamups_list, *email_list, *crashedmap_list, *launcher_list, *serverapp_list, *eventhistory_list, *autocommands_list, *league_list, *shardaccounts_list;

// Generated by mkproto
char *myHostname();
void mapOrTeamSpecialFree(DbContainer *container);
U32 dbLockIdFromLink(NetLink *link);
int dbClientCallback(NetLink *link);
int netLinkDelCallback(NetLink *link);
void msgScan();
char *getMapName(char *data,char *buf);
int getMapId(char *data);
void getStaticMapList();
int registerDbClient(Packet *pak,NetLink *link);
void dbNetInit();
void dbInit(int start_static); // pass INT_MAX for start_static to start them all
int main(int argc,char **argv);
void checkExitRequest(void);
NetLink *dbLinkFromLockId(int lock_id);
int mapserverCount(void);
NetLink *mapserverLink(int index);
void freeMapContainer(MapCon *container);
void registerContainerServer(Packet *pak,NetLink *link);
void registerContainerServerNotify(Packet* pak, NetLink* link);
void containerServerNotify(int list_id, U32 cid, U32 dbid, int add);
// End mkproto

#endif
