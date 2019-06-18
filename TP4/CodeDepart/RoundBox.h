#pragma once

#include "AbstractBox.h"

class RoundBox : public AbstractBox
{
public:
	RoundBox() {};
	RoundBox(float radius) : m_radius(radius) {};
	~RoundBox() {};

	const float getRadius() { return m_radius; };

	void setRadius(float radius) { m_radius = radius; }

private:
	float m_radius;

};

