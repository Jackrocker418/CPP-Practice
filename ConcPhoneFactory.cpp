#include "ConcPhoneFactory.h"
SmartPhone* SamsungFactory::getSmartPhone()
{
	return new Galaxy();
}

DumbPhone* SamsungFactory::getDumbPhone()
{
	return new Primo();
}

SmartPhone* AppleFactory::getSmartPhone()
{
	return new IPhone();
}

SmartPhone* HuweiFactory::getSmartPhone()
{
	return new Zaphiera();
}

DumbPhone* NokiaFactory::getDumbPhone()
{
	return new Brick();
}

