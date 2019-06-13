#pragma once
#include "AbstractCommand.h"
#include "AbstractNode.h"

class ObstacleDetectionCommand : public AbstractCommand
{
public:
	ObstacleDetectionCommand(AbstractNode* root);
	~ObstacleDetectionCommand();

	void execute();

private:
	ObstacleDetectionCommand();
	AbstractNode* m_root;
};
