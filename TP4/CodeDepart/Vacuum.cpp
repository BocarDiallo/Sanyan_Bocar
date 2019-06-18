#include "Vacuum.h"

void Vacuum::run()
{
	// Verifier si la puissance depasse 1000, et si oui, avertir les observateurs
	if (m_powerV >= 1000)
		notifyObservateurs(*this);
}

void Vacuum::setPowerV(double powerV)
{
	m_powerV = powerV;
}