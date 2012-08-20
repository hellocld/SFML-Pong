#ifndef PADDLE_H
#define PADDLE_H

#include <SFML/Graphics.hpp>

class Paddle {
	private:
		float x;
		float y;
		sf::Shape PaddleRect;

	public:
		Paddle(float x, float y);

		sf::Shape GetSprite();
		void SetPosition(float x, float y);
};

#endif
