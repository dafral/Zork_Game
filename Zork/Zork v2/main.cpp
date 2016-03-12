#include "Exit.h"
#include "Room.h"
#include "Player.h"
#include "World.h"

void main(void){
	bool game = true;
	CreateMap();
	do {
		game = Play();
	} while (game == true);

}