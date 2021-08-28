#pragma once

#include "DataManager.hpp"

struct FileManager : DataManager
{
	std::string LoadData() override;
};