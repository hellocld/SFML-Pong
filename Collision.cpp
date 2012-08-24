#include "Collision.h"
#include "CollideBox.h"

bool CheckOverlap(CollideBox box1, CollideBox box2)
{
	//generate the distance values for each axis for both objects (between initial position and position post movement)
	float box1DX = abs(box1.GetX() - box1.GetXvel());
	float box1DY = abs(box1.GetY() - box1.GetYvel());
	float box2DX = abs(box2.GetX() - box2.GetXvel());
	float box2DY = abs(box2.GetY() - box2.GetYvel());

	//calculate the total area covered by both objects, on both axis
	//gather all the values into arrays
	float xvals [4];
	float yvals [4];

	float xvals[0] = (box1.GetVelocity<0) ? box1.GetX() : box1.GetX() + box1.GetWidth();
	float xvals[1] = (box1.GetVelocity<0) ? box1.GetX() + box1.GetXvel() : box1.GetX() + box1.GetXvel() + box1.GetWidth();
	float xvals[2] = (box2.GetVelocity<0) ? box2.GetX() : box2.GetX() + box2.GetWidth();
	float xvals[3] = (box2.GetVelocity<0) ? box2.GetX() + box2.GetXvel() : box2.GetX() + box2.GetXvel() + box2.GetWidth();

	//make the variables for min and max
	float minX = xvals[0];
	float minY = yvals[0];
	float maxX = xvals[0];
	float maxY = yvals[0];

	//a simple for loop that determines what the smallest/largest value is
	for (int i = 0; i < 4; i++)
	{
		if(xvals[i] < minX)
			minX = xvals[i];

		if(xvals[i] > maxX)
			maxX = xvals[i];

		if(yvals[i] < minY)
			minY = yvals[i];

		if(yvals[i] > maxY)
			maxY = yvals[i];
	}

	float totalX = maxX - minX;
	float totalY = maxY - minY;

	//finally, check for overlap
	if(box1DX + box2DX > totalX && box1DY + box2DY > totalY)
	{
		return true;
	} else {
		return false;
	}
}

bool Collision(CollideBox box1, CollideBox box2)
{
	//generate the distance values for each axis for both objects (between initial position and position post movement)
	float box1DX = abs(box1.GetX() - box1.GetXvel());
	float box1DY = abs(box1.GetY() - box1.GetYvel());
	float box2DX = abs(box2.GetX() - box2.GetXvel());
	float box2DY = abs(box2.GetY() - box2.GetYvel());

	//calculate the total area covered by both objects, on both axis
	//gather all the values into arrays
	float xvals [4];
	float yvals [4];

	float xvals[0] = (box1.GetVelocity<0) ? box1.GetX() : box1.GetX() + box1.GetWidth();
	float xvals[1] = (box1.GetVelocity<0) ? box1.GetX() + box1.GetXvel() : box1.GetX() + box1.GetXvel() + box1.GetWidth();
	float xvals[2] = (box2.GetVelocity<0) ? box2.GetX() : box2.GetX() + box2.GetWidth();
	float xvals[3] = (box2.GetVelocity<0) ? box2.GetX() + box2.GetXvel() : box2.GetX() + box2.GetXvel() + box2.GetWidth();

	//make the variables for min and max
	float minX = xvals[0];
	float minY = yvals[0];
	float maxX = xvals[0];
	float maxY = yvals[0];

	//a simple for loop that determines what the smallest/largest value is
	for (int i = 0; i < 4; i++)
	{
		if(xvals[i] < minX)
			minX = xvals[i];

		if(xvals[i] > maxX)
			maxX = xvals[i];

		if(yvals[i] < minY)
			minY = yvals[i];

		if(yvals[i] > maxY)
			maxY = yvals[i];
	}

	float totalX = maxX - minX;
	float totalY = maxY - minY;

	//finally, check for overlap
	if(box1DX + box2DX > totalX && box1DY + box2DY > totalY)
	{
		float overlapX = box1DX + box2DX - totalX;
		float overlapY = box1DY + box2Dy - totalY;
		if(overlapX > overlapY)
		{
			if(box1.GetY() > box2.GetY())
			{
				box1.SetCollidingSide(CollidingSide.BOTTOM);
				box2.SetCollidingSide(CollidingSide.TOP);
			} else {
				box1.SetCollidingSide(CollidingSide.TOP);
				box2.SetCollidingSide(CollidingSide.BOTTOM);
			}
		} else {
			if(box1.GetX() > box2.GetX())
			{
				box1.SetCollidingSide(CollidingSide.RIGHT);
				box2.SetCollidingSide(CollidingSide.LEFT);
			} else {
				box1.SetCollidingSide(CollidingSide.LEFT);
				box2.SetCollidingSide(CollidingSide.RIGHT);
			}
		}

		return true;
	} else {
		box1.SetCollidingSide(CollidingSide.NONE);
		box2.SetCollidingSide(CollidingSide.NONE);
		return false;
	}
}
