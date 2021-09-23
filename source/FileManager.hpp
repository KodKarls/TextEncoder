#pragma once

#include "DataManager.hpp"
#include "FileData.hpp"

/**********************************************************************
/// \brief The structure for manage file data. 
///
**********************************************************************/
struct FileManager : public DataManager
{
    ////////////////////////////////////////////////////////////
    /// \brief Load data from file
    ///
    /// \return string which contains data from the file 
    ///
    ////////////////////////////////////////////////////////////
	std::string LoadData() override;

    FileData fileData;          ///< Object to store data from file
};