#include <string>
#include <list>
#include <iostream>
#include "Observable.h"

class Vacuum : public Observable
{

public : 

	void run();
	void setPowerV(double powerV);
private : 

	double m_powerV = 0.0;


};
