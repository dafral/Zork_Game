#include "World.h"
#include <stdio.h>

World::World(){
	rooms = new Room[12];
	exits = new Exit[26];
	items = new Item[6];
	player = new Player;
}

void World::CreateMap() {
	//rooms
	rooms[0].name = "Old attic";
	rooms[0].desc = "This room is very old. You have to walk carefully because the floor it looks like is going to collapse in any moment.";

	rooms[1].name = "Cages room";
	rooms[1].desc = "There is a lot of cages in this room. Only one is closed, and there is a man who barks like a dog. In the room there is creature. A huge one, with horns and a lot of black hair. It is eating a corpse. A human one.";

	rooms[2].name = "Delivery room";
	rooms[2].desc = "There are a lot of wooden cribs, and you see one which is not empty. It seems like someone left a baby there. There is also a man, searching for something in the room. He seems crazy and dangerous.";

	rooms[3].name = "The helper's room";
	rooms[3].desc = "In the middle of the room there is a huge cage, where there is a young man trapped. The lock of the cage is inside of it.";

	rooms[4].name = "Stretchers room";
	rooms[4].desc = "You are in a room with a lot of stretchers connected to empty blood vials. There is also a medic bag in the floor, near where you are. In one of the corners of the room you can see a girl sitting on a chair.";

	rooms[5].name = "Hallway";
	rooms[5].desc = "You are in a narrow hallway. There are no lights, only a torch, which is already out.";

	rooms[6].name = "Stairs room";
	rooms[6].desc = "This room is almost empty, there is only a injured man lying on the ground covered with his own blood.";

	rooms[7].name = "Secret room";
	rooms[7].desc = "Wow! You have found a secret room under that door. There is some medicine here.";

	rooms[8].name = "Dark room";
	rooms[8].desc = "You are in a very dark room. You can hear an animal breathing. Be careful, you don't know what animal it is. It may be dangerous.";

	rooms[9].name = "Julia's room";
	rooms[9].desc = "It looks like the sickroom owner's room. There is a wardrove and a weird bed. There are some notes aswell.";

	rooms[10].name = "Julia's secret room";
	rooms[10].desc = "A very small room. There is only a chest without any lock.";

	rooms[11].name = "Experiments room";
	rooms[11].desc = "The smell is awful here. There are a lot of stretches with dead and deformed bodies of people. Some of them have a syringe stabed in the neck.";


	//exits
	exits[0].name = "Long hallway";
	exits[0].destination = "Cages room";
	exits[0].source = "Old attic";
	exits[0].direction = "east";

	exits[1].name = "Long hallway";
	exits[1].destination = "Old attic";
	exits[1].source = "Delivery room";
	exits[1].direction = "west";

	exits[2].name = "Elevator";
	exits[2].destination = "Experiments room";
	exits[2].source = "Delivery room";
	exits[2].direction = "east";

	exits[3].name = "Big Stairs";
	exits[3].destination = "Stairs room";
	exits[3].source = "Delivery room";
	exits[3].direction = "south";

	exits[4].name = "Big Stairs";
	exits[4].destination = "Delivery room";
	exits[4].source = "Stairs room";
	exits[4].direction = "north";

	exits[5].name = "Wooden Stairs";
	exits[5].destination = "Dark room";
	exits[5].source = "The helper's room";
	exits[5].direction = "west";

	exits[6].name = "Iron Door";
	exits[6].destination = "Stretchers room";
	exits[6].source = "The helper's room";
	exits[6].direction = "east";

	exits[7].name = "Iron Door";
	exits[7].destination = "The helper's room";
	exits[7].source = "Stretchers room";
	exits[7].direction.string = "west";

	exits[8].name = "Broken Wood Door";
	exits[8].destination = "Cages room";
	exits[8].source = "Stretchers room";
	exits[8].direction = "north";

	exits[9].name = "Broken Wood Door";
	exits[9].destination = "Stretchers room";
	exits[9].source = "Cages room";
	exits[9].direction = "south";

	exits[10].name = "Dark Path";
	exits[10].destination = "Hallway";
	exits[10].source = "Stretchers room";
	exits[10].direction = "east";

	exits[11].name = "Ornamented Gold Door";
	exits[11].destination = "Julia's room";
	exits[11].source = "Stretchers room";
	exits[11].direction = "south";

	exits[12].name = "Ornamented Gold Door";
	exits[12].destination = "Stretchers room";
	exits[12].source = "Julia's room";
	exits[12].direction = "north";

	exits[13].name = "Dark Path";
	exits[13].destination = "Stretchers room";
	exits[13].source = "Hallway";
	exits[13].direction = "west";

	exits[14].name = "Narrow Corridor";
	exits[14].destination = "Stairs room";
	exits[14].source = "Hallway";
	exits[14].direction = "east";

	exits[15].name = "Narrow Corridor";
	exits[15].destination = "Hallway";
	exits[15].source = "Stairs room";
	exits[15].direction = "west";

	exits[16].name = "Broken Wall";
	exits[16].destination = "Secret room";
	exits[16].source = "Stairs room";
	exits[16].direction = "south";

	exits[17].name = "Broken Wall";
	exits[17].destination = "Stairs room";
	exits[17].source = "Secret room";
	exits[17].direction = "north";

	exits[18].name = "Wooden Stairs";
	exits[18].destination = "The helper's room";
	exits[18].source = "Dark room";
	exits[18].direction = "north";

	exits[19].name = "Broken Window";
	exits[19].destination = "Experiments room";
	exits[19].source = "Dark room";
	exits[19].direction = "east";

	exits[20].name = "Broken Window";
	exits[20].destination = "Dark room";
	exits[20].source = "Experiments room";
	exits[20].direction = "west";

	exits[21].name = "Secret Path";
	exits[21].destination = "Julia's secret room";
	exits[21].source = "Julia's room";
	exits[21].direction = "east";

	exits[22].name = "Secret Path";
	exits[22].destination = "Julia's room";
	exits[22].source = "Julia's secret room";
	exits[22].direction = "west";

	exits[23].name = "Hole in the Wall";
	exits[23].destination = "Experiments room";
	exits[23].source = "Julia's secret room";
	exits[23].direction = "east";

	exits[24].name = "Hole in the Wall";
	exits[24].destination = "Julia's secret room";
	exits[24].source = "Experiments room";
	exits[24].direction = "north";

	exits[25].name = "Elevator";
	exits[25].desc = "You are looking to a very old elevator. Maybe it still works.";
	exits[25].destination = "Delivery room";
	exits[25].source = "Experiments room";
	exits[25].direction = "east";

	//items
	items[0].name = "knife";
	items[0].desc = "Too small to kill anybody.";
	items[0].room.string = "Stretchers room";

	items[1].name = "torch";
	items[1].desc = "Maybe you can light dark rooms with this.";
	items[1].room.string = "Hallway";

	items[2].name = "key";
	items[2].desc = "A small rusty key.";
	items[2].room.string = "Dark room";
	
	items[3].name = "axe";
	items[3].desc = "It's a bit rusty, but it looks you can use it.";
	items[3].room.string = "Julia's secret room";

	items[4].name = "lever";
	items[4].desc = "A very weird key.";
	items[4].room.string = "Stairs room";

	items[5].name = "syringe";
	items[5].desc = "The needle is very sharp.";
	items[5].room.string = "Experiments room";

	//sets the player in the initial position
	player->current_room.string = "Stretchers room";
	//player->inventory.string = "Empty";

	for (uint i = 0; i < 3; i++)
		player->inventory[i].string = "Empty";

	}

