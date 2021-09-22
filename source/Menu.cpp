#include "Menu.hpp"
#include "ConstNames.hpp"

#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

void Menu::ShowGreeting()
{
	cout	<< MenuNames::greeting << endl;
}

void Menu::ShowOptions()
{
	cout	<< MenuNames::appOptions << endl;
}

void Menu::ChooseOption()
{
	unsigned short	option	{ 0 };

	cout	<< MenuNames::userSelection;
	cin		>> option;

	switch( option )
	{
	case 1:
		cout	<< MenuNames::fileInfo << endl;
		input.SetProcess( Process::FILE );
		input.SetEncodeOption();
		input.ProcessInput();
		break;

	case 2:
		cout	<< MenuNames::keyboardInfo << endl;
		input.SetProcess( Process::KEYBOARD );
		input.SetEncodeOption();

		cout	<< MenuNames::keyboardPrompt << endl;
		input.ProcessInput();
		break;

	case 3:
		isActive = false;
		cout	<< MenuNames::exitText << endl;
		return;

	default:
		cout	<< MenuNames::wrongOption << endl;
		break;
	}

	cout << endl;
}
