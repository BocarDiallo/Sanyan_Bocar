#pragma once

#include "AbstractVisitor.h"

class TotalSurfaceToCleanVisitor : public AbstractVisitor
{

public:
	TotalSurfaceToCleanVisitor();
	~TotalSurfaceToCleanVisitor();

	virtual void visitAbstractNode(AbstractNode* node);
	virtual void visitCompositeNode(CompositeNode* node);
	virtual void visitRoomNode(Room* node);
	virtual void visitHouseNode(House* node);
	virtual void visitObstacleNode(Obstacle* node);
	virtual void visitChairNode(Chair* node);
	virtual void visitSofaNode(Sofa* node);
	virtual void visitTableNode(Table* node);

	float const getTotalSurface();

private:
	float m_TotalSurface;

};