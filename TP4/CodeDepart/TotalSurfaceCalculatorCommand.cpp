#include "TotalSurfaceCalculatorCommand.h"
#include "TotalSurfaceToCleanVisitor.h"

TotalSurfaceCalculatorCommand::TotalSurfaceCalculatorCommand():AbstractCommand(), m_root(nullptr)
{}

TotalSurfaceCalculatorCommand::TotalSurfaceCalculatorCommand(AbstractNode* root) : AbstractCommand(),m_root(root)
{}

TotalSurfaceCalculatorCommand::~TotalSurfaceCalculatorCommand() {}

void TotalSurfaceCalculatorCommand::execute() {
	double surface = 0.0;
	// A COMPLETER
	std::cout << "Command Surface " << surface << std::endl << std::endl;
}