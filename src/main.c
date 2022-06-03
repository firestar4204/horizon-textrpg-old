#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#ifdef STDC_HEADERS
#include <stdio.h>
#include <stdlib.h>
#endif

#include <hrpg/rand.h>
#include <hrpg/machine.h>

int
main(int argc,
     char **argv)
{
	init_rand();

	choose_machine();
	
	return 0;
}