void World::LookRoom(const char* room){
	uint i = 0;

	for (; room != rooms[i].name; i++);

	printf("\n%s\n", rooms[i].name);
	printf("%s\n", rooms[i].desc);
	}

void World::PickItem(const String &item){
	bool picked = false;
	uint j;

	for (j = 0; j < 3; j++){
		if (player->inventory[j].string == "Empty")
			break;
	}
	if (j >= 3){
		printf("You have no space in the inventory.\n");
		picked = true;
	}
	
	for (uint i = 0; i < 6; i++) {
		if (item == items[i].name){
			if (player->current_room == items[i].room){
				if (items[i].pick){
					if (player->inventory[j].string == "Empty"){
						player->inventory[j].string = items[i].name;
						player->inventory_desc = items[i].desc;
						items[i].pick = false;
						printf("You have picked %s!\n", item);
						picked = true;
					}
				}
			}
		}
	}
	if (picked == false)
		printf("There is no item called %s here.\n", item);
}
	


void World::DropItem(const String &item){
	bool dropped = false;
	uint j;

	for (j = 0; j < 3; j++){
		if (player->inventory[j] == item)
			break;
	}

	for (uint i = 0; i < 6; i++) {
		if (item == items[i].name){
			if (player->inventory[j] == item){
				if (items[i].pick == false){
					items[i].room.string = player->current_room.string;
					player->inventory[j].string = "Empty";
					items[i].pick = true;
					printf("You have dropped %s.\n", item);
					dropped = true;
				}
				else{
					printf("You can't do that. There is an item already in the room.\n");
					dropped = true;
				}
			}		
		}
	}
	if (dropped == false)
		printf("You don't have any item called %s in the inventory.\n", item);
}

void World::LookInventory(const Vector<String> &inv){
	for (uint i = 0; i < 3; i++)
		printf("Slot %d: %s\n", i + 1, inv[i]);
}

bool World::Play(){
	int i;
	
	char copy[30];
	char* fp = copy;

	LookRoom(player->current_room.string);
	
	fgets(copy, 30, stdin);

	if (copy[strlen(copy) - 1] == '\n')
		copy[strlen(copy) - 1] = '\0';
	
	Vector<String> tokens;
	String option(fp);

	tokens = option.Tokenize(tokens);

	return CheckOption(tokens);
	
}



World::~World(){
	delete[] rooms;
	delete[] exits;
	delete[] items;
	delete player;
}





