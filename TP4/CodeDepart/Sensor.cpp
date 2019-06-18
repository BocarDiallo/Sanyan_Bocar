#include "Sensor.h"

void Sensor::run()
{	
	// Verifier si le senseur a ete declenche (== true) et si oui avertir les observateurs
	if (m_sensor)
		notifyObservateurs(*this);
}

void Sensor::setSensor(bool sensor)
{
	m_sensor = sensor;
}