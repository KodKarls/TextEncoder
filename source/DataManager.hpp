#pragma once

#include <iostream>
#include <string>
#include <limits>

struct DataManager
{
	virtual std::string LoadData() = 0;
	virtual void		SaveData( std::string fileName, std::string text );

	void ClearInput()
	{
		std::cin.clear();
		std::cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' );
	}
};

