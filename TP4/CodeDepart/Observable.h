#pragma once
#include <string>
#include <list>
#include <iostream>
#include "AbstractObserver.h"

class Observable
{

public:

	virtual void notifyObservateurs(const Observable& obs) const;

	void addObservateur(AbstractObserver* observateur);

	void deleteObservateur(AbstractObserver* observateur);

	int getObservateur();
	

private:

	std::list<AbstractObserver*> m_observateurs;

};