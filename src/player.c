#include <config.h>

#ifdef STDC_HEADERS
#include <stdio.h>
#include <stdlib.h>
#endif

#include <hrpg/machine.h>
#include <hrpg/potion.h>
#include <hrpg/player.h>
#include <hrpg/weapon.h>

player current_player;

void
init_player()
{
	current_player.hp = 500;
	current_player.stamina = 100;
	current_player.potion_count = 0;
	randomize_player_weapons();
	randomize_potions();
	print_player_stats();
}

void
print_player_stats()
{
	printf("You have %d HP.\n", current_player.hp);
	printf("You have %d stamina.\n", current_player.stamina);
	printf("You have %d health potion(s).\n", current_player.potion_count);
}

void
dodge()
{
	// TODO: Implement dodge
}

void
attack()
{
	char input[2];
	short weapon_used;

	printf("What weapon would you like to use?\n");
	print_weapons();
	printf("~$ ");
	scanf("%2s", input);
	weapon_used = atoi(input);
	
	current_machine.hp -= weapon_stats[weapon_used];
	printf("You did %d damage.\n", weapon_stats[weapon_used]);
}
