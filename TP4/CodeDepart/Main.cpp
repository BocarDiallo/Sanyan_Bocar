#include <iostream>

#include "Test_TP4.h"

int main() {
	Test_TP4 TestCorrection;

	TestCorrection.executeProxyTest();     // Ex�cute les tests sur les proxy
	TestCorrection.executeCompositeTest(); //void executeCompositeTest(); 
	TestCorrection.executeVisiteurTest(); // Ex�cute les tests sur les composites
	TestCorrection.executeCommandTest();
	TestCorrection.executeObservatorTest();

	return 0;
}