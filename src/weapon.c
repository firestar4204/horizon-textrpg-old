#include <config.h>

#ifdef STDC_HEADERS
#include <stdlib.h>
#include <stdio.h>
#endif

#include <hrpg/player.h>

short weapon_stats[] = {125, 185, 100, 135};
char *weapon_names[] = {"Spear", "Sharpshot Bow", "Hunter Bow", "Blast Sling"};

weapon_types
randomize_weapon()
{
	short rand_number;

	rand_number = (rand() % 4);

	switch (rand_number) {
		case 0:
			return SPEAR;
			break;
		case 1:
			return SHARPSHOT_BOW;
			break;
		case 2:
			return HUNTER_BOW;
			break;
		case 3:
			return BLAST_SLING;
			break;
		default:
			fprintf(stderr, "Wrong number provided by randomize_weapon()");
			exit(1);

			break;
	}
}

void
randomize_player_weapons()
{
	current_player.weapons[0] = randomize_weapon();
	current_player.weapons[1] = randomize_weapon();
	current_player.weapons[2] = randomize_weapon();
}

void
print_weapons()
{
	printf("You have:\n");
	printf("1: %s\n", weapon_names[current_player.weapons[0]]);
	printf("2: %s\n", weapon_names[current_player.weapons[1]]);
	printf("3: %s\n", weapon_names[current_player.weapons[2]]);
}
