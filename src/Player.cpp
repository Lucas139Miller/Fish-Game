#include "Player.hpp"

int Player::get_position(char coordinate){
	switch(coordinate){
		case 'x':
			return this->posX;
			break;
		case 'y':
			return this->posY;
			break;
		default:
			std::cout << "ERROR GETTING POSITION, COORDINATE NAME NOT FOUND\n";
			return 0;
	}
}
bool Player::set_position(char coordinate, int value){
	switch(coordinate){
		case 'x':
			this->posX = value;
			break;
		case 'y':
			this->posY = value;
			break;
		default:
			std::cout << "ERROR GETTING POSITION, COORDINATE NAME NOT FOUND\n";
			return false;
	}
	return true;
}
bool Player::add_position(char coordinate, int value){
	switch(coordinate){
		case 'x':
			this->posX += value;
			break;
		case 'y':
			this->posY += value;
			break;
		default:
			std::cout << "ERROR GETTING POSITION, COORDINATE NAME NOT FOUND\n";
			return false;
	}
	return true;
}