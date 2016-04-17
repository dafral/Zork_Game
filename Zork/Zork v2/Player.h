#ifndef __PLAYER_H__
#define __PLAYER_H__

#define MAX_ITEMS 3

#include "World.h"


class Player : public Entity{

public:
	Vector<String> inventory;
	String equipment = "Empty";
	char* inventory_desc;
	String current_room;

};



#endif