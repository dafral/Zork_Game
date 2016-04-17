#include "World.h"
#include <stdio.h>

bool World::CheckOption( Vector<String>&option){
	uint i;
	

	if (option[0] == "quit" || option[0] == "q")
		return  false;

	else if (option[0] == "go"){

		for (i = 0; i < 25; i++){
			if (exits[i].source == player->current_room.string){
				if (option[1] == exits[i].direction.string){
					player->current_room.string = exits[i].destination;
					return true;
				}
			}
		}
		printf("There is a wall there.\n");
		return true;
	}

	else if (option[0] == "pick"){
		PickItem(option[1]);
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
		UnequipItem(option[1]);
		return true;
	}

	else
		printf("Invalid command.\n\n");
		return true;

}