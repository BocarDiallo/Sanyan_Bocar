#include "House.h"

House::House() :CompositeNode(){}
House::House(AbstractNode* parent, int id) : CompositeNode(parent, id){}

void House::acceptVisitor(AbstractVisitor* visitor){ visitor->visitHouseNode(this); }
void House::setBox(AbstractBox* box){ m_box = box; }
AbstractBox* House::getBox(){ return m_box; }
void House::toStream(std::ostream& s){}