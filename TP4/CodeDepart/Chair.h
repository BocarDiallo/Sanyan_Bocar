#pragma once

#include "Obstacle.h"
#include "BoundingBox.h"

class Chair : public Obstacle
{
public:
	Chair();
	Chair(AbstractNode* parent, int id);
	Chair(AbstractNode* parent, int id, float width, float length);
	~Chair(){};

	virtual void acceptVisitor(AbstractVisitor* visitor);
	virtual void setBox(AbstractBox* box);
	virtual AbstractBox* getBox();
	virtual void toStream(std::ostream& s);

private:

};

