#pragma once

#include "Obstacle.h"
#include "EllipseBox.h"

class Sofa : public Obstacle
{
public:
	Sofa();
	Sofa(AbstractNode* parent, int id);
	Sofa(AbstractNode* parent, int id, float bigRadius, float smallRadius);
	~Sofa(){};

	virtual void acceptVisitor(AbstractVisitor* visitor);
	virtual void setBox(AbstractBox* box);
	virtual AbstractBox* getBox();
	virtual void toStream(std::ostream& s);
private:

};
