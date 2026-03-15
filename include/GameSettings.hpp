#pragma once
#include <iostream>

class GameSettings{
private:

enum class GameState{
	Menu,
	Loading,
	InGame,
	Pause
};

GameState state;

public:
	GameSettings();
};