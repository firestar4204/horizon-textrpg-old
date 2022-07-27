#include <config.h>

#ifdef STDC_HEADERS
#include <stdio.h>
#include <stdlib.h>
#endif

#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif

#include <hrpg/rand.h>
#include <hrpg/machine.h>
#include <hrpg/player.h>
#include <hrpg/potion.h>

void choice();

int
main(int argc,
     char **argv)
{
	init_rand();

	printf("Welcome to hrpg\n");
	printf("A horizon fangame made by firestar4204\n");
	printf("Copyright (C) 2022 firestar4204\n");
	printf("\n");
	printf("This program comes with ABSOLUTELY NO WARRANTY; for information see https://gnu.org/licenses/gpl-3.0.en.html\n");
	printf("This is free software, and you are welcome to redistribute it\n");
	printf("under certain conditions; see https://gnu.org/licenses/gpl-3.0.en.html for more information\n\n");
	printf("\n");
	printf("Press any key to continue...");
	getchar();
	printf("\n");

	init_player();
	printf("\n");
	print_weapons();
	printf("\n");

	choose_machine();
	printf("\n");

	while (1) {
		choice();
		printf("\n");
		print_player_stats();
		printf("\n");
		print_machine_health();
		printf("\n");
	}
	
	return 0;
}

void
choice()
{
	char input[2];
	int choice;

start:
	printf("You can:\n");
	printf("1: Attack\n");
	printf("2: Dodge\n");
	printf("3: Heal\n");
	printf("4: Exit\n");
	printf("\n");
	printf("~$ ");
	scanf("%2s", input);
	choice = atoi(input);

	switch (choice) {
		case 1:
			printf("You have selected 1: Attack.\n");
			attack();
			break;
		case 2:
			printf("You have selected 2: Dodge.\n");
			dodge();
			printf("Dodge is not implemented yet!\n");
			goto start;
			break;
		case 3:
			printf("You have selected 3: Heal.\n");
			if (current_player.potion_count > 0)
				heal();
			else {
				printf("You don't have enough potions!\n\n");
				goto start; 
			}
			break;
		case 4:
			printf("Thanks for playing, have a nice day!\n");
			exit(0);
			break;
		default:
			printf("Incorrect option. ");
			goto start;
			break;
	}
}

