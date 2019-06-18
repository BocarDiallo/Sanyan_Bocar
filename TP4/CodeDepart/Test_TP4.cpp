/*****************************************************************************/
//  Test_TP4.h
//  Implementation of the Class Test_TP4
//  Created on:      2015-10-14
//  Original author: El Houcine Boudoukha and Farouk Ouenniche
/*****************************************************************************/

#include <vector>
#include <exception>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <assert.h>
#include <iostream>

#include "Test_TP4.h"
#include "RobotProxy.h"
#include "CompositeNode.h"
#include "ObstaclesDetectionVisitor.h"
#include "TotalSurfaceToCleanVisitor.h"
#include "House.h"
#include "Room.h"
#include "Obstacle.h"
#include "Chair.h"
#include "Table.h"
#include "Sofa.h"
#include "CommandManager.h"
#include "ObstacleDetectionCommand.h"
#include "TotalSurfaceCalculatorCommand.h"
#include "Observable.h"
#include "Vacuum.h"
#include "Sensor.h"
#include "Motor.h"
#include "Tablet.h"

Test_TP4::~Test_TP4()
{
}

void Test_TP4::executeProxyTest()
{
	std::cout << "------------------------- PROXY -------------------------------" << std::endl;
	Robot* robot_ = new Robot();
	RobotProxy* robotProxy = new  RobotProxy(robot_);

	std::cout << "Test #1 - Changement de la direction du robot" << std::endl << std::endl;
	try
	{
		robotProxy->setDirection("Nord");
		robot_->setRobotState(false); //Le robot n'est pas pret pour executer une nouvelle operation
		robotProxy->setDirection("Sud");
		if (robot_->getDirection() == "Nord")
			this->printSuccess();
		else
			this->printFailure();
	}
	catch (std::exception& e)
	{
		this->printFailure();
		std::cout << e.what() << std::endl;
	}


	std::cout << "Test #2 - Activation de la brosse a tapis" << std::endl << std::endl;
	try
	{
		robotProxy->setBrosseTapis(true);
		if (!robot_->getBrosseTapisState())
			this->printSuccess();
		else
			this->printFailure();
	}
	catch (std::exception& e)
	{
		this->printFailure();
		std::cout << e.what() << std::endl;
	}


	std::cout << "Test #3 - Changement de la vitesse du robot" << std::endl << std::endl;

	try
	{
		robot_->setRobotState(true);
		robotProxy->setSpeed(11.87);
		if (robot_->getSpeed() == 11.87)
			this->printSuccess();
		else
			this->printFailure();
	}
	catch (std::exception& e)
	{
		this->printFailure();
		std::cout << e.what() << std::endl;
	}

	std::cout << "Test #4 - Changement de la puissance du robot" << std::endl << std::endl;

	try
	{

		robotProxy->setPower(8.5);
		if (robot_->getPower() == 8.5)
			this->printSuccess();
		else
			this->printFailure();
	}
	catch (std::exception& e)
	{
		this->printFailure();
		std::cout << e.what() << std::endl;
	}


	std::cout << "Test #5 - Changement de la puissance du robot" << std::endl << std::endl;

	try
	{
		robot_->setRobotState(false);
		robotProxy->setDetection(false);
		if (robot_->getDetection())
			this->printSuccess();
		else
			this->printFailure();
	}
	catch (std::exception& e)
	{
		this->printFailure();
		std::cout << e.what() << std::endl;
	}

	delete robot_;
	


}

void Test_TP4::executeCompositeTest()
{
	std::cout << std::endl << std::endl << "------------------------- COMPOSITE -------------------------------" << std::endl << std::endl;
	std::cout << std::endl;


	House* House1 = new House(nullptr, 0);
	Room* room1 = new Room(House1, 1, 100, 100);

	Chair* chair1 = new Chair(room1, 2, 10, 10);
	Chair* chair2 = new Chair(room1, 3, 10, 10);
	Sofa* sofa1 = new Sofa(room1, 4, 4, 5);
	Table* table1 = new Table(room1, 5, 2);

	std::cout << "Test #1 - Insertion et retrait des enfants" << std::endl << std::endl;


	std::cout << "1.1 - Insertion" << std::endl << std::endl;

	try{

		House1->addChild(room1);
		room1->addChild(chair1);
		room1->addChild(chair2);
		room1->addChild(sofa1);
		room1->addChild(table1);

		if (room1->findChild(2) && room1->findChild(3) && room1->findChild(4) && room1->findChild(5))
		{
			printSuccess();
		}
		else
		{
			printFailure();
		}
	}
	catch (std::exception& e)
	{
		printFailure();
		std::cout << e.what() << std::endl;
	}

	std::cout << "1.2 - Supression" << std::endl << std::endl;

	try{
		room1->removeChild(chair1);
		room1->removeChild(chair2);

		if (!room1->findChild(2) && !room1->findChild(3) && room1->findChild(4) && room1->findChild(5))
		{
			printSuccess();
		}
		else
		{
			printFailure();
		}
	}
	catch (std::exception& e)
	{
		printFailure();
		std::cout << e.what() << std::endl;
	}

	std::cout << "Test #2 - Recuperation des enfants" << std::endl << std::endl;

	try{
		AbstractNode*temp = room1->getChild(5);

		if ((temp != nullptr) && (temp->getID() == room1->getChild(5)->getID()))
		{
			printSuccess();
		}
		else
		{
			printFailure();
		}
	}
	catch (std::exception& e)
	{
		printFailure();
		std::cout << e.what() << std::endl;
	}

	delete House1;
}

