#pragma once
#include "AbstractCommand.h"
#include <list>

class CommandManager
{
public:

	static CommandManager* getInstance() {
		if (CommandManager::m_instance == NULL)
			m_instance = new CommandManager();

		return m_instance;
	}

	~CommandManager();

	void registerCommand(AbstractCommand* Command);
	void unregisterCommand(AbstractCommand* Command);
	void clearAll();
	void executeAllCommands();
	void execute(AbstractCommand* Command);

private:

	CommandManager();
	static CommandManager* m_instance;
	std::list<AbstractCommand*> m_commandList;
};
