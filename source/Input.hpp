#pragma once

#include "DataManager.hpp"
#include "Encoding.hpp"

#include <vector>
#include <memory>

enum class Process
{
	FILE = 0,
	KEYBOARD = 1
};

enum class EncodeOption
{
	PATTERN = 0,
	LETTERS = 1
};

class Input
{
public:
	constexpr	Input() :	process{ Process::FILE }, 
							encodeOption{ EncodeOption::PATTERN }, 
							dataManager{ nullptr } {}

	void SetProcess( Process p );
	void SetEncodeOption( EncodeOption eo );
	void ProcessInput();

private:
	void SetManager();
	const std::vector< bool > SetPattern();
	const std::vector< char > SetLettersPattern();

	Process							process;
	EncodeOption					encodeOption;

	std::unique_ptr< DataManager >	dataManager;
	Encoding						encoding;
};

