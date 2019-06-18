#include "Chair.h"


Chair::Chair() : Obstacle(){}
Chair::Chair(AbstractNode* parent, int id) : Obstacle(parent, id){}
Chair::Chair(AbstractNode* parent, int id, float width, float length) : Obstacle(parent, id){
	
	m_box = new BoundingBox(width, length);
}

void Chair::acceptVisitor(AbstractVisitor* visitor){ visitor->visitChairNode(this); }
void Chair::setBox(AbstractBox* box){ m_box = box; }
AbstractBox* Chair::getBox(){ return m_box; }
void Chair::toStream(std::ostream& s){}