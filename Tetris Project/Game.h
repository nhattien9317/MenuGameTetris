#pragma once

#include <SFML/System.hpp>
#include <SFML/Network.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>


/*
		Class that acts as the game engine.
		Wrapper class.
*/


class Game
{
private:
	//Variables
	//Window
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event ev;
	//Private functions
	void iniVariables();
	void iniWindow();
public:
	//Constructors / Destructors
	Game();
	virtual ~Game(); //Máy ảo
	//Accessors
	const bool getWindowIsOpen() const;
	//functions
	void update();
	void render();
};


for (size_t i = 0; i < length; i++)
{

}