#ifndef SINGLTON_H
#define SINGLTON_H

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class Singleton {

public:
	static Singleton* getInstance() {}

private:
	Singleton() {}
	Singleton(Singleton const&) {}
	Singleton& operator=(Singleton const&) {}
	static Singleton* uniquePtr;
};

#endif // !SINGLTON_H
