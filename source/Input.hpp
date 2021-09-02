#pragma once

#include "DataManager.hpp"
#include "Encoding.hpp"

#include <memory>

enum class Process
{
	FILE = 0,
	KEYBOARD = 1
};

class Input
{
public:
	Input() : process{ Process::FILE }, dataManager{ nullptr } {}

	void SetProcess( Process p );
	void ProcessInput();

private:
	void SetManager();

	Process process;

	std::unique_ptr< DataManager > dataManager;
	Encoding encoding;
};

