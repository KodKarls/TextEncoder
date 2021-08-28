#pragma once

#include "DataManager.hpp"

struct KeyboardManager : public DataManager
{
	std::string LoadData() override;
};

