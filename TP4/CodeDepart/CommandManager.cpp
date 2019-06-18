#include "CommandManager.h"

CommandManager* CommandManager::m_instance = NULL;

CommandManager::CommandManager() {}

CommandManager::~CommandManager() {

	this->clearAll();
}

void CommandManager::registerCommand(AbstractCommand* command) {
	m_commandList.push_back(command);
}

void CommandManager::unregisterCommand(AbstractCommand* command) {

}

void CommandManager::clearAll() {
	for (std::list<AbstractCommand*>::iterator i = m_commandList.begin(), e = m_commandList.end(); i != e; i++)
	{
		delete *i;
	}
	m_commandList.clear();
}

void CommandManager::executeAllCommands() {

	for (std::list<AbstractCommand*>::iterator i = m_commandList.begin(), e = m_commandList.end(); i != e; i++)
	{
		(*i)->execute();
	}
}

void CommandManager::execute(AbstractCommand* Command) {

}