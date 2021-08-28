#pragma once

#include "DataManager.hpp"
#include "FileData.hpp"

struct FileManager : DataManager
{
	FileData fileData;

	std::string LoadData() override;
};