void Test_TP4::executeVisiteurTest()
{
	House* House1 = new House(nullptr, 0);
	Room* room1 = new Room(House1, 1, 100, 100);

	Chair* chair1 = new Chair(room1, 2, 10, 10);
	Chair* chair2 = new Chair(room1, 3, 10, 10);
	Sofa* sofa1 = new Sofa(room1, 4, 4, 5);
	Table* table1 = new Table(room1, 5, 2);

	House1->addChild(room1);
	room1->addChild(chair1);
	room1->addChild(chair2);
	room1->addChild(sofa1);
	room1->addChild(table1);

	std::cout << std::endl << std::endl << "------------------------- VISITEUR -------------------------------" << std::endl << std::endl;

	std::cout << "Test #1 - Creation des visiteurs" << std::endl << std::endl;

	try{

		ObstaclesDetectionVisitor* visitor = new ObstaclesDetectionVisitor();
		House1->acceptVisitor(visitor);


		TotalSurfaceToCleanVisitor* totalSurfaceVisitor = new TotalSurfaceToCleanVisitor();
		House1->acceptVisitor(totalSurfaceVisitor);

		printSuccess();

		std::cout << "Test #1.1 Visiteur obstacles" << std::endl << std::endl;

		if (visitor->getObstaclesCounter() == 4)
		{
			printSuccess();
		}
		else
		{
			printFailure();
		}

		std::cout << "Test #1.2 Visiteur Surface" << std::endl << std::endl;

		if ((int)totalSurfaceVisitor->getTotalSurface() == 9724)
		{
			printSuccess();
		}
		else
		{
			printFailure();
		}

	}
	catch (std::exception& e)
	{
		printFailure();
		std::cout << e.what() << std::endl;
	}

	delete House1;
}

void Test_TP4::executeCommandTest()
{
	House* House1 = new House(nullptr, 0);
	Room* room1 = new Room(House1, 1, 100, 100);

	Chair* chair1 = new Chair(room1, 2, 10, 10);
	Chair* chair2 = new Chair(room1, 3, 10, 10);
	Sofa* sofa1 = new Sofa(room1, 4, 4, 5);
	Table* table1 = new Table(room1, 5, 2);

	House1->addChild(room1);
	room1->addChild(chair1);
	room1->addChild(chair2);
	room1->addChild(sofa1);
	room1->addChild(table1);

	CommandManager* commandManager = CommandManager::getInstance();

	commandManager->registerCommand(new ObstacleDetectionCommand(House1));
	commandManager->registerCommand(new TotalSurfaceCalculatorCommand(House1));

	std::cout << std::endl << std::endl << "------------------------- COMMAND -------------------------------" << std::endl << std::endl;
	commandManager->executeAllCommands();

}

void Test_TP4::executeObservatorTest()
{
	Observable*obs = new Observable();

	Sensor*sensor = new Sensor();
	Vacuum*vacuum = new Vacuum;
	Motor*moteur = new Motor();

	Tablet*tablette = new Tablet();

	moteur->addObservateur(tablette);
	sensor->addObservateur(tablette);
	vacuum->addObservateur(tablette);

	moteur->run();
	sensor->run();
	vacuum->run();

	std::cout << std::endl << std::endl << "------------------------- OBSERVATEUR -------------------------------" << std::endl << std::endl;

	std::cout << "Test #5.1 Observateur Motor" << std::endl << std::endl;
	moteur->setTemperature(25);
	moteur->run();
	if (tablette->get_nbAvertissements() == 1)
		printSuccess();
	else
		printFailure();

	std::cout << "Test #5.2 Observateur Sensor" << std::endl << std::endl;
	sensor->setSensor(true);
	sensor->run();
	if (tablette->get_nbAvertissements() == 2)
		printSuccess();
	else
		printFailure();

	std::cout << "Test #5.3 Observateur Vacuum" << std::endl << std::endl;
	vacuum->setPowerV(1200.0);
	vacuum->run();
	if (tablette->get_nbAvertissements() == 3)
		printSuccess();
	else
		printFailure();
}

void Test_TP4::printSuccess()
{
	std::cout << "[Reussi]" << std::endl;
}

void Test_TP4::printFailure()
{
	std::cout << "[Echec]" << std::endl;
}
