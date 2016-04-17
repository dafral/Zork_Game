#include "World.h"

void main(void){
	bool game = true;
	World map;

	map.CreateMap();
	printf("Welcome to David Franco's Zork. Have fun!\n");

	do {
		game = map.Play();
	} while (game == true);
}