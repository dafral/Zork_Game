#include "Exit.h"
#include "Room.h"
#include "Player.h"
#include "World.h"

void main(void){
	bool game = true;
	World map;
	map.CreateMap();
	do {
		game = map.Play();
	} while (game == true);

}