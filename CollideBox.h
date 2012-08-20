#ifndef COLLIDEBOX_H
#define COLLIDEBOX_H

class CollideBox()
{
	private:
		float width;
		float height;
		float x;
		float y;

	public:
		CollideBox(float width, float height, float x, float y);
		float GetWidth();
		float GetHeight();
		float GetX();
		float GetY();
};

#endif
