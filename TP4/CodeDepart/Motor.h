#include <string>
#include <list>
#include <iostream>
#include "Observable.h"

class Motor : public Observable
{
public : 
	void run();
	void setTemperature(double temperature);
	

private :
	double m_temperature = 0.0;
};