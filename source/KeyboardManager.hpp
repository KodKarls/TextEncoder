#pragma once

#include "DataManager.hpp"
#include "KeyboardData.hpp"

/**********************************************************************
/// \brief The structure for manage data from keyboard. 
///
**********************************************************************/
struct KeyboardManager : public DataManager
{
    ////////////////////////////////////////////////////////////
    /// \brief Load data from keyboard
    ///
    /// \return string which contains data from the keyboard
    ///
    ////////////////////////////////////////////////////////////
	std::string LoadData() override;

	KeyboardData keyboardData;  ///< Object to store data from the keyboard
};
