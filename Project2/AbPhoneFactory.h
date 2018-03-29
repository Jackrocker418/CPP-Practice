#ifndef ABPHONEFACTORY_H
#define ABPHONEFACTORY_H

#include "SmartPhone.h"
#include "DumbPhone.h"
#include "ConcPhoneFactory.h"

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
};

#endif // !ABPHONEFACTORY_H
