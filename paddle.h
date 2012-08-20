#ifndef PADDLE_H
#define PADDLE_H

#include <SFML/Graphics.hpp>

class Paddle {
	private:
		float X;
		float Y;
		float Speed;
		sf::Shape PaddleRect;

	public:
		Paddle(float x, float y, float speed);

		sf::Shape GetSprite();
		void SetPosition(float x, float y);
		void SetSpeed(float speed);
		void GetInput(const sf::Input& Input, float FrameTime);
		void Update();
};

#endif
