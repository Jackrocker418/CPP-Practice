#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include "PhoneInterface.h"
#include <String>
using std::string;

class Galaxy : public SmartPhone
{
public:
	string name();
};

class IPhone : public SmartPhone
{
public:
	string name();
};

class Zaphiera : public SmartPhone
{
public:
	string name();
};

#endif // !SMARTPHONE_H

