#include "Menu.h"

using namespace sf;

Menu::Menu(float width, float height)
{
	if (!font.loadFromFile("D:/Tetris Project/Font/JosefinSans-Bold.ttf"))
	{
		// handle error
	}

	menu[0].setFont(font);
	menu[0].setFillColor(Color::Blue);
	menu[0].setString("Play");
	menu[0].setPosition(sf::Vector2f(width = 240, height = 630));

	menu[1].setFont(font);
	menu[1].setFillColor(Color::Cyan);
	menu[1].setString("Options");
	menu[1].setPosition(sf::Vector2f(width = 215, height = 780 ));

	menu[2].setFont(font);
	menu[2].setFillColor(Color::Cyan);
	menu[2].setString("Exit");
	menu[2].setPosition(sf::Vector2f(width = 240, height = 925 ));

	selectedItemIndex = 0;
}

Menu::~Menu()
{

}

void Menu::draw(sf::RenderWindow& window)
{
	for (int i = 0; i < 3; i++)
	{
		window.draw(menu[i]);
	}
}



void Menu::MoveUp()
{
	if (selectedItemIndex - 1 >= 0)
	{
		menu[selectedItemIndex].setFillColor(Color::Cyan);
		selectedItemIndex--;
		menu[selectedItemIndex].setFillColor(Color::Blue);
		
	}
}

void Menu::MoveDown()
{
	if (selectedItemIndex + 1 < 3)
	{
		menu[selectedItemIndex].setFillColor(Color::Cyan);
		selectedItemIndex++;
		menu[selectedItemIndex].setFillColor(Color::Blue);
	}
}