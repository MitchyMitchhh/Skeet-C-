#ifndef FLYINGOBJECT_H
#define FLYINGOBJECT_H

#include "point.h"
#include "velocity.h"

class FlyingObject
{
protected:
	Point _position;
	Velocity _velocity;
	bool _alive;
public:
	Point getPoint()
	{
		return _position;
	}
	Velocity getVelocity()
	{
		return _velocity;
	}
	void setPoint(Point position)
	{
		_position = position;
	}
	void setVelocity(Velocity velocity)
	{
		_velocity = velocity;
	}
	bool isAlive();
	void setAlive(bool alive)
	{
		_alive = alive;
	}
	void kill()
	{
		setAlive(false);
	}
	void draw();
	void advance();
};




#endif /* FLYINGOBJECT_H */
