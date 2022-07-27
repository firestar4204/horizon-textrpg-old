#include <config.h>

#ifdef STDC_HEADERS
#include <stdlib.h>
#endif

#include <hrpg/player.h>
#include <hrpg/potion.h>

void
randomize_potions()
{
	current_player.potion_count = (rand() % 5);
}

void
heal()
{
	current_player.hp += 100;
	current_player.potion_count--;
}

