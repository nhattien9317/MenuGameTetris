#include <iostream>
#include <array>
#include "Game.h"
#include <SFML/System.hpp>
#include <SFML/Network.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
using namespace sf;

int main()
{
	//window
	RenderWindow window(VideoMode(1920, 1080), "Tetris.exe");

	Texture menu;
	menu.loadFromFile("D:/Tetris Project/images/Tetris Menu.png");

	Event ev;
	Game game;
	//
	while (game.running())
	{
		//Event polling

		//Update
		game.update();

		//Render
		game.render();
	}
	
	//End of application
	return 0;
}