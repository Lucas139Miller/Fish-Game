#include <iostream>
#include "GameSettings.hpp"

int main(){
	std::cout << "Welcome ladies and gentlemen\n";
	GameSettings settings;
	std::cout << "Defina estado: ";
	int state=200;
	std::cin >> state;
	std::cout << settings.setGameState(state) << std::endl;
	std::cout << settings.getGameState() << std::endl;
	return 0;
}