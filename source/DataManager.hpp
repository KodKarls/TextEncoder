#pragma once

#include <iostream>
#include <string>

struct DataManager
{
	virtual std::string LoadData() = 0;
	virtual void		SaveData( std::string fileName, std::string text );

	void				ClearInput();
};

