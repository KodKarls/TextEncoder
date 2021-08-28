#pragma once

#include <iostream>
#include <string>
#include <limits>

struct DataManager
{
	virtual std::string LoadData() = 0;

	void ClearInput()
	{
		std::cin.clear();
		std::cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' );
	}
};

