#pragma once

#include "Robot.h"

void Robot::setRobotState(bool robotState)
{
	m_robotReady = robotState;
}

bool Robot::getRobotState()
{
	return m_robotReady;
}

void Robot::setDirection(std::string direction)
{
	direction_ = direction;
}
std::string Robot::getDirection()
{
	return direction_;
}

void Robot::setBrosseTapis(bool BT)
{
	BT_ = BT;
}
bool Robot::getBrosseTapisState()
{
	return BT_;
}

void Robot::setDetection(bool DT)
{
	DT_ = DT;
}

bool Robot::getDetection()
{
	return DT_;
}
void Robot::setPower(double power)
{
	power_ = power;
}

double Robot::getPower()
{
	return power_;
}
void Robot::setSpeed(double speed)
{
	speed_ = speed;
}

double Robot::getSpeed()
{
	return speed_;
}