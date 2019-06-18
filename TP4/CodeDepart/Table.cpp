#include "Table.h"
#include "RoundBox.h"

Table::Table() :Obstacle(){}
Table::Table(AbstractNode* parent, int id) : Obstacle(parent, id){}
Table::Table(AbstractNode* parent, int id, float radius) : Obstacle(parent, id){

	m_box = new RoundBox(radius);
}

void Table::acceptVisitor(AbstractVisitor* visitor){ visitor->visitTableNode(this); }
void Table::setBox(AbstractBox* box){ m_box = box; }
AbstractBox* Table::getBox(){ return m_box; }
void Table::toStream(std::ostream& s){}