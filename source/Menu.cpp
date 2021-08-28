#include "Menu.hpp"
#include "KeyboardManager.hpp"
#include "FileManager.hpp"

#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

void Menu::ShowGreeting()
{
	cout	<< "===================================\n"
			<< "Witaj w programie do szyfrowania :)\n"
			<< "===================================\n" << endl;
}

void Menu::ShowOptions()
{
	cout	<< "Dostêpne opcje:\n"
			<< "[ 1 ] Szyfrowanie tekstu zapisanego w pliku.\n"
			<< "[ 2 ] Szyfrowanie tekstu podanego z klawiatury\n"
			<< "[ 3 ] Wyjœcie z programu\n" << endl;
}

void Menu::ChooseOption()
{
	unsigned short	option	{ 0 };
	string			text;

	cout	<< "Wybierz opcjê: ";
	cin		>> option;

	switch( option )
	{
	case 1:
		cout	<< "Szyfrowanie danych z zapisanego pliku." << endl;
		break;

	case 2:
		cout	<< "Szyfrowanie danych z klawiatury." << endl;
		dataManager = new KeyboardManager;

		cout << "Podaj tekst do zaszyfrowania:" << endl;
		dataManager->ClearInput();
		text = dataManager->LoadData();

		//cout << text << endl;
		break;

	case 3:
		isActive = false;
		cout	<< "Zakoñczono dzia³anie programu." << endl;
		return;

	default:
		cout	<< "Nie ma takiej opcji!" << endl;
		break;
	}

	cout << endl;
}
