#pragma once
#include <iostream>

class KeyState{
private:
	bool w, a, s, d; 
public:
	KeyState();
	bool check(std::string key);
	bool change(std::string key, bool value);
}; 