#include <string.h>
#include "World.h"
#include "Player.h"
#include "Exit.h"


void World::CreateMap(){

	rooms = new Room[12];
	exits = new Exit[24];
	player = new Player;

	//creation of the rooms in the map
	strcpy(rooms[0].name, "Old attic");
	strcpy(rooms[0].desc, "This room is very old. You have to walk carefully because the floor it looks like is going to collapse in any moment.");

	strcpy(rooms[1].name, "Cages room");
	strcpy(rooms[1].desc, "There is a lot of cages in this room. Only one is closed, and there is a man who barks like a dog. In the room there is creature. A huge one, with horns and a lot of black hair. It is eating a corpse. A human one.");
	
	strcpy(rooms[2].name, "Delivery room");
	strcpy(rooms[2].desc, "There are a lot of wooden cribs, and you see one which is not empty. It seems like someone left a baby there. There is also a man, searching for something in the room. He seems crazy and dangerous.");

	strcpy(rooms[3].name, "The helper's room");
	strcpy(rooms[3].desc, "In the middle of the room there is a huge cage, where there is a young man trapped. The lock of the cage is inside of it.");
	
	strcpy(rooms[4].name, "Stretchers Room");
	strcpy(rooms[4].desc, "You are in a room with a lot of stretchers connected to empty blood vials. There is also a medic bag in the floor, near where you are. In one of the corners of the room you can see a girl sitting on a chair.");

	strcpy(rooms[5].name, "Hallway");
	strcpy(rooms[5].desc, "You are in a narrow hallway. There are no lights, only a torch, which is already out.");
	
	strcpy(rooms[6].name, "Stairs room");
	strcpy(rooms[6].desc, "This room is almost empty, there is only a injured man lying on the ground covered with his own blood.");

	strcpy(rooms[7].name, "Secret room");
	strcpy(rooms[7].desc, "Wow! You have found a secret room under that door. There is some medicine here.");
	
	strcpy(rooms[8].name, "Dark room");
	strcpy(rooms[8].desc, "You are in a very dark room. You can hear an animal breathing. Be careful, you don't know what animal it is. It may be dangerous.");

	strcpy(rooms[9].name, "Julia's room");
	strcpy(rooms[9].desc, "It looks like the sickroom owner's room. There is a wardrove and a weird bed. There are some notes aswell.");

	strcpy(rooms[10].name, "Julia's secret room");
	strcpy(rooms[10].desc, "A very small room. There is only a chest without any lock.");

	strcpy(rooms[11].name, "Experiments room");
	strcpy(rooms[11].desc, "The smell is awful here. There are a lot of stretches with dead and deformed bodies of people. Some of them have a syringe stabed in the neck.");

	//exits
	strcpy(exits[0].name, "Long hallway");
	exits[0].destination = &rooms[2];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy(exits[1].name, "Long hallway");
	exits[0].destination = &rooms[0];
	exits[0].source = &rooms[2];
	exits[0].direction = 'w';

	strcpy(exits[2].name, "Elevator");
	exits[0].destination = &rooms[11];
	exits[0].source = &rooms[2];
	exits[0].direction = 'e';

	strcpy(exits[3].name, "Big Stairs");
	exits[0].destination = &rooms[6];
	exits[0].source = &rooms[2];
	exits[0].direction = 's';

	strcpy(exits[4].name, "Big Stairs");
	exits[0].destination = &rooms[2];
	exits[0].source = &rooms[6];
	exits[0].direction = 'n';

	strcpy(exits[5].name, "Wooden Stairs");
	exits[0].destination = &rooms[8];
	exits[0].source = &rooms[3];
	exits[0].direction = 'w';

	strcpy(exits[6].name, "Iron Door");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy(exits[7].name, "Long hallway");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy(exits[8].name, "Long hallway");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy(exits[9].name, "Long hallway");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy(exits[10].name, "Long hallway");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy(exits[11].name, "Long hallway");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy(exits[12].name, "Long hallway");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy(exits[13].name, "Long hallway");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy(exits[14].name, "Long hallway");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy(exits[15].name, "Long hallway");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy(exits[16].name, "Long hallway");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy(exits[17].name, "Long hallway");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy(exits[18].name, "Long hallway");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy(exits[19].name, "Long hallway");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy(exits[20].name, "Long hallway");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy(exits[21].name, "Long hallway");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy(exits[22].name, "Long hallway");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy(exits[23].name, "Long hallway");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';



	//sets the player in the initial position
	player->current_room = rooms[4];
};


bool World::Play(){
	char option[20];


	scanf("%s", option);

	if (strcmp(option, "q") == 0)
		return false;

	else if (strcmp(option, "look") == 0)
		player->LookRoom(player->current_room);

	else if (strcmp(option, "go north") == 0)

		player->GoDirection()
}