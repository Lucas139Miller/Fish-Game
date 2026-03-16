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
	int get_GameState();
	int set_GameState(int mode);
};