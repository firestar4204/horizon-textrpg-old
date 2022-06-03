#ifndef HRPG_PLAYER_H
#define HRPG_PLAYER_H

#include <hrpg/weapon.h>

typedef struct {
	short hp;
	short stamina;
	short potion_count;
	weapon weapons[];
} player;

#endif

