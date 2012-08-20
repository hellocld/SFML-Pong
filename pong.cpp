#include <SFML/Graphics.hpp>
#include "paddle.h"

int main()
{
	sf::RenderWindow Pong(sf::VideoMode(640, 480, 16), "SFML Pong");
	Paddle paddle = Paddle(8, 128);

	while(Pong.IsOpened())
	{
		sf::Event Event;
		while(Pong.GetEvent(Event))
		{
			if(Event.Type == sf::Event::Closed)
				Pong.Close();
		}

		Pong.Clear();

		Pong.Draw(paddle.GetSprite());

		Pong.Display();
	}

	return EXIT_SUCCESS;
}
