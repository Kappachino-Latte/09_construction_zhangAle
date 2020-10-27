#ifndef POKEMON_H
#define POKEMON_H

struct pokemon {
	char name [128];
	char type [128];
	int level;
};

struct pokemon * new_pokemon (char * new_name, char * new_type, int new_level);

void remove_pokemon (struct pokemon * poke);

void modify_pokemon (struct pokemon * poke, char *new_name, char * new_type, int new_level);

void print_pokemon (struct pokemon * poke);

#endif
