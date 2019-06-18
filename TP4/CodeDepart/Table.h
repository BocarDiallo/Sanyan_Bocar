#pragma once

#include "Obstacle.h"

class Table : public Obstacle
{
public:
	Table();
	Table(AbstractNode* parent, int id);
	Table(AbstractNode* parent, int id, float radius);
	~Table(){};

	virtual void acceptVisitor(AbstractVisitor* visitor);
	virtual void setBox(AbstractBox* box);
	virtual AbstractBox* getBox();
	virtual void toStream(std::ostream& s);
private:

};

