#ifndef HRPG_PLAYER_H
#define HRPG_PLAYER_H

typedef struct {
	short hp;
	short stamina;
	short potion_count;
	weapon weapons[];
} player;

#endif

