#include <string>
#include <list>
#include <iostream>
#include "Observable.h"

using namespace std;



void Observable::notifyObservateurs(const Observable& obs) const
{
	std::list<AbstractObserver*>::const_iterator end = m_observateurs.end();
	//Notificattion des observateurs 
	for (list<AbstractObserver*>::const_iterator it = m_observateurs.begin(); it != end; ++it)

		(*it)->notifier(obs);
}


void Observable::addObservateur(AbstractObserver* observateur)
{
	m_observateurs.push_back(observateur);	
}


void Observable::deleteObservateur(AbstractObserver* observateur)
{
	m_observateurs.remove(observateur);
}


