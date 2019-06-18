#pragma once

class AbstractNode;
class CompositeNode;
class House;
class Room;
class Obstacle;
class Chair;
class Sofa;
class Table;

class AbstractVisitor
{
public:
	AbstractVisitor(){};
	~AbstractVisitor(){};

	virtual void visitAbstractNode(AbstractNode* node) = 0;
	virtual void visitCompositeNode(CompositeNode* node) = 0;
	virtual void visitRoomNode(Room* node) = 0;
	virtual void visitHouseNode(House* node) = 0;
	virtual void visitObstacleNode(Obstacle* node) = 0;
	virtual void visitChairNode(Chair* node) = 0;
	virtual void visitSofaNode(Sofa* node) = 0;
	virtual void visitTableNode(Table* node) = 0;

};

