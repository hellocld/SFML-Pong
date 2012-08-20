all:	pong

pong:	pong.o	paddle.o
	g++ pong.o paddle.o -o pong -lsfml-graphics -lsfml-window -lsfml-system

pong.o:	pong.cpp
	g++ -c pong.cpp

paddle.o:	paddle.cpp
	g++ -c paddle.cpp

