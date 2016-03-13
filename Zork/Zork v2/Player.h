#pragma once

#include "Room.h"
#include <stdio.h>
#include <string.h>

class Player{

public:
	Room* current_room;

public:
	void Player::LookRoom(const Room& current_room);
	void Player::LookDirection();
	void Player::CheckExits();
	Player Player::GoDirection(const Room &destination);
};
