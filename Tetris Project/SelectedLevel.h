#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class SelectedLevel
{
public:
	void Easy() ;
	void Normal() ;
	void Hard() ;
private:
	struct 
	Font fontselected;
	Text Menu[4];
};

