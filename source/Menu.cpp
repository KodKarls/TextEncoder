#include "Menu.hpp"

#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

void Menu::ShowGreeting()
{
	cout	<< "===================================\n"
			<< "Welcome to the encryption program :)\n"
			<< "===================================\n" << endl;
}

void Menu::ShowOptions()
{
	cout	<< "Options available:\n"
			<< "[ 1 ] Encryption of text saved in a file.\n"
			<< "[ 2 ] Encryption of text entered from the keyboard\n"
			<< "[ 3 ] Exit the program\n" << endl;
}

void Menu::ChooseOption()
{
	unsigned short	option	{ 0 };

	cout	<< "Choose an option(1, 2, 3): ";
	cin		>> option;

	switch( option )
	{
	case 1:
		cout	<< "Encryption of data from a saved file." << endl;
		input.SetProcess( Process::FILE );
		input.SetEncodeOption();
		input.ProcessInput();
		break;

	case 2:
		cout	<< "Keyboard data encryption." << endl;
		input.SetProcess( Process::KEYBOARD );
		input.SetEncodeOption();

		cout	<< "Enter the text to be encrypted:" << endl;
		input.ProcessInput();
		break;

	case 3:
		isActive = false;
		cout	<< "The program is terminated." << endl;
		return;

	default:
		cout	<< "The option does not exist!" << endl;
		break;
	}

	cout << endl;
}
