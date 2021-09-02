#include "Input.hpp"
#include "FileManager.hpp"
#include "KeyboardManager.hpp"

#include <string>

using std::make_unique;
using std::string;

void Input::SetProcess( Process p )
{
	process = p;
}

void Input::ProcessInput()
{
	string text = dataManager->LoadData();
	
	text = encoding.EncodeByPattern< true, false, false, false >( text );

	dataManager->SaveData( "files/outputFileFile", text );
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
