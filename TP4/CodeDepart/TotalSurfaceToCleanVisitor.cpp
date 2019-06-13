
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
}

void TotalSurfaceToCleanVisitor::visitRoomNode(Room* node){
	// A COMPLETER

}

void TotalSurfaceToCleanVisitor::visitHouseNode(House* node){
	// A COMPLETER
}

void TotalSurfaceToCleanVisitor::visitObstacleNode(Obstacle* node){
	//On fait rien
}

void TotalSurfaceToCleanVisitor::visitChairNode(Chair* node){
	// A COMPLETER
}

void TotalSurfaceToCleanVisitor::visitSofaNode(Sofa* node){
	// A COMPLETER
}


void TotalSurfaceToCleanVisitor::visitTableNode(Table* node){
	// A COMPLETER
}

