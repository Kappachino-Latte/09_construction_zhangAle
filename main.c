#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pokemon.h"

int main() {

	srand(time(0));
	int level = rand() % 100 + 1;
	
	struct pokemon *piplup = new_pokemon ("Piplup", "Water", level);
	struct pokemon *cyndaquil = new_pokemon ("Cyndaquil", "Fire", level);
	struct pokemon *pikachu = new_pokemon ("Pikachu", "Electric", level);
	
	printf ("These are my pokemon:\n");
	print_pokemon (piplup);
	printf ("\n");
	print_pokemon (cyndaquil);
	printf ("\n");
	print_pokemon (pikachu);
	printf ("\n");
	
	modify_pokemon (piplup, "Prinplup", "Water", level);
	modify_pokemon (cyndaquil, "Quilava", "Fire", level);
	modify_pokemon (pikachu, "Raichu", "Electric", level);
	
	printf ("All of the Pokemon have evolved!\nPiplup is now %s\nCyndaquil is now %s\nPikachu is now %s\n", piplup->name, cyndaquil->name, pikachu->name);
	printf ("\n");
	
	remove_pokemon(piplup);
	remove_pokemon(cyndaquil);
	remove_pokemon(pikachu);
	
	return 0;
}
