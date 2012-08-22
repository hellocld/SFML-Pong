#ifndef COLLIDEBOX_H
#define COLLIDEBOX_H

class CollideBox()
{
	private:
		Vector2D Position;
		Vector2D Dimensions;
		Vector2D Velocity;

	public:
		CollideBox(float width, float height, float x, float y, float Xvel, float Yvel);
		float GetWidth();
		float GetHeight();
		float GetX();
		float GetY();
		float GetXvel();
		float GetYvel();
		void SetDimensions(float x, float y);
		void SetPosition(float x, float y);
		void SetVelocity(float x, float y);
		Vector2D GetPosition();
		Vector2D GetDimensions();
		Vector2D GetVelocity();
};

#endif
