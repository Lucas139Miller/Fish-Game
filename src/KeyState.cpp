#include "Keystate.hpp"

KeyState::KeyState():w(false),a(false),s(false),d(false){}
bool KeyState::check(std::string key){
	if(key == "w"){
		return this->w;
	}else if(key == "a"){
		return this->a;
	}else if(key == "s"){
		return this->s;
	}else if(key == "d"){
		return this->d;
	}else{
		std::cout << "tecla não encontrada!\n";
	}
}
bool KeyState::change(std::string key, bool value){
	if(key == "w"){
		this->w = value;
	}else if(key == "a"){
		this->a = value;
	}else if(key == "s"){
		this->s = value;
	}else if(key == "d"){
		this->d = value;
	}else{
		std::cout << "tecla não encontrada!\n";
		return -1;
	}
	return 1;
}