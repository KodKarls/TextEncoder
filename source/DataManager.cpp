#include "DataManager.hpp"

#include <fstream>

using std::string;
using std::fstream;
using std::ios;

void DataManager::SaveData( string fileName, string text )
{
	fstream outFile( fileName + ".txt", ios::out );

	outFile << text;

	outFile.close();
}
