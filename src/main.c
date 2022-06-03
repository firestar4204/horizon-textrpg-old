#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#ifdef STDC_HEADERS
#include <stdio.h>
#include <stdlib.h>
#endif

#include <hrpg/rand.h>

int
main(int argc,
     char **argv)
{
	init_rand();

	printf("The random number is: %d.\n", rand() % 51);
	
	return 0;
}

