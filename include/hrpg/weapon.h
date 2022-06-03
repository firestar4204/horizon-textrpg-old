#ifndef HRPG_WEAPON_H
#define HRPG_WEAPON_H

typedef struct {
	short damage;
} weapon;

typedef enum {
	SPEAR = 0,
	SHARPSHOT_BOW,
	HUNTER_BOW,
	BLAST_SLING,
} weapon_types;

#endif

