#ifndef HRPG_MACHINE_H
#define HRPG_MACHINE_H

typedef enum {
	WATCHER=0,
	THUNDERJAW,
	SAWTOOTH,
	SNAPMAW,
} machine_types;

typedef struct {
	int hp;
	int damage;
	machine_types type;
} machine;


extern const machine machine_stats[];
extern machine current_machine;


static inline void set_current_machine_stats(machine_types type);
machine_types randomize_machine_type();
void choose_machine();
void print_machine_stats(machine m);

#endif /* HRPG_MACHINE_H */

