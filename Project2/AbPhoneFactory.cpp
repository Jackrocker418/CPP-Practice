#include "AbPhoneFactory.h"
AbPhoneFactory* AbPhoneFactory::createFactory(
	PHONEFACTORY factory)
{
	if (factory == PHONEFACTORY::Samsung)
	{
		return new AppleFactory();
	}
	else if (factory == PHONEFACTORY::Samsung)
	{
		return new HuweiFactory();
	}
	else if (factory == PHONEFACTORY::Samsung)
	{
		return new NokiaFactory();
	}
}