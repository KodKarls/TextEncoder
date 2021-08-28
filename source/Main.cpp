#include "Menu.hpp"

#include <iostream>

int main( )
{
	std::setlocale( LC_ALL, "polish" );

	Menu menu;
	menu.ShowGreeting();

	while( menu.GetState() )
	{
		menu.ShowOptions();
		menu.ChooseOption();
	}
}