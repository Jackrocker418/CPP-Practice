#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H
#include "AbPhoneFactory.h"
#include <iostream>

using std::cout;
using std::endl;

class AbstractFactory
{
public:
	AbstractFactory();
	~AbstractFactory();
	void startExample()
	{
		AbPhoneFactory* factory = 
			AbPhoneFactory::createFactory(
				AbPhoneFactory::PHONEFACTORY::Samsung);

		cout << "Samsung smartphone: " << factory->getSmartPhone->name() << endl;
		cout << "Samsung Dumb phone" << factory->getDumbPhone->name() << endl;

	}
};

#endif // !ABSTRACTFACTORY_H
