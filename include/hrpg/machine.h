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


inline void set_current_machine_stats(machine_types type);
machine_types randomize_machine_type();

#endif /* HRPG_MACHINE_H */

