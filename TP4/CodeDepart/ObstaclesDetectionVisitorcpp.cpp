
#include "ObstaclesDetectionVisitor.h"
#include "AbstractNode.h"
#include "CompositeNode.h"
#include "Room.h"
#include "House.h"
#include "Obstacle.h"
#include "Chair.h"
#include "Sofa.h"
#include "Table.h"

ObstaclesDetectionVisitor::ObstaclesDetectionVisitor() :m_obstaclesCounter(0) {}
ObstaclesDetectionVisitor::~ObstaclesDetectionVisitor() {}


int const ObstaclesDetectionVisitor::getObstaclesCounter() { return m_obstaclesCounter; }

void ObstaclesDetectionVisitor::visitAbstractNode(AbstractNode* node) {

	//On fait rien
}
void ObstaclesDetectionVisitor::visitCompositeNode(CompositeNode* node) {

	std::map<int, AbstractNode*>::iterator it = node->getMapBeginIterator();
	std::map<int, AbstractNode*>::iterator endIt = node->getMapEndIterator();

	while (it != endIt)
	{
		(*it).second->acceptVisitor(this);
		it++;
	}

}

void ObstaclesDetectionVisitor::visitRoomNode(Room* node) {

	visitCompositeNode(node);

}

void ObstaclesDetectionVisitor::visitHouseNode(House* node) {
	visitCompositeNode(node);
}

void ObstaclesDetectionVisitor::visitObstacleNode(Obstacle* node) {
	this->m_obstaclesCounter++;
}

void ObstaclesDetectionVisitor::visitChairNode(Chair* node) {
	visitObstacleNode(node);
}

void ObstaclesDetectionVisitor::visitSofaNode(Sofa* node) {
	visitObstacleNode(node);
}


void ObstaclesDetectionVisitor::visitTableNode(Table* node) {
	visitObstacleNode(node);
}

