#include "AbstractFactory.h"

void AbstractFactory::startExample()
{
	AbPhoneFactory* factory =
		AbPhoneFactory::createFactory(
			AbPhoneFactory::PHONEFACTORY::Samsung);

	cout << "Samsung smartphone: "
		<< factory->getSmartPhone()->name() << endl;
	cout << "Samsung Dumb phone: "
		<< factory->getDumbPhone()->name() << endl;

	factory =
		AbPhoneFactory::createFactory(
			AbPhoneFactory::PHONEFACTORY::Apple);
	cout << "Apple Smart Phone: "
		<< factory->getSmartPhone()->name() << endl;

	factory =
		AbPhoneFactory::createFactory(
			AbPhoneFactory::PHONEFACTORY::Huwei);
	cout << "Huwei Smart Phone: "
		<< factory->getSmartPhone()->name() << endl;

	factory =
		AbPhoneFactory::createFactory(
			AbPhoneFactory::PHONEFACTORY::Nokia);
	cout << "Nokia Dumb Phone: "
		<< factory->getDumbPhone()->name() << endl;
}

AbstractFactory* AbstractFactory::getInstance()
{
	if (_uniqueInstance == NULL)
	{
		_uniqueInstance = new AbstractFactory;
	}
	return _uniqueInstance;
}

AbstractFactory* AbstractFactory::_uniqueInstance = NULL;