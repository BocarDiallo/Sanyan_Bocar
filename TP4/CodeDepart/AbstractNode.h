#pragma once

#include <iostream>
#include "AbstractBox.h"
#include "AbstractVisitor.h"

class AbstractNode {

private:
	AbstractNode* m_parent;
	int m_id;
	

protected:
	AbstractBox* m_box;

public:

	AbstractNode() : m_parent(nullptr), m_id(0) {};
	AbstractNode(AbstractNode* parent, int id) : m_parent(parent), m_id(id) {};

	void setParent(AbstractNode* parent) { m_parent = parent; };
	const AbstractNode* getParent() { return m_parent; };

	void setID(int id) { m_id = id; };
	const int getID() { return m_id; };

	virtual void acceptVisitor(AbstractVisitor* visitor) = 0;
	virtual void setBox(AbstractBox* box) = 0;
	virtual AbstractBox* getBox() = 0;
	virtual void toStream(std::ostream& s) = 0;

};
