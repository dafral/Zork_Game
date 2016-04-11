#ifndef __EXIT__
#define __EXIT__

#include <stdio.h>
#include "Room.h"
#include "Entity.h"


class Exit : public Entity{

public:
	bool open;
	char direction;
	Room* destination;
	Room* source;
	
	Exit::Exit(){
		destination = new Room;
		source = new Room;
	}
	
	Exit::~Exit(){
		delete destination;
		delete source;
	}

};

#endif