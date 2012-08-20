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
	PaddleRect.SetPosition(X, Y);
}

void Paddle::SetSpeed(float speed)
{
	Speed = speed;
}

sf::Shape Paddle::GetSprite()
{
	return PaddleRect;
}

void Paddle::GetInput(const sf::Input& Input, float FrameTime)
{
	if(Input.IsKeyDown(sf::Key::Up))
	{
		Y -= Speed * FrameTime;
	}

	if(Input.IsKeyDown(sf::Key::Down))
	{
		Y += Speed * FrameTime;
	}
}

void Paddle::Update()
{
	PaddleRect.SetPosition(X, Y);
}
