#pragma once
#include <string>
#include "AbstractRobot.h"

class Robot : public AbstractRobot{


public:

	void setDirection(std::string direction);
	std::string getDirection();
	void setSpeed(double speed);
	double getSpeed();
	void setPower(double power);
	double getPower();
	void setBrosseTapis(bool BT);
	bool getBrosseTapisState();
	void setDetection(bool DT);
	bool getDetection();
	bool getRobotState();
	void setRobotState(bool robotState);

private:
	bool m_robotReady = true;
	std::string direction_ = "";
	double speed_ = 0.0;
	double power_ = 0.0;
	bool BT_ = false;
	bool DT_ = true;
};