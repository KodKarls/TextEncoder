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
	// Przemy�le� obs�ug� problemu z odczytaniem pliku!
	else
	{
		cout	<< "Nie uda�o si� odtworzy� pliku!" << endl;
	}

	return result;
}
