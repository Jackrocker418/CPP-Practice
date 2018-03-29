#include <iostream>
#include "../Project2/Singleton/Singleton.h"
#include "../Project2/Strategy/Strategy.h"
#include "../Project2/Abstract Factory/AbstractFactory.h"



int main() 
{
	AbstractFactory* factory;
	factory = factory->getInstance();
	factory->startExample();

	cout << endl;

	StrategyExample example;
	example.startExample();

	cout << endl;

	Singleton* single;
	single = single->getInstance();
	single->dostuff();

	getchar();
	return 0;
}