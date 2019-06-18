#pragma once

#include "AbstractVisitor.h"

class ObstaclesDetectionVisitor : public AbstractVisitor
{

public:
	ObstaclesDetectionVisitor();
	~ObstaclesDetectionVisitor();

	virtual void visitAbstractNode(AbstractNode* node);
	virtual void visitCompositeNode(CompositeNode* node);
	virtual void visitRoomNode(Room* node);
	virtual void visitHouseNode(House* node);
	virtual void visitObstacleNode(Obstacle* node) ;
	virtual void visitChairNode(Chair* node);
	virtual void visitSofaNode(Sofa* node);
	virtual void visitTableNode(Table* node);

	int const getObstaclesCounter();


private:
	int m_obstaclesCounter;

};