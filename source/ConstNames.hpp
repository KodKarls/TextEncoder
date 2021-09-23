#pragma once

/**********************************************************************
/// \brief The file containing all existing constants in the application.
///
**********************************************************************/
namespace MenuNames
{
	constexpr auto& greeting		=	"===================================\n"
										"Welcome to the encryption program :)\n"
										"===================================\n";

	constexpr auto& appOptions		=	"Options available:\n"
										"[ 1 ] Encryption of text saved in a file.\n"
										"[ 2 ] Encryption of text entered from the keyboard\n"
										"[ 3 ] Exit the program\n";

	constexpr auto& userSelection	=	"Choose an option(1, 2, 3): ";

	constexpr auto& fileInfo		=	"File data encryption.";

	constexpr auto& keyboardInfo	=	"Keyboard data encryption.";

	constexpr auto& keyboardPrompt	=	"Enter the text to be encrypted:";

	constexpr auto& exitText		=	"The program is terminated.";

	constexpr auto& wrongOption		=	"The option does not exist!";
}

namespace InputNames
{
	constexpr auto& encodingOptions	=	"Encoding options available:\n"
										"[ 1 ] Encrypt by pattern.\n"
										"[ 2 ] Encrypt by letters.\n";

	constexpr auto& userSelection	=	"Please enter a number (1, 2): ";

	constexpr auto& algorithmOption	=	"[ 1 ] Hide the letter in the text.\n"
										"[ 2 ] Leave a letter in the text.\n"
										"[ 3 ] Finish entering the pattern.\n";

	constexpr auto& choiceAlgorithm	=	"Please enter a number (1, 2, 3): ";

	constexpr auto& keyboardPrompt	=	"Enter a list of the characters you want to encode: ";
}

namespace FileNames
{
	constexpr auto& location		=	"files/";

	constexpr auto& outputFileName	=	"outputFile";

	constexpr auto& format			=	".txt";
}