#include "RobotProxy.h"


RobotProxy::~RobotProxy()
{
	// A COMPLETER
	OPptr = nullptr;
}

RobotProxy::RobotProxy(Robot* Operation)
{
	// A COMPLETER
	OPptr = Operation;
}


void RobotProxy::setDirection(std::string direction)
{
	// A COMPLETER
	if (OPptr->getRobotState() == true)
		OPptr->setDirection(direction);
}

void RobotProxy::setBrosseTapis(bool BT)
{
	// A COMPLETER
	if (OPptr->getRobotState() == true)
		OPptr->setBrosseTapis(BT);
}

void RobotProxy::setDetection(bool DT)
{
	// A COMPLETER
	if (OPptr->getRobotState() == true)
		OPptr->setDetection(DT);
}

void RobotProxy::setPower(double power)
{
	// A COMPLETER
	if (OPptr->getRobotState() == true)
		OPptr->setPower(power);
}

void RobotProxy::setSpeed(double speed)
{
	// A COMPLETER
	if (OPptr->getRobotState() == true)
		OPptr->setSpeed(speed);
}