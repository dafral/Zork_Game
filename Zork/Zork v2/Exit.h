#pragma once

#include <stdio.h>
#include "Room.h"

class Exit{

public:
	bool open;
	char name[80], direction;
	Room* destination;
	Room* source;
	

public:
	void LookExit(const char& player_dir){
		printf("");
	}
	
	void SearchExits();

};