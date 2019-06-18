#pragma once
#include <string>


class AbstractRobot{


public:

	virtual void setDirection(std::string direction) = 0;
	virtual void setSpeed(double speed) = 0;
	virtual void setPower(double power) = 0;
	virtual void setBrosseTapis(bool BT) = 0;
	virtual void setDetection(bool DT) = 0;

};