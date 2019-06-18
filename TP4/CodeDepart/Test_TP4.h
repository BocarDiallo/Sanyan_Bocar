/*****************************************************************************/
//  Test_TP4.h
//  Implementation of the Class Test_TP4
//  Created on:      2015-10-14
//  Original author: El Houcine Boudoukha and Farouk Ouenniche
/*****************************************************************************/

#ifndef TEST_TP4_H
#define TEST_TP4_H


#include <vector>
#include <exception>
#include"CompositeNode.h"
#include "ObstaclesDetectionVisitor.h"
#include "TotalSurfaceToCleanVisitor.h"
#include "House.h"
#include "Room.h"
#include "Obstacle.h"
#include "Chair.h"
#include "Table.h"
#include "Sofa.h"



//
// Classe TestTP4
//
// Classe de test pour les �l�ments impl�ment�s au TP4
//
class Test_TP4
{
public:

	//-------------------------------------------
	// Constructeur & Destructeur
	//-------------------------------------------
	Test_TP4()  {};
	~Test_TP4();

	//void initializeTestData(); // Initialise les donn�es pour les tests du tp4

	// Tests
	void executeProxyTest();     // Ex�cute les tests sur les proxy
	void executeCompositeTest(); //void executeCompositeTest(); 
	void executeVisiteurTest(); // Ex�cute les tests sur les composites
	void executeCommandTest();     // Ex�cute les tests sur les proxy
	void executeObservatorTest();

protected:
	void printSuccess();
	void printFailure();
};

#endif// TEST_TP4_H
