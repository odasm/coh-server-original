#ifndef ARENA_FIGHTER_H
#define ARENA_FIGHTER_H

/*
typedef struct TCStats {
	int deathcount;
	int defeatcount;
	int xp;
	int influence;
} TCStats;

extern TCStats stats;
extern int g_sendChatToLauncher;

void chatterLoop(void);
void setEvilChat(int evil);
int testChatNPC(void); // Returns the number of NPCs interacted with
void sendChatToLauncher(const char *fmt, ...);
*/
void arenaFighterLoop();
void arenaFighterListen(const char * s);
void arenaFighterDialog(const char * s);

#endif