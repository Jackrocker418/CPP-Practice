#include "Singleton.h"

class Singleton;

Singleton* Singleton::getInstance() {
	if (!uniquePtr) {
		uniquePtr = new Singleton();
	}
	return uniquePtr;
}

Singleton* Singleton::uniquePtr = NULL;