#include "CollideBox.h"
#include "Vector2D.h"

using namespace std;

CollideBox::CollideBox(float width, float height, float x, float y, float xvel, float yvel)
{
	Position = new Vector2D(x, y);
	Dimensions = new Vector2D(width, height);
	Velocity = new Vector2D(xvel, yvel);
}

float CollideBox::GetWidth()
{
	return Dimensions.GetX(); 
}

float CollideBox::GetHeight()
{
	return Dimensions.GetY();
}

float CollideBox::GetX()
{
	return Position.GetX();
}

float CollideBox::GetY()
{
	return Position.GetY();
}

float CollideBox::GetXvel()
{
	return Velocity.GetX();
}

float CollideBox::GetYvel()
{
	return Velocity.GetY();
}

void CollideBox::SetDimensions(float x, float y)
{	
	Dimensions.SetVector(x, y);
}

void CollideBox::SetPosition(float x, float y)
{
	Position.SetVector(x, y);
}

void CollideBox::SetVelocity(float x, float y)
{
	Velocity.SetVector(x, y);
}

Vector2D CollideBox::GetDimensions()
{
	return Dimensions;
}

Vector2D CollideBox::GetPosition()
{
	return Position;
}

Vector2D CollideBox::GetVelocity()
{
	return Velocity;
}
