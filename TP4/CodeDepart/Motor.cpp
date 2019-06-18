#include "Motor.h"

void Motor::run()
{
	// Verifier si la temperature depasse 20.0, et si oui avertir les observateurs
	if (m_temperature != 0)
		notifyObservateurs(*this);
}

void Motor::setTemperature(double temperature)
{
	m_temperature = temperature;
}