#pragma once

#include <iostream>
#include <string>

/**********************************************************************
/// \brief The structure provides access to data operations.
///
**********************************************************************/
struct DataManager
{	
    ////////////////////////////////////////////////////////////
    /// \brief Load data
    ///
    /// \return string to encode
    ///
    ////////////////////////////////////////////////////////////
	virtual std::string LoadData() = 0;

    ////////////////////////////////////////////////////////////
    /// \brief Save data
    /// 
    /// \param fileName filename to save data
    /// \param text     string to save in file
    ///
    ////////////////////////////////////////////////////////////
	virtual void		SaveData( std::string fileName, std::string text );

    ////////////////////////////////////////////////////////////
    /// \brief Clear the input
    /// 
    /// Before type a string from the keyboard clear the buffer.
    ///
    ////////////////////////////////////////////////////////////
	void				ClearInput();
};
