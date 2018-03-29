#ifndef PHONEINTERFACE_H
#define PHONEINTERFACE_H

#include <String>
using std::string;

class SmartPhone
{
public:
	virtual string name() = 0;
};

class DumbPhone
{
public:
	virtual string name() = 0;
};

#endif // !PHONEINTERFACE_H

