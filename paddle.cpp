#include "paddle.h"
#include <SFML/Graphics.hpp>

Paddle::Paddle(float x, float y, float speed)
{
	X = x;
	Y = y;
	Speed = speed;
	
	PaddleRect = sf::Shape::Rectangle(X, Y, X+8, Y+32, sf::Color(255,255,255,255));
}

void Paddle::SetPosition(float x, float y)
{
	X = x;
	Y = y;
}

void Paddle::SetSpeed(float speed)
{
	Speed = speed;
}

sf::Shape Paddle::GetSprite()
{
	return PaddleRect;
}

void Paddle::GetEvent(sf::Event& Event, float FrameTime)
{
	if((Event.Type == sf::Event::KeyPressed) && (Event.Key.Code == sf::Key::Up))
		Y -= Speed * FrameTime;

	if((Event.Type == sf::Event::KeyPressed) && (Event.Key.Code == sf::Key::Down))
		Y += Speed * FrameTime;
}

void Paddle::Update()
{
	PaddleRect.SetPosition(X, Y);
}
