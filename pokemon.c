#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pokemon.h"

struct pokemon * new_pokemon (char * new_name, char * new_type, int new_level) {

	struct pokemon *poke;
	
	poke = malloc( sizeof (struct pokemon) );
	
	strncpy (poke->name, new_name, sizeof(poke->name)-1);
	strncpy (poke->type, new_type, sizeof(poke->type)-1);
	poke->level = new_level;
	
	return poke;
}	

void remove_pokemon (struct pokemon * poke) {

	printf ("%s has been freed!\n", poke-> name);
	free (poke);
}

void modify_pokemon (struct pokemon * poke, char *new_name, char * new_type, int new_level) {

	strncpy (poke->name, new_name, sizeof(poke->name)-1);
	strncpy (poke->type, new_type, sizeof(poke->type)-1);
	poke->level = new_level;
}

void print_pokemon (struct pokemon * poke) {

	printf ("Pokemon Info\nName: %s\nType: %s\nLevel: %d\n", poke->name, poke->type, poke->level);
}
