#pragma once

#include "AbstractBox.h"

class EllipseBox : public AbstractBox
{
public:
	EllipseBox() {};
	EllipseBox(float bigRadius, float smallRadius) : m_bigRadius(bigRadius), m_smallRadius(smallRadius){};
	~EllipseBox() {};

	const float getBigRadius() { return m_bigRadius; };
	const float getSmallRadius() { return m_smallRadius; };

	void setBigRadius(float radius) { m_bigRadius = radius; }
	void setSmallRadius(float radius) { m_smallRadius = radius; }

private:
	float m_bigRadius;
	float m_smallRadius;

};
