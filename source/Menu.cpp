#include "Menu.hpp"

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void Menu::ShowGreeting()
{
	cout	<< "===================================\n"
			<< "Witaj w programie do szyfrowania :)\n"
			<< "===================================\n" << endl;
}

void Menu::ShowOptions()
{
	cout	<< "Dost�pne opcje:\n"
			<< "[ 1 ] Szyfrowanie tekstu zapisanego w pliku.\n"
			<< "[ 2 ] Szyfrowanie tekstu podanego z klawiatury\n"
			<< "[ 3 ] Wyj�cie z programu\n" << endl;
}

void Menu::ChooseOption()
{
	unsigned short option{ 0 };

	cout	<< "Wybierz opcj�: ";
	cin		>> option;

	switch( option )
	{
	case 1:
		cout	<< "Szyfrowanie danych z zapisanego pliku." << endl;
		break;

	case 2:
		cout	<< "Szyfrowanie danych z klawiatury." << endl;
		break;

	case 3:
		isActive = false;
		cout	<< "Zako�czono dzia�anie programu." << endl;
		return;

	default:
		cout	<< "Nie ma takiej opcji!" << endl;
		break;
	}

	cout << endl;
}
