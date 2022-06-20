#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#ifdef STDC_HEADERS
#include <stdio.h>
#include <stdlib.h>
#endif

#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif

#include <hrpg/rand.h>
#include <hrpg/machine.h>

int
main(int argc,
     char **argv)
{
	init_rand();

	choose_machine();
	printf("\nPress any key to continue...");
	getchar();
	
	return 0;
}

