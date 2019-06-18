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
	// Cr�er un visiteur de surface totale et visiter le noeud racine
	TotalSurfaceToCleanVisitor* visitor = new TotalSurfaceToCleanVisitor();
	m_root->acceptVisitor(visitor);
	// R�cup�rer la surface calcul�e par le visiteur
	surfaceCalculated = visitor->getTotalSurface();
	// Retirer la m�moire allou�e pour le visiteur
	delete visitor;
	//std::cout << "Command Surface " << surface << std::endl << std::endl;
}