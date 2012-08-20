#include "paddle.h"
#include <SFML/Graphics.hpp>

Paddle::Paddle(float x, float y)
{
	PaddleRect = sf::Shape::Rectangle(x, y, x+8, y+32, sf::Color(255,255,255,255));
}

void Paddle::SetPosition(float x, float y)
{
	PaddleRect.SetPosition(x, y);
}

sf::Shape Paddle::GetSprite()
{
	return PaddleRect;
}
