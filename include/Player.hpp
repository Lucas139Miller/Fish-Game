#pragma once
#include <iostream>

class Player{
private:
	int health, maxHealth, speed, level;
	float xp;
	int posX, posY;
public:
	int get_position(char coordinate);
	bool set_position(char coordinate, int value);
	bool add_position(char coordinate, int value);
};