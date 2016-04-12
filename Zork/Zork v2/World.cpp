#include <string.h>
#include "World.h"
#include "Player.h"
#include "Exit.h"



bool World::Play(){
	int i, j = 0;
	char option;
	
	while (player->current_room != rooms[j].name) j++;

	printf("%s\n", rooms[j].name);
	printf("%s\n", rooms[j].desc);
	
	scanf_s("%c%*c", &option);

	while (option != 'n' && option != 'e' && option != 'w' && option != 's'){
		printf("Invalid command. Choose another one.\n");
		scanf_s("%c%*c", &option);
	}
	
	if (option == 'q')
		return false;
	
	for (i = 0; i < 25; i++){
		if (exits[i].source == player->current_room){
			if (option == exits[i].direction){
				player->current_room = exits[i].destination;
				return true;
			}			
		}
	}
	printf("I can't go there. There is no path.\n\n");
	return true;
	
}



