#pragma once
#include "Robot.h"

class RobotProxy : public AbstractRobot
{
	Robot * OPptr;

public:

	RobotProxy(Robot* OPptr);
	~RobotProxy();


	void setSpeed(double speed);
	void setPower(double power);
	void setDirection(std::string direction);
	void setBrosseTapis(bool TP);
	void setDetection(bool DT);


};