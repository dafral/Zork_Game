#include <string.h>
#include "World.h"
#include "Player.h"
#include "Exit.h"



bool World::Play(){
	int i;
	char option;
	
	for (i = 0; i < 12; i++)
		printf("%s\n", rooms[i].name);

	for (i = 0; i < 24; i++)
		printf("%s\n", exits[i].destination->name);

	printf("%s\n\n", player->current_room->name);
	printf("%s\n", player->current_room->desc);

	scanf_s("%c", &option);
	
	if (option == 'q')
		return false;
	
	
	for (i = 0; i < 24; i++){
		printf("%s\n", exits[i+5].source->name); 
		if (exits[i].source->name == player->current_room->name){
			if (option == exits[i].direction){
				player->current_room = exits[i].destination;
				printf("%s\n\n", player->current_room->name);
				printf("%s\n", player->current_room->desc);
				getchar();
			}
			return true;
			
		}
	}
	return false;
}



