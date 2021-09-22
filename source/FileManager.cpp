#include "FileManager.hpp"

using std::string;
using std::ios;
using std::cout;
using std::endl;
using std::getline;

std::string FileManager::LoadData()
{
	string result;

	fileData.m_data.open( "files/inputFile.txt", ios::in );

	if( fileData.m_data.good() )
	{
		while( !fileData.m_data.eof() )
		{
			string line;
			getline( fileData.m_data, line );
			result += line;
		}
	}
	else
	{
		cout	<< "Nie uda³o siê odtworzyæ pliku!" << endl;
	}

	fileData.m_data.close();

	return result;
}
