#include <string>
#include <list>
#include <iostream>
#include "AbstractObserver.h"

class Tablet : public AbstractObserver
{
public:
	Tablet(void) : m_nbAvertissements(0) {};
	virtual void notifier(const class Observable& obs);
	
	virtual int get_nbAvertissements(void) {
		return m_nbAvertissements;
	};
private:
	int m_nbAvertissements;
};