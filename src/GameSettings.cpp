#include "GameSettings.hpp"

GameSettings::GameSettings(){
	this->state = this->GameState::Loading;
	switch(state){
		case GameState::Loading:
			std::cout << "Está carregando\n";
			break;
		default:
			std::cout << "Não está carregando\n";
	}
	std::cout << "Ativada\n";
}