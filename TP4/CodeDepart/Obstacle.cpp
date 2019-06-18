#include "Obstacle.h"

Obstacle::Obstacle() :AbstractNode(){}

Obstacle::Obstacle(AbstractNode* parent, int id) : AbstractNode(parent, id){}

void Obstacle::acceptVisitor(AbstractVisitor* visitor){ visitor->visitObstacleNode(this); }
void Obstacle::setBox(AbstractBox* box){ m_box = box; }
AbstractBox* Obstacle::getBox(){ return m_box; }
void Obstacle::toStream(std::ostream& s){}