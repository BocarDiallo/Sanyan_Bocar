#pragma once

#include "AbstractNode.h"

class Obstacle : public AbstractNode
{
public:
	Obstacle();
	Obstacle(AbstractNode* parent, int id);
	~Obstacle(){};

	virtual void setBox(AbstractBox* box);
	virtual AbstractBox* getBox();
	virtual void toStream(std::ostream& s);
	virtual void acceptVisitor(AbstractVisitor* visitor);


private:

};

