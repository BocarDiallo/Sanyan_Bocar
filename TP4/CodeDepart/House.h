#pragma once

#include "CompositeNode.h"

class House : public CompositeNode
{
public:
	House();
	House(AbstractNode* parent, int id);
	~House(){};

	virtual void acceptVisitor(AbstractVisitor* visitor);
	virtual void setBox(AbstractBox* box);
	virtual AbstractBox* getBox();
	virtual void toStream(std::ostream& s);

private:

};

