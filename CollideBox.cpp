#include "CollideBox.h"

using namespace std;

CollideBox::CollideBox(float width, float height, float x, float y)
{
	this.width = width;
	this.height = height;
	this.x = x;
	this.y = y;
}

float CollideBox::GetWidth()
{
	return width;
}

float CollideBox::GetHeight()
{
	return height;
}

float CollideBox::GetX()
{
	return x;
}

float CollideBox::GetY()
{
	return y;
}
