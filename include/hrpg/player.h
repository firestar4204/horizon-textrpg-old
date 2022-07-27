#ifndef HRPG_PLAYER_H
#define HRPG_PLAYER_H

#include <hrpg/weapon.h>

typedef struct {
	short hp;
	short stamina;
	short potion_count;
	weapon_types weapons[3];
} player;

extern player current_player;

void init_player();
void print_player_stats();
void dodge();
void attack();

#endif

