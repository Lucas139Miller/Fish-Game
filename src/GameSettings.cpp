#include "GameSettings.hpp"

GameSettings::GameSettings(){
	this->state = this->GameState::Loading;
	switch(this->state){
		case GameState::Loading:
			std::cout << "Está carregando\n";
			break;
		default:
			std::cout << "Não está carregando\n";
	}
	std::cout << "Ativada\n";
}

int GameSettings::getGameState(){
	int mode;
	switch(this->state){
		case GameState::Loading:
			mode = 0;
			break;
		case GameState::Menu:
			mode = 1;
			break;
		case GameState::Pause:
			mode = 2;
			break;
		case GameState::InGame:
			mode = 3;
			break;
		default:
			mode = -1;
	}

	return mode;
}

int GameSettings::setGameState(int mode){
	switch(mode){
		case 0:
			this->state = GameState::Loading;
			break;
		case 1:
			this->state = GameState::Menu;
			break;
		case 2:
			this->state = GameState::Pause;
			break;
		case 3:
			this->state = GameState::InGame;
			break;
		default:
			return -1;
	}

	return 0;

};