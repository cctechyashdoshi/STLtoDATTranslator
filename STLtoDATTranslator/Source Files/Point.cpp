#include "Point.h"



Point::Point(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

int Point::getX()
{
	return x;
}
int Point::getY()
{
	return y;
}
int Point::getZ()
{
	return z;
}

Point::~Point()
{
}



