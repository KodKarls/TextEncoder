#include "Input.hpp"
#include "FileManager.hpp"
#include "KeyboardManager.hpp"

#include <string>

using std::make_unique;
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::getline;

void Input::SetProcess( Process p )
{
	process = p;
	SetManager();
}

void Input::SetEncodeOption( EncodeOption eo )
{
	encodeOption = eo;
}

void Input::ProcessInput()
{
	dataManager->ClearInput();

	string text = dataManager->LoadData();
	
	switch( encodeOption )
	{
	case EncodeOption::PATTERN:
	{
		auto container = SetPattern();
		text = encoding.EncodeByPattern( container, text );
		dataManager->SaveData( "files/outputFileFile", text );
		break;
	}

	case EncodeOption::LETTERS:
	{
		auto container = SetLettersPattern();
		text = encoding.EncodeLetters( container, text );
		dataManager->SaveData( "files/outputFileKeyboard", text );
		break;
	}

	default:
		break;
	}
}

void Input::SetManager()
{
	switch( process )
	{
	case Process::FILE:
		dataManager = make_unique< FileManager >();
		break;

	case Process::KEYBOARD:
		dataManager = make_unique< KeyboardManager >();
		break;

	default:
		break;
	}
}

const std::vector<bool> Input::SetPattern()
{
	vector< bool >	vec;
	bool			isActive	{ true };
	unsigned short	number		{ 0 };

	cout	<< "[ 1 ] Hide the letter in the text.\n"
			<< "[ 2 ] Leave a letter in the text.\n"
			<< "[ 3 ] Finish entering the pattern.\n" << endl;

	while( isActive )
	{
		cout	<< "Please enter a number (1, 2, 3): ";
		cin		>> number;

		if( number == 1 )
		{
			vec.push_back( false );
		}
		else if( number == 2 )
		{
			vec.push_back( true );
		}
		else
		{
			isActive = false;
		}
	}

	return vec;
}

const std::vector< char > Input::SetLettersPattern()
{
	vector< char >	vec;
	bool			isActive	{ true };
	string			text;

	cout	<< "Enter a list of the characters you want to encode: " << endl;

	getline( cin, text );

	for( unsigned int i = 0; i < text.size(); ++i )
	{
		vec.push_back( text[ i ] );
	}

	return vec;
}
