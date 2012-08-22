#ifndef VECTOR2D_H
#define VECTOR2D_H

class Vector2D
{
	private:
		float X;
		float Y;
	public:
		Vector2D();
		Vector2D(float x, float y);
		void SetVector(float x, float y);
		void SetX(float x);
		void SetY(float y);
		float GetX();
		float GetY();
}

#endif
