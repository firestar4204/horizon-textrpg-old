#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#ifdef STDC_HEADERS
#include <stdlib.h>
#include <stdio.h>
#endif

#include <hrpg/machine.h>

const machine machine_stats[] = {};

machine current_machine;

inline void
set_current_machine_stats(machine_types type)
{
	current_machine = machine_stats[type];
}

machine_types
randomize_machine_type()
{
	short rand_number;

	rand_number = (rand() % 4);

	switch (rand_number) {
		case 0:
			return WATCHER;
			break;
		case 1:
			return THUNDERJAW;
			break;
		case 2:
			return SAWTOOTH;
			break;
		case 3:
			return SNAPMAW;
			break;
		default:
			break;
	}
	fprintf(stderr, "ERR: Invalid machine in randomize_machine_type");
	exit(1);
}

