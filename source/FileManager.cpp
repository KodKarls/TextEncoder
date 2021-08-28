#include "FileManager.hpp"

using std::string;
using std::ios;
using std::cout;
using std::endl;
using std::getline;

std::string FileManager::LoadData()
{
	string result;

	fileData.fData.open( "files/inputFile.txt", ios::in );

	if( fileData.fData.good() )
	{
		while( !fileData.fData.eof() )
		{
			string line;
			getline( fileData.fData, line );
			result += line;
		}
	}
	// Przemyœleæ obs³ugê problemu z odczytaniem pliku!
	else
	{
		cout	<< "Nie uda³o siê odtworzyæ pliku!" << endl;
	}

	return result;
}
