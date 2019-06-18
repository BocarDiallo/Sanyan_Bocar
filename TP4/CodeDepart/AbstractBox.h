#pragma once

class AbstractBox
{
public:
	AbstractBox() {};
	~AbstractBox() {};

	virtual const float getWidth() { return 0; };
	virtual const float getLength() { return 0; };
	virtual const float getBigRadius() { return 0; };
	virtual const float getSmallRadius() { return 0; };
	virtual const float getRadius() { return 0; };

	virtual void setWidth(float width) {}
	virtual void setLength(float length) {}
	virtual void setBigRadius(float radius) {}
	virtual void setSmallRadius(float radius) {}
	virtual void setRadius(float radius) {}

};

