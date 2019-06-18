#include "ObstacleDetectionCommand.h"
#include "ObstaclesDetectionVisitor.h"

ObstacleDetectionCommand::ObstacleDetectionCommand() :AbstractCommand(), m_root(nullptr)
{}

ObstacleDetectionCommand::ObstacleDetectionCommand(AbstractNode* root) : AbstractCommand(), m_root(root)
{}

ObstacleDetectionCommand::~ObstacleDetectionCommand() {}

void ObstacleDetectionCommand::execute() {
	// Créer un visiteur de détection d'obstacles et visiter le noeud racine
	ObstaclesDetectionVisitor* visitor = new ObstaclesDetectionVisitor();
	m_root->acceptVisitor(visitor);
	// Récupérer le nombre d'obstacle calculé par le visiteur
	obstacleDetected = visitor->getObstaclesCounter();
	// Retirer la mémoire allouée pour le visiteur
	delete visitor;
}
int ObstacleDetectionCommand::getNbreObstacleDetected()
{
	return obstacleDetected;
}
