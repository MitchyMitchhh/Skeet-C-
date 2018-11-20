#ifndef BIRD_H
#define BIRD_H

#include "flyingObject.h"
#include "uiDraw.h"

class Bird : public FlyingObject
{
protected:

public:
	virtual void draw() = 0;
	virtual int hit() = 0;

};

class StandardBird : public Bird
{
public:
	StandardBird()
	{
		setAlive(true);
		Point myPoint;
		myPoint.setX(-200);
		myPoint.setY(random(-200, 200));
		setPoint(myPoint);
		Velocity myVelocity;
		myVelocity.setDx(random(3, 6));
		if (getPoint().getY() < 0)
			myVelocity.setDy(random(0, 4));
		else
			myVelocity.setDy(random(0, -4));
		setVelocity(myVelocity);

	}
	void draw()
	{
		drawCircle(getPoint(), 8);
	}

	int hit()
	{
		kill();
		return 1;
	}
};

class ToughBird : public Bird
{
private:
	int hits = 3;
public:
	ToughBird()
	{
		setAlive(true);
		Point myPoint;
		myPoint.setX(-200);
		myPoint.setY(random(-200, 200));
		setPoint(myPoint);
		Velocity myVelocity;
		myVelocity.setDx(random(3, 6));
		if (getPoint().getY() < 0)
			myVelocity.setDy(random(0, 4));
		else
			myVelocity.setDy(random(0, -4));
		setVelocity(myVelocity);

	}
	void draw()
	{
		drawToughBird(getPoint(), 8, hits);
	}

	int hit()
	{
		hits - 1;
		
		if (hits = 0)
		{
			kill();
			return 3;
		}
		return 1;
	}
};

class SacredBird : public Bird
{
public:
	SacredBird()
	{
		setAlive(true);
		Point myPoint;
		myPoint.setX(-200);
		myPoint.setY(random(-200, 200));
		setPoint(myPoint);
		Velocity myVelocity;
		myVelocity.setDx(random(3, 6));
		if (getPoint().getY() < 0)
			myVelocity.setDy(random(0, 4));
		else
			myVelocity.setDy(random(0, -4));
		setVelocity(myVelocity);

	}
	void draw()
	{
		drawSacredBird(getPoint(), 8);
	}

	int hit()
	{
		kill();
		return -10;
	}
};

#endif /* BIRD_H */
