#pragma once
#include "AbstractCommand.h"
#include "AbstractNode.h"

class ObstacleDetectionCommand : public AbstractCommand
{
public:
	ObstacleDetectionCommand(AbstractNode* root);
	~ObstacleDetectionCommand();
	int getNbreObstacleDetected();
	void execute();

private:
	ObstacleDetectionCommand();
	AbstractNode* m_root;
	int obstacleDetected = 0;
};
