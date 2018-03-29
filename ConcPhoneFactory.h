#ifndef CONCPHONEFACTORY_H
#define CONCPHONEFACTORY_H

#include "AbPhoneFactory.h"

class SamsungFactory : public AbPhoneFactory
{
	SmartPhone* getSmartPhone();
	DumbPhone* getDumbPhone();
};

class AppleFactory : public AbPhoneFactory
{
	SmartPhone* getSmartPhone();
	//DumbPhone* getDumbPhone();
};

class HuweiFactory : public AbPhoneFactory
{
	SmartPhone* getSmartPhone();
	//DumbPhone* getDumbPhone();
};

class NokiaFactory : public AbPhoneFactory
{
	//SmartPhone* getSmartPhone();
	DumbPhone* getDumbPhone();
};

#endif // !CONCPHONEFACTORY_H
