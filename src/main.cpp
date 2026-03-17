#include <iostream>
#include "GameSettings.hpp"
#include "Player.hpp"
#include "KeyState.hpp" 

int main(){
	std::cout << "Welcome ladies and gentlemen\n";
	Player player;
	player.set_position('x', 6);
	player.set_position('y', 50);
	player.add_position('x', 12);
	player.add_position('x', 4);
	player.add_position('y', 25);
	player.add_position('g', 100);
	player.add_position('y', -30);
	std::cout << player.get_position('x') << "x"
	<< player.get_position('y') << std::endl;
	
	return 0;
}