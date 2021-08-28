#pragma once

#include "DataManager.hpp"
#include "KeyboardData.hpp"

struct KeyboardManager : public DataManager
{
	KeyboardData keyboardData;

	std::string LoadData() override;
};

