#pragma once
#include <iostream>

class GameSettings{
private:

enum class GameState{
	Loading,
	Menu,
	Pause,
	InGame
};

GameState state;

public:
	GameSettings();
	int getGameState();
	int setGameState(int mode);
};