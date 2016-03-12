#include "Room.h"
#include <stdio.h>

class Player{

public:
	Room current_room;

public:
	void Player::LookRoom(const Room& current_room){
		printf("%s\n\n", current_room.name);
		printf("%s\n", current_room.desc);
	};

	void Player::Go(){


	}
};

bool Play();