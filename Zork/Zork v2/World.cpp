#include <string.h>
#include "World.h"
#include "Player.h"
#include "Exit.h"


void World::CreateMap(){

	rooms = new Room[12];
	exits = new Exit[26];
	player = new Player;

	//creation of the rooms in the map
	strcpy_s(rooms[0].name, "Old attic");
	strcpy_s(rooms[0].desc, "This room is very old. You have to walk carefully because the floor it looks like is going to collapse in any moment.");

	strcpy_s(rooms[1].name, "Cages room");
	strcpy_s(rooms[1].desc, "There is a lot of cages in this room. Only one is closed, and there is a man who barks like a dog. In the room there is creature. A huge one, with horns and a lot of black hair. It is eating a corpse. A human one.");
	
	strcpy_s(rooms[2].name, "Delivery room");
	strcpy_s(rooms[2].desc, "There are a lot of wooden cribs, and you see one which is not empty. It seems like someone left a baby there. There is also a man, searching for something in the room. He seems crazy and dangerous.");

	strcpy_s(rooms[3].name, "The helper's room");
	strcpy_s(rooms[3].desc, "In the middle of the room there is a huge cage, where there is a young man trapped. The lock of the cage is inside of it.");
	
	strcpy_s(rooms[4].name, "Stretchers Room");
	strcpy_s(rooms[4].desc, "You are in a room with a lot of stretchers connected to empty blood vials. There is also a medic bag in the floor, near where you are. In one of the corners of the room you can see a girl sitting on a chair.");

	strcpy_s(rooms[5].name, "Hallway");
	strcpy_s(rooms[5].desc, "You are in a narrow hallway. There are no lights, only a torch, which is already out.");
	
	strcpy_s(rooms[6].name, "Stairs room");
	strcpy_s(rooms[6].desc, "This room is almost empty, there is only a injured man lying on the ground covered with his own blood.");

	strcpy_s(rooms[7].name, "Secret room");
	strcpy_s(rooms[7].desc, "Wow! You have found a secret room under that door. There is some medicine here.");
	
	strcpy_s(rooms[8].name, "Dark room");
	strcpy_s(rooms[8].desc, "You are in a very dark room. You can hear an animal breathing. Be careful, you don't know what animal it is. It may be dangerous.");

	strcpy_s(rooms[9].name, "Julia's room");
	strcpy_s(rooms[9].desc, "It looks like the sickroom owner's room. There is a wardrove and a weird bed. There are some notes aswell.");

	strcpy_s(rooms[10].name, "Julia's secret room");
	strcpy_s(rooms[10].desc, "A very small room. There is only a chest without any lock.");

	strcpy_s(rooms[11].name, "Experiments room");
	strcpy_s(rooms[11].desc, "The smell is awful here. There are a lot of stretches with dead and deformed bodies of people. Some of them have a syringe stabed in the neck.");

	//exits
	strcpy_s(exits[0].name, "Long hallway");
	exits[0].destination = &rooms[2];
	exits[0].source = &rooms[0];
	exits[0].direction = 'e';

	strcpy_s(exits[1].name, "Long hallway");
	exits[0].destination = &rooms[0];
	exits[0].source = &rooms[2];
	exits[0].direction = 'w';

	strcpy_s(exits[2].name, "Elevator");
	exits[0].destination = &rooms[11];
	exits[0].source = &rooms[2];
	exits[0].direction = 'e';

	strcpy_s(exits[3].name, "Big Stairs");
	exits[0].destination = &rooms[6];
	exits[0].source = &rooms[2];
	exits[0].direction = 's';

	strcpy_s(exits[4].name, "Big Stairs");
	exits[0].destination = &rooms[2];
	exits[0].source = &rooms[6];
	exits[0].direction = 'n';

	strcpy_s(exits[5].name, "Wooden Stairs");
	exits[0].destination = &rooms[8];
	exits[0].source = &rooms[3];
	exits[0].direction = 'w';

	strcpy_s(exits[6].name, "Iron Door");
	exits[0].destination = &rooms[4];
	exits[0].source = &rooms[3];
	exits[0].direction = 'e';

	strcpy_s(exits[7].name, "Iron Door");
	exits[0].destination = &rooms[3];
	exits[0].source = &rooms[4];
	exits[0].direction = 'w';

	strcpy_s(exits[8].name, "Broken Wood Door");
	exits[0].destination = &rooms[1];
	exits[0].source = &rooms[4];
	exits[0].direction = 'n';

	strcpy_s(exits[9].name, "Broken Wood Door");
	exits[0].destination = &rooms[4];
	exits[0].source = &rooms[1];
	exits[0].direction = 's';

	strcpy_s(exits[10].name, "Dark Path");
	exits[0].destination = &rooms[5];
	exits[0].source = &rooms[4];
	exits[0].direction = 'e';

	strcpy_s(exits[11].name, "Ornamented Gold Door");
	exits[0].destination = &rooms[9];
	exits[0].source = &rooms[4];
	exits[0].direction = 's';

	strcpy_s(exits[12].name, "Ornamented Gold Door");
	exits[0].destination = &rooms[4];
	exits[0].source = &rooms[9];
	exits[0].direction = 'n';

	strcpy_s(exits[13].name, "Dark Path");
	exits[0].destination = &rooms[4];
	exits[0].source = &rooms[5];
	exits[0].direction = 'w';

	strcpy_s(exits[14].name, "Narrow Corridor");
	exits[0].destination = &rooms[6];
	exits[0].source = &rooms[5];
	exits[0].direction = 'e';

	strcpy_s(exits[15].name, "Narrow Corridor");
	exits[0].destination = &rooms[5];
	exits[0].source = &rooms[6];
	exits[0].direction = 'w';

	strcpy_s(exits[16].name, "Broken Wall");
	exits[0].destination = &rooms[7];
	exits[0].source = &rooms[6];
	exits[0].direction = 's';

	strcpy_s(exits[17].name, "Broken Wall");
	exits[0].destination = &rooms[6];
	exits[0].source = &rooms[7];
	exits[0].direction = 'n';

	strcpy_s(exits[18].name, "Wooden Stairs");
	exits[0].destination = &rooms[3];
	exits[0].source = &rooms[8];
	exits[0].direction = 'n';

	strcpy_s(exits[19].name, "Broken Window");
	exits[0].destination = &rooms[11];
	exits[0].source = &rooms[8];
	exits[0].direction = 'e';

	strcpy_s(exits[20].name, "Broken Window");
	exits[0].destination = &rooms[8];
	exits[0].source = &rooms[11];
	exits[0].direction = 'w';

	strcpy_s(exits[21].name, "Secret Path");
	exits[0].destination = &rooms[10];
	exits[0].source = &rooms[9];
	exits[0].direction = 'e';

	strcpy_s(exits[22].name, "Secret Path");
	exits[0].destination = &rooms[9];
	exits[0].source = &rooms[10];
	exits[0].direction = 'w';

	strcpy_s(exits[23].name, "Hole in the Wall");
	exits[0].destination = &rooms[11];
	exits[0].source = &rooms[10];
	exits[0].direction = 'e';

	strcpy_s(exits[23].name, "Hole in the Wall");
	exits[0].destination = &rooms[10];
	exits[0].source = &rooms[11];
	exits[0].direction = 'n';

	strcpy_s(exits[23].name, "Elevator");
	exits[0].destination = &rooms[2];
	exits[0].source = &rooms[11];
	exits[0].direction = 'e';



	//sets the player in the initial position
	player->current_room = &rooms[4];
};


bool World::Play(){
	char option = 'l';
	int i;

	do{
		scanf_s("%c", option);

		if (option == 'q')
			return false;

		else if (option == 'l'){
			printf("%s\n\n", player->current_room->name);
			printf("%s\n", player->current_room->desc);
		}
	
		for (i = 0; i < 24; i++){
			if (exits[i].source == player->current_room){
				if (option == exits[i].direction)
					player->current_room = exits[i].destination;
				return true;

			}
		}

	} while (option == 'q' || option == 'l' || option == 'n' || option == 'w' || option == 'e' || option == 's');
	
}



