#include "Vector2D.h"

Vector2D::Vector2D()
{
	X = 0;
	Y = 0;
}

Vector2D::Vector2D(float x, float y)
{
	X = x;
	Y = y;
}

void Vector2D::SetVector(float x, float y)
{
	X = x;
	Y = y;
}

void Vector2D::SetX(float x)
{
	X = x;
}

void Vector2D::SetY(float y)
{
	Y = y;
}

float Vector2D::GetX()
{
	return X;
}

float Vector2D::GetY()
{
	return Y;
}
