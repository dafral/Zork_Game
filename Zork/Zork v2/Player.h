#pragma once

#include "Room.h"
#include <stdio.h>
#include <string.h>

class Player{

public:
	Room current_room;

public:
	void Player::LookRoom(const Room& current_room){
		printf("%s\n\n", current_room.name);
		printf("%s\n", current_room.desc);
	};
	
	void Player::LookDirection(){


	}

	void Player::CheckExits(const Exit& exit){
		int i;
		if (current_room)

	}

	Player Player::GoDirection(const Room& destination){
		current_room = destination;
	}
};

