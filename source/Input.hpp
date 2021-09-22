#pragma once

#include "DataManager.hpp"
#include "Encoding.hpp"

#include <vector>
#include <memory>

/**********************************************************************
/// \brief The enum class for the type of process to process for the manager.
///
**********************************************************************/
enum class Process
{
	FILE = 0,
	KEYBOARD = 1
};

/**********************************************************************
/// \brief The enum class for the type of encoding option for the manager.
///
**********************************************************************/
enum class EncodeOption
{
	PATTERN = 0,
	LETTERS = 1
};

/**********************************************************************
/// \brief The class for input management.
///
**********************************************************************/
class Input
{
public:
	////////////////////////////////////////////////////////////
	/// \brief Default constructor
	///
	/// This constructor defines defulat Input
	///
	////////////////////////////////////////////////////////////
	constexpr	Input() :	process{ Process::FILE }, 
							encodeOption{ EncodeOption::PATTERN }, 
							dataManager{ nullptr } {}

	////////////////////////////////////////////////////////////
	/// \brief Set process for input
	///
	/// \param p type of process for input
	///
	////////////////////////////////////////////////////////////
	void SetProcess( Process p );

	////////////////////////////////////////////////////////////
	/// \brief Set encode option for input
	///
	/// \param eo type of encoding option for input
	///
	////////////////////////////////////////////////////////////
	void SetEncodeOption( EncodeOption eo );

	////////////////////////////////////////////////////////////
	/// \brief	process the input data depends on the type of 
	///			process and encoding option
	///
	////////////////////////////////////////////////////////////
	void ProcessInput();

private:
	////////////////////////////////////////////////////////////
	/// \brief	Set type of manager depends on the type of process
	///
	////////////////////////////////////////////////////////////
	void SetManager();

	///////////////////////////////////////////////////////////
	/// \brief	Set encode pattern
	/// 
	///
	/// \return	vector of bool includes a pattern that represents 
	///			a sequence of text encoding
	/// 
	////////////////////////////////////////////////////////////
	const std::vector< bool > SetPattern();

	///////////////////////////////////////////////////////////
	/// \brief	Set letters pattern
	/// 
	///
	/// \return	vector of char includes letters to encode in text
	/// 
	////////////////////////////////////////////////////////////
	const std::vector< char > SetLettersPattern();

	Process							process;		///< Type of process
	EncodeOption					encodeOption;	///< Type of encoding option

	std::unique_ptr< DataManager >	dataManager;	///< Pointer to the data manager
	Encoding						encoding;		///< Object to use encoding algorithm
};
