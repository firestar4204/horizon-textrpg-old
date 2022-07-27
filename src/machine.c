#include <config.h>

#ifdef STDC_HEADERS
#include <stdlib.h>
#include <stdio.h>
#endif

#include <hrpg/machine.h>

const char *machine_names[] = {"Watcher", "Thunderjaw", "Sawtooth", "Snapmaw"};
const machine machine_stats[] = {{200, 55, WATCHER}, {1000, 300, THUNDERJAW}, {500, 175, SAWTOOTH}, {350, 125, SNAPMAW}};

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

void
choose_machine()
{
	machine_types type;

	type = randomize_machine_type();
	set_current_machine_stats(type);
	
	print_machine_stats(current_machine);
}

void
print_machine_stats(machine m)
{
	printf("You have encountered a %s.\n", machine_names[m.type]);
	printf("It has %d HP, and %d Attack damage.\n", m.hp, m.damage);
}

void
print_machine_health()
{
	printf("The %s has %d HP left.", machine_names[current_machine.type], current_machine.hp);
}

