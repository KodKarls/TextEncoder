#include "Menu.hpp"

#include <iostream>

int main()
{
	Menu menu;
	menu.ShowGreeting();

	while( menu.GetState() )
	{
		menu.ShowOptions();
		menu.ChooseOption();
	}
}
