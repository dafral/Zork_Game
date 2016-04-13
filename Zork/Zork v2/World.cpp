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
	exits[0].desc = "There is a long hallway in front of you.";
	exits[0].destination = "Cages room";
	exits[0].source = "Old attic";
	exits[0].direction = 'e';

	exits[1].name = "Long hallway";
	exits[1].desc = "There is a long hallway in front of you.";
	exits[1].destination = "Old attic";
	exits[1].source = "Delivery room";
	exits[1].direction = 'w';

	exits[2].name = "Elevator";
	exits[2].desc = "You are looking to a very old elevator. Maybe it still works.";
	exits[2].destination = "Experiments room";
	exits[2].source = "Delivery room";
	exits[2].direction = 'e';

	exits[3].name = "Big Stairs";
	exits[3].desc = "There are big wooden stairs. Maybe you can access the top rooms of the building from here.";
	exits[3].destination = "Stairs room";
	exits[3].source = "Delivery room";
	exits[3].direction = 's';

	exits[4].name = "Big Stairs";
	exits[4].desc = "There are big wooden stairs. Maybe you can access the top rooms of the building from here.";
	exits[4].destination = "Delivery room";
	exits[4].source = "Stairs room";
	exits[4].direction = 'n';

	exits[5].name = "Wooden Stairs";
	exits[5].desc = "There are a almost broken wooden stairs in front of you.";
	exits[5].destination = "Dark room";
	exits[5].source = "The helper's room";
	exits[5].direction = 'w';

	exits[6].name = "Iron Door";
	exits[6].destination = "Stretchers room";
	exits[6].source = "The helper's room";
	exits[6].direction = 'e';

	exits[7].name = "Iron Door";
	exits[7].destination = "The helper's room";
	exits[7].source = "Stretchers room";
	exits[7].direction = 'w';

	exits[8].name = "Broken Wood Door";
	exits[8].destination = "Cages room";
	exits[8].source = "Stretchers room";
	exits[8].direction = 'n';

	exits[9].name = "Broken Wood Door";
	exits[9].destination = "Stretchers room";
	exits[9].source = "Cages room";
	exits[9].direction = 's';

	exits[10].name = "Dark Path";
	exits[10].destination = "Hallway";
	exits[10].source = "Stretchers room";
	exits[10].direction = 'e';

	exits[11].name = "Ornamented Gold Door";
	exits[11].destination = "Julia's room";
	exits[11].source = "Stretchers room";
	exits[11].direction = 's';

	exits[12].name = "Ornamented Gold Door";
	exits[12].destination = "Stretchers room";
	exits[12].source = "Julia's room";
	exits[12].direction = 'n';

	exits[13].name = "Dark Path";
	exits[13].destination = "Stretchers room";
	exits[13].source = "Hallway";
	exits[13].direction = 'w';

	exits[14].name = "Narrow Corridor";
	exits[14].destination = "Stairs room";
	exits[14].source = "Hallway";
	exits[14].direction = 'e';

	exits[15].name = "Narrow Corridor";
	exits[15].destination = "Hallway";
	exits[15].source = "Stairs room";
	exits[15].direction = 'w';

	exits[16].name = "Broken Wall";
	exits[16].destination = "Secret room";
	exits[16].source = "Stairs room";
	exits[16].direction = 's';

	exits[17].name = "Broken Wall";
	exits[17].destination = "Stairs room";
	exits[17].source = "Secret room";
	exits[17].direction = 'n';

	exits[18].name = "Wooden Stairs";
	exits[18].destination = "The helper's room";
	exits[18].source = "Dark room";
	exits[18].direction = 'n';

	exits[19].name = "Broken Window";
	exits[19].destination = "Experiments room";
	exits[19].source = "Dark room";
	exits[19].direction = 'e';

	exits[20].name = "Broken Window";
	exits[20].destination = "Dark room";
	exits[20].source = "Experiments room";
	exits[20].direction = 'w';

	exits[21].name = "Secret Path";
	exits[21].destination = "Julia's secret room";
	exits[21].source = "Julia's room";
	exits[21].direction = 'e';

	exits[22].name = "Secret Path";
	exits[22].destination = "Julia's room";
	exits[22].source = "Julia's secret room";
	exits[22].direction = 'w';

	exits[23].name = "Hole in the Wall";
	exits[23].destination = "Experiments room";
	exits[23].source = "Julia's secret room";
	exits[23].direction = 'e';

	exits[24].name = "Hole in the Wall";
	exits[24].destination = "Julia's secret room";
	exits[24].source = "Experiments room";
	exits[24].direction = 'n';

	exits[25].name = "Elevator";
	exits[25].desc = "You are looking to a very old elevator. Maybe it still works.";
	exits[25].destination = "Delivery room";
	exits[25].source = "Experiments room";
	exits[25].direction = 'e';

	//items
	items[0].name = "Surgery knife";
	items[0].desc = "Too small to kill anybody.";
	items[0].room = "Stretchers room";
	items[0].equip = 'n';


	items[1].name = "Torch";
	items[1].desc = "Maybe you can light dark rooms with this.";
	items[1].room = "Dark room";

	items[2].name = "Stairs key";
	items[2].desc = "A small rusty key.";

	items[3].name = "Axe";
	items[3].desc = "It's a bit rusty, but it looks you can use it.";

	items[4].name = "Cage Key";
	items[4].desc = "A very weird key.";

	items[5].name = "Syringe";
	items[5].desc = "The needle is very sharp.";

	//sets the player in the initial position
	player->current_room = "Stretchers room";

	}

void World::LookRoom(const char* room){
	int i=0;

	while (room != rooms[i].name) i++;

	printf("%s\n", rooms[i].name);
	printf("%s\n", rooms[i].desc);
	}

void World::PickItem(char* item){
	int i = 0;

	while (item != items[i].name) i++;
	
	if (player->current_room == items[i].room){
		if (items[i].pick){
			if (player->inventory == "Empty"){
				player->inventory = items[i].name;
				player->inventory_desc = items[i].desc;
				items[i].pick = false;
				printf("You have picked %s!\n", item);
			}
			else
				printf("You have no space in the inventory.\n");
		}
		else
			printf("There is no item called %s here.\n", item);
	}

	else
		printf("There is no item called %s here.\n", item);	
}

void World::DropItem(char* item){
	int i = 0;

	while (item != items[i].name) i++;

	if (player->inventory == item){
		if (!items[i].pick){
			items[i].room = player->current_room;
			player->inventory = "Empty";
			items[i].pick = true;
			printf("You have dropped %s.\n", item);
		}
		else
			printf("You can't do that. There is an item already in the room.\n");
	}
	else
		printf("You don't have any item called %s in the inventory.\n", item);

}

bool World::Play(){
	int i;
	char option;

	LookRoom(player->current_room);

	//test to try pickitem and dropitem
	printf("Before taking the item = %s\n", player->inventory);
	PickItem("Surgery knife");
	printf("After taking the item = %s\n", player->inventory);
	PickItem("Surgery knife");
	DropItem("Surgery knife");
	printf("After dropping the item = %s\n", player->inventory);
	DropItem("Surgery knife");
	
	
	scanf_s("%c%*c", &option);

	while (option != 'n' && option != 'e' && option != 'w' && option != 's' && option != 'q'){
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



World::~World(){
	delete[] rooms;
	delete[] exits;
	delete[] items;
	delete player;
}





