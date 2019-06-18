#include "Observable.h"
#include "Tablet.h"
#include "Motor.h"
#include "Sensor.h"
#include "Vacuum.h"



void Tablet::notifier(const Observable& obs)
{
	++m_nbAvertissements;

	try {
		const Motor& m = dynamic_cast<const Motor&>(obs);
		std::cout << "Moteur a lance un avertissement" << std::endl;
	}
	catch (std::bad_cast& err)
	{
		try {
			const Sensor& s = dynamic_cast<const Sensor&>(obs);
			std::cout << "Senseur a lance un avertissement" << std::endl;
		}
		catch (std::bad_cast& err)
		{
			try {
				const Vacuum& v = dynamic_cast<const Vacuum&>(obs);
				std::cout << "Vacuum a lance un avertissement" << std::endl;
			}
			catch (std::bad_cast& err)
			{
				std::cout << "Type inattendu d'observateur" << std::endl;
			}

		}
	}
}