#include "TotalSurfaceCalculatorCommand.h"
#include "TotalSurfaceToCleanVisitor.h"

TotalSurfaceCalculatorCommand::TotalSurfaceCalculatorCommand():AbstractCommand(), m_root(nullptr)
{}

TotalSurfaceCalculatorCommand::TotalSurfaceCalculatorCommand(AbstractNode* root) : AbstractCommand(),m_root(root)
{}

float TotalSurfaceCalculatorCommand::getSurfaceCalculated()
{
	return surfaceCalculated;
}

TotalSurfaceCalculatorCommand::~TotalSurfaceCalculatorCommand() {}

void TotalSurfaceCalculatorCommand::execute() {
	double surface = 0.0;
	// A COMPLETER
	// Créer un visiteur de surface totale et visiter le noeud racine
	TotalSurfaceToCleanVisitor* visitor = new TotalSurfaceToCleanVisitor();
	m_root->acceptVisitor(visitor);
	// Récupérer la surface calculée par le visiteur
	surfaceCalculated = visitor->getTotalSurface();
	// Retirer la mémoire allouée pour le visiteur
	delete visitor;
	//std::cout << "Command Surface " << surface << std::endl << std::endl;
}