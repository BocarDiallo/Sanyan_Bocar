
#include "TotalSurfaceToCleanVisitor.h"
#include "AbstractNode.h"
#include "CompositeNode.h"
#include "Room.h"
#include "House.h"
#include "Obstacle.h"
#include "Chair.h"
#include "Sofa.h"
#include "Table.h"

# define M_PI          3.141592653589793238462643383279502884L

TotalSurfaceToCleanVisitor::TotalSurfaceToCleanVisitor() :m_TotalSurface(0){}
TotalSurfaceToCleanVisitor::~TotalSurfaceToCleanVisitor(){}

float const TotalSurfaceToCleanVisitor::getTotalSurface(){ return m_TotalSurface; }

void TotalSurfaceToCleanVisitor::visitAbstractNode(AbstractNode* node){

	//On fait rien
}
void TotalSurfaceToCleanVisitor::visitCompositeNode(CompositeNode* node){
	// A COMPLETER
	std::map<int, AbstractNode*>::iterator it = node->getMapBeginIterator();
	std::map<int, AbstractNode*>::iterator endIt = node->getMapEndIterator();

	while (it != endIt)
	{
		(*it).second->acceptVisitor(this);
		it++;
	}
}

void TotalSurfaceToCleanVisitor::visitRoomNode(Room* node){
	// A COMPLETER
	AbstractBox* box = node->getBox();
	m_TotalSurface += box->getLength() * box->getWidth();

	visitCompositeNode(node);
}

void TotalSurfaceToCleanVisitor::visitHouseNode(House* node){
	// A COMPLETER
	visitCompositeNode(node);
}

void TotalSurfaceToCleanVisitor::visitObstacleNode(Obstacle* node){
	//On fait rien
}

void TotalSurfaceToCleanVisitor::visitChairNode(Chair* node){
	// A COMPLETER
	AbstractBox* box = node->getBox();
	m_TotalSurface -= box->getLength() * box->getWidth();
}

void TotalSurfaceToCleanVisitor::visitSofaNode(Sofa* node){
	// A COMPLETER
	AbstractBox* box = node->getBox();
	m_TotalSurface -= box->getBigRadius() * box->getSmallRadius() * M_PI;
}


void TotalSurfaceToCleanVisitor::visitTableNode(Table* node){
	// A COMPLETER
	AbstractBox* box = node->getBox();
	m_TotalSurface -= M_PI * box->getRadius() * box->getRadius();
}

