#include "World.h"
#include <stdio.h>

bool World::CheckOption( Vector<String>&option, uint num_words){
	uint i;

	if (num_words == 1){
		if (option[0] == "quit")
			return  false;

		else if (option[0] == "transform"){
			Transform();
			return true;
		}

		else{
			printf("Invalid command\n");
			return true;
		}
	}

	if (num_words == 2){
		if (option[0] == "go"){
			if (option[1] == "north" || option[1] == "west" || option[1] == "east" || option[1] == "south"){
			for (i = 0; i < 25; i++){
				if (exits[i].source == player->current_room.string){
					if (option[1] == exits[i].direction.string){
						player->current_room.string = exits[i].destination;
						return true;
					}
				}
			}
		}
			else {
				printf("Invalid direction.\n");
				return true;
			}

		printf("There is a wall there.\n");
		return true;
		}
	
		else if (option[0] == "pick"){
			if (!player->beast)
				PickItem(option[1]);
			if (player->beast)
				printf("Beasts can't pick items. Transform yourself into a human to be able to pick objects.\n");
			return true;
		}	
			
		else if (option[0] == "drop"){
			DropItem(option[1]);
			return true;
		}
	
		else if (option[0] == "look"){
			if (option[1] == "inventory"){
				LookInventory();
				return true;
			}
			else if (option[1] == "room")
				return true;
		}
	
		else if (option[0] == "equip"){
			EquipItem(option[1]);
			return true;
		}
	
		else if (option[0] == "unequip"){
			if (!player->beast)
				UnequipItem(option[1]);
			if (player->beast)
				printf("You are a beast, remember? Don't try to unequip your claws, it's not going to work\n");
			return true;
		}

		else{
			printf("Invalid command.\n");
			return true;
		}
	}
	
	if (num_words > 2)
		printf("Invalid command.\n");
		return true;

}