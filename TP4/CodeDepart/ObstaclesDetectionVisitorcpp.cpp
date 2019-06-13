
#include "ObstaclesDetectionVisitor.h"
#include "AbstractNode.h"
#include "CompositeNode.h"
#include "Room.h"
#include "House.h"
#include "Obstacle.h"
#include "Chair.h"
#include "Sofa.h"
#include "Table.h"

ObstaclesDetectionVisitor::ObstaclesDetectionVisitor():m_obstaclesCounter(0){}
ObstaclesDetectionVisitor::~ObstaclesDetectionVisitor(){}


int const ObstaclesDetectionVisitor::getObstaclesCounter(){ return m_obstaclesCounter; }

void ObstaclesDetectionVisitor::visitAbstractNode(AbstractNode* node){

	//On fait rien
}
void ObstaclesDetectionVisitor::visitCompositeNode(CompositeNode* node){

	// A COMPLETER

}

void ObstaclesDetectionVisitor::visitRoomNode(Room* node){

	// A COMPLETER

}

void ObstaclesDetectionVisitor::visitHouseNode(House* node){
	// A COMPLETER
}

void ObstaclesDetectionVisitor::visitObstacleNode(Obstacle* node){
	// A COMPLETER
}

void ObstaclesDetectionVisitor::visitChairNode(Chair* node){
	// A COMPLETER
}

void ObstaclesDetectionVisitor::visitSofaNode(Sofa* node){
	// A COMPLETER
}


void ObstaclesDetectionVisitor::visitTableNode(Table* node){
	// A COMPLETER
}

