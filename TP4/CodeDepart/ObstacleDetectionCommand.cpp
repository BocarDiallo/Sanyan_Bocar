#include "ObstacleDetectionCommand.h"
#include "ObstaclesDetectionVisitor.h"

ObstacleDetectionCommand::ObstacleDetectionCommand() :AbstractCommand(), m_root(nullptr)
{}

ObstacleDetectionCommand::ObstacleDetectionCommand(AbstractNode* root) : AbstractCommand(), m_root(root)
{}

ObstacleDetectionCommand::~ObstacleDetectionCommand() {}

void ObstacleDetectionCommand::execute() {
	int nbObstacles = 0;
	// A COMPLETER
	std::cout << "Obstacles Command: " << nbObstacles << std::endl << std::endl;
}