#include <string>
#include <list>
#include <iostream>
#include "Observable.h"

class Sensor : public Observable
{
public: 

	void run();
	void setSensor(bool sensor);
	
private : 
	
	bool m_sensor = false;

};