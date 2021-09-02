#include "Input.hpp"
#include "FileManager.hpp"
#include "KeyboardManager.hpp"

#include <string>

using std::make_unique;
using std::string;

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
		text = encoding.EncodeByPattern< true, false, false, false >( text );
		dataManager->SaveData( "files/outputFileFile", text );
		break;

	case EncodeOption::LETTERS:
		text = encoding.EncodeLetters< '³', 'a', 'e' >( text );
		dataManager->SaveData( "files/outputFileKeyboard", text );
		break;

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
