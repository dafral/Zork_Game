#include <string.h>
#include "World.h"
#include "Room.h"
#include "Exit.h"
#include "Player.h"

void CreateMap(){

	Player* player;
	World* Map;

	Map->InitWorld(12, 24);
	
	//creation of the rooms in the map
	strcpy(Map->rooms[0].name, "Old attic");
	strcpy(Map->rooms[0].desc, "This room is very old. You have to walk carefully because the floor it looks like is going to collapse in any moment.");

	strcpy(Map->rooms[1].name, "Cages room");
	strcpy(Map->rooms[1].desc, "There is a lot of cages in this room. Only one is closed, and there is a man who barks like a dog. In the room there is creature. A huge one, with horns and a lot of black hair. It is eating a corpse. A human one.");
	
	strcpy(Map->rooms[2].name, "Delivery room");
	strcpy(Map->rooms[2].desc, "There are a lot of wooden cribs, and you see one which is not empty. It seems like someone left a baby there. There is also a man, searching for something in the room. He seems crazy and dangerous.");

	strcpy(Map->rooms[3].name, "The helper's room");
	strcpy(Map->rooms[3].desc, "In the middle of the room there is a huge cage, where there is a young man trapped. The lock of the cage is inside of it.");

	strcpy(Map->rooms[4].name, "Stretchers Room");
	strcpy(Map->rooms[4].desc, "You are in a room with a lot of stretchers connected to empty blood vials. There is also a medic bag in the floor, near where you are. In one of the corners of the room you can see a girl sitting on a chair.");

	strcpy(Map->rooms[5].name, "Hallway");
	strcpy(Map->rooms[5].desc, "You are in a narrow hallway. There are no lights, only a torch, which is already out.");

	strcpy(Map->rooms[6].name, "Stairs room");
	strcpy(Map->rooms[6].desc, "This room is almost empty, there is only a injured man lying on the ground covered with his own blood.");

	strcpy(Map->rooms[7].name, "Secret room");
	strcpy(Map->rooms[7].desc, "Wow! You have found a secret room under that door. There is some medicine here.");

	strcpy(Map->rooms[8].name, "Dark room");
	strcpy(Map->rooms[8].desc, "You are in a very dark room. You can hear an animal breathing. Be careful, you don't know what animal it is. It may be dangerous.");

	strcpy(Map->rooms[9].name, "Julia's room");
	strcpy(Map->rooms[9].desc, "It looks like the sickroom owner's room. There is a wardrove and a weird bed. There are some notes aswell.");

	strcpy(Map->rooms[10].name, "Julia's secret room");
	strcpy(Map->rooms[10].desc, "A very small room. There is only a chest without any lock.");

	strcpy(Map->rooms[11].name, "Experiments room");
	strcpy(Map->rooms[11].desc, "The smell is awful here. There are a lot of stretches with dead and deformed bodies of people. Some of them have a syringe stabed in the neck.");

	player->current_room = Map->rooms[2];

	
};