#pragma once

#include "AbstractBox.h"

class BoundingBox : public AbstractBox
{
public:
	BoundingBox() {};
	BoundingBox(float width, float length) : m_width(width), m_length(length) {};
	~BoundingBox() {};

	const float getWidth() { return m_width; };
	const float getLength() { return m_length; };

	void setWidth(float width) { m_width = width; }
	void setLength(float length) { m_length = length; }

private:
	float m_width;
	float m_length;

};

