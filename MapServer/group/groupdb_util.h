#ifndef _GROUPDB_UTIL_H
#define _GROUPDB_UTIL_H


// Generated by mkproto

int groupIsLibSub(GroupDef *def);
void moveDefsToLib(GroupDef *def);
void delLibSubs(GroupDef *def,char *name);
void groupTraySwap(char *selname,DefTracker **trackers,int count);

// End mkproto
#endif
