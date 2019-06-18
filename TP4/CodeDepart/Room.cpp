#include "Room.h"


Room::Room() :CompositeNode(){}
Room::Room(AbstractNode* parent, int id) : CompositeNode(parent, id){}
Room::Room(AbstractNode* parent, int id, float width, float length) : CompositeNode(parent, id){

	m_box = new BoundingBox(width, length);
}

void Room::acceptVisitor(AbstractVisitor* visitor){ visitor->visitRoomNode(this); }
void Room::setBox(AbstractBox* box){ m_box = box; }
AbstractBox* Room::getBox(){ return m_box; }
void Room::toStream(std::ostream& s){}