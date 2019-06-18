#pragma once
#include <string>
#include <list>
#include <iostream>


class AbstractObserver
{

public:
	virtual void notifier(const class Observable& obs) = 0;

};