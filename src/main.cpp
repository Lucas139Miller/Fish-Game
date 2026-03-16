#include <iostream>
#include "GameSettings.hpp"
#include "Player.hpp"
#include "KeyState.hpp" 
int main(){
	std::cout << "Welcome ladies and gentlemen\n";
	GameSettings settings;
	std::cout << "Defina estado: ";
	int state=200;
	std::cin >> state;
	std::cout << settings.set_GameState(state) << std::endl;
	std::cout << settings.get_GameState() << std::endl;
	return 0;
}