#include "AbPhoneFactory.h"

AbPhoneFactory* AbPhoneFactory::createFactory(
	PHONEFACTORY factory)
{
	if (factory == PHONEFACTORY::Samsung)
	{
		return new SamsungFactory();
	} 
	else if (factory == PHONEFACTORY::Apple)
	{
		return new AppleFactory();
	}
	else if (factory == PHONEFACTORY::Huwei)
	{
		return new HuweiFactory();
	}
	else if (factory == PHONEFACTORY::Nokia)
	{
		return new NokiaFactory();
	}

}

SmartPhone* SamsungFactory::getSmartPhone()
{
	return new Galaxy;
}

DumbPhone* SamsungFactory::getDumbPhone()
{
	return new Primo;
}

SmartPhone* AppleFactory::getSmartPhone()
{
	return new IPhone;
}

DumbPhone* AppleFactory::getDumbPhone()
{
	return 0;
}

SmartPhone* HuweiFactory::getSmartPhone()
{
	return new Zaphiera;
}

DumbPhone* HuweiFactory::getDumbPhone()
{
	return 0;
}

SmartPhone* NokiaFactory::getSmartPhone()
{
	return 0;
}

DumbPhone* NokiaFactory::getDumbPhone()
{
	return new Brick;
}

