#pragma once

#include "DataManager.hpp"
#include "FileData.hpp"

struct FileManager : public DataManager
{
	FileData fileData;

	std::string LoadData() override;
};