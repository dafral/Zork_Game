#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "Entity.h"
#include "String.h"

class Player{

public:
	char* inventory = "Empty";
	char* inventory_desc;
	char* current_room;
};

#endif