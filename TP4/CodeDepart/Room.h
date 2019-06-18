#pragma once

#include "CompositeNode.h"
#include "BoundingBox.h"

class Room : public CompositeNode
{
public:
	Room();
	Room(AbstractNode* parent, int id);
	Room(AbstractNode* parent, int id, float width, float length);
	~Room(){};

	virtual void acceptVisitor(AbstractVisitor* visitor);
	virtual void setBox(AbstractBox* box);
	virtual AbstractBox* getBox();
	virtual void toStream(std::ostream& s);
private:

};

