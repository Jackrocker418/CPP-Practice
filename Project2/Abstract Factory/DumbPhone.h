#ifndef DUMBPHONE_H
#define DUMBPHONE_H

#include "PhoneInterface.h"
#include <String>
using std::string;

class Brick : public DumbPhone
{
public:
	string name();
};

class Primo : public DumbPhone
{
public:
	string name();
};

#endif // !DUMBPHONE_H

