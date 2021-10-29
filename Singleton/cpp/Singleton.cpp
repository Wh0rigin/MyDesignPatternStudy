#include "Singleton.hpp"

Single* Single::_instance = 0;

Single* Single::getInstance(){
	if(_instance == 0)
		_instance = new Single();

	return _instance;
}
