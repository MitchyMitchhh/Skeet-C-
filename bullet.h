#ifndef BULLET_H
#define BULLET_H

#define _USE_MATH_DEFINES

#include <cmath>

#include "uiDraw.h"
#include "flyingObject.h"

#define BULLET_SPEED 10.0

using namespace std;

class Bullet : public FlyingObject
{
public:
	Bullet()
	{
		setAlive(true);
	}
	void draw()
	{
		drawDot(getPoint());
	}
	void fire(Point point, float angle)
	{
		angle = 60.0;
		float dx = BULLET_SPEED * (-cos(3.14159265358979323846264338327 / 180.0 * angle));
		float dy = BULLET_SPEED * (sin(3.14159265358979323846264338327 / 180.0 * angle));
		//set dx and dy to velocity
		Velocity myVelocity(dx, dy);
		setVelocity(myVelocity);
		
	}

};







#endif /* BULLET_H */
