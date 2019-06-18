#include "ObstacleDetectionCommand.h"
#include "ObstaclesDetectionVisitor.h"

ObstacleDetectionCommand::ObstacleDetectionCommand() :AbstractCommand(), m_root(nullptr)
{}

ObstacleDetectionCommand::ObstacleDetectionCommand(AbstractNode* root) : AbstractCommand(), m_root(root)
{}

ObstacleDetectionCommand::~ObstacleDetectionCommand() {}

void ObstacleDetectionCommand::execute() {
	// Cr�er un visiteur de d�tection d'obstacles et visiter le noeud racine
	ObstaclesDetectionVisitor* visitor = new ObstaclesDetectionVisitor();
	m_root->acceptVisitor(visitor);
	// R�cup�rer le nombre d'obstacle calcul� par le visiteur
	obstacleDetected = visitor->getObstaclesCounter();
	// Retirer la m�moire allou�e pour le visiteur
	delete visitor;
}
int ObstacleDetectionCommand::getNbreObstacleDetected()
{
	return obstacleDetected;
}
