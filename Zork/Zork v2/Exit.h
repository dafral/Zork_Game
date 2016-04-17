#ifndef __EXIT__
#define __EXIT__

#include "World.h"

class Exit : public Entity{

public:
	bool open;
	String direction;
	char* destination;
	char* source;
};

#endif