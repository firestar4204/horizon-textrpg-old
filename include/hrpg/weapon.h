#ifndef HRPG_WEAPON_H
#define HRPG_WEAPON_H

typedef enum {
	SPEAR = 0,
	SHARPSHOT_BOW,
	HUNTER_BOW,
	BLAST_SLING,
} weapon_types;


weapon_types randomize_weapon();
void randomize_player_weapons();
void print_weapons();

extern short weapon_stats[];
extern char *weapon_names[];

#endif

