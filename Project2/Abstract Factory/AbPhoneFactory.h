#ifndef ABPHONEFACTORY_H
#define ABPHONEFACTORY_H

#include "SmartPhone.h"
#include "DumbPhone.h"

class AbPhoneFactory
{
public:
	enum PHONEFACTORY 
	{
		Samsung,
		Apple,
		Huwei,
		Nokia
	};

	virtual SmartPhone* getSmartPhone() = 0;
	virtual DumbPhone* getDumbPhone() = 0;

	static AbPhoneFactory* createFactory(
		PHONEFACTORY factory);

	AbPhoneFactory() {};
	virtual ~AbPhoneFactory() {};
};

class SamsungFactory : public AbPhoneFactory
{
	SmartPhone* getSmartPhone();
	DumbPhone* getDumbPhone();
};

class AppleFactory : public AbPhoneFactory
{
	SmartPhone* getSmartPhone();
	DumbPhone* getDumbPhone();
};

class HuweiFactory : public AbPhoneFactory
{
	SmartPhone* getSmartPhone();
	DumbPhone* getDumbPhone();
};

class NokiaFactory : public AbPhoneFactory
{
	SmartPhone* getSmartPhone();
	DumbPhone* getDumbPhone();
};

#endif // !ABPHONEFACTORY_H
