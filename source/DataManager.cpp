#include "DataManager.hpp"

#include <fstream>
#include <limits>

using std::string;
using std::fstream;
using std::ios;
using std::cin;
using std::numeric_limits;
using std::streamsize;

void DataManager::SaveData( string fileName, string text )
{
	fstream outFile( fileName + ".txt", ios::out );

	outFile << text;

	outFile.close();
}

void DataManager::ClearInput()
{
	cin.clear();
	cin.ignore( numeric_limits < streamsize >::max(), '\n' );
}
