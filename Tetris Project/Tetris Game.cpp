#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include "Menu.h"
using namespace sf;
using namespace std;

int TetrisBlockShape[7][4]
{
	
};

int main()
{
	RenderWindow window(VideoMode(1920, 1080), "Tetris.exe", Style::Fullscreen);

	Texture BackGroundMenu;
	BackGroundMenu.loadFromFile("D:/Tetris Project/PNG/Tetris Menu Fix.png");

	Sprite EditMenuBackGround(BackGroundMenu);
	EditMenuBackGround.setTextureRect(IntRect(0, 0, 1920, 1080));

	SoundBuffer TetrisSoundMenu, TetrisSoundEffectSelected, TetrisSoundEffectOk;
	TetrisSoundMenu.loadFromFile("D:/Tetris Project/Music/TetrisSoundMenu.wav");
	TetrisSoundEffectSelected.loadFromFile("D:/Tetris Project/Music/General Sounds/se_sys_select.wav");
	TetrisSoundEffectOk.loadFromFile("D:/Tetris Project/Music/General Sounds/se_sys_ok.wav");
	Sound soundmenu, soundselected, soundok;
	
	soundmenu.setBuffer(TetrisSoundMenu);
	soundselected.setBuffer(TetrisSoundEffectSelected);
	soundok.setBuffer(TetrisSoundEffectOk);
	soundmenu.play();
	soundmenu.setLoop(true);

	Menu MenuOptions(window.getSize().x, window.getSize().y);

	while (window.isOpen())
	{
		Event eve;
		while (window.pollEvent(eve))
		{
			switch (eve.type)
			{
			case Event::KeyReleased:
				switch (eve.key.code)
				{
				case Keyboard::Up :case Keyboard::W:
					MenuOptions.MoveUp();
					soundselected.play();
					break;
				case Keyboard::Down :case Keyboard::S:
					MenuOptions.MoveDown();
					soundselected.play();
					break;
				case Keyboard::Return:
					switch (MenuOptions.GetPressedItem())
					{
					case 0:
						soundok.play();
						
						break;
					case 1:
						soundok.play();
						break;
					case 2:
						soundok.play();
						window.close();
						break;
					}
				}
			}
			if (eve.type == Event::Closed)
			window.close();
		}
		window.clear(Color::White);

		window.draw(EditMenuBackGround);
		
		MenuOptions.draw(window);

		window.display();
	}
	
}