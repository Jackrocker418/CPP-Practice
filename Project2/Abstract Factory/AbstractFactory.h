#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H
#include "AbPhoneFactory.h"
#include <iostream>

using std::cout;
using std::endl;

class AbstractFactory
{
private:
	AbstractFactory() {};
	AbstractFactory(
		AbstractFactory const &) {};
	AbstractFactory operator=(
		AbstractFactory const&) {};
	~AbstractFactory() {};

	static AbstractFactory* _uniqueInstance;

public:
	void startExample();
	static AbstractFactory* getInstance();
};

#endif // !ABSTRACTFACTORY_H
