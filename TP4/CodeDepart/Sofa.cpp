#include "Sofa.h"


Sofa::Sofa() :Obstacle(){}
Sofa::Sofa(AbstractNode* parent, int id) : Obstacle(parent, id){}
Sofa::Sofa(AbstractNode* parent, int id, float bigRadius, float smallRadius) : Obstacle(parent, id){
	
	m_box = new EllipseBox(bigRadius, smallRadius);
}

void Sofa::acceptVisitor(AbstractVisitor* visitor){ visitor->visitSofaNode(this); }
void Sofa::setBox(AbstractBox* box){ m_box = box; }
AbstractBox* Sofa::getBox(){ return m_box; }
void Sofa::toStream(std::ostream& s){}