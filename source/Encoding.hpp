#pragma once

#include <string>

/**********************************************************************
//// \brief The structure provides different versions of text encoding.
////
**********************************************************************/
struct Encoding
{
	/**********************************************************************
	//// \brief Encryption according to the given pattern.
	////
	//// If the pattern is: false, false, true, the first two letters will be 
	//// encoded and the third will not be. Then algorithm do the same until 
	//// the end of the text.
	////
	//// \param first	Container for storing the encoding pattern.
	//// \param second	Text for encode.
	////
	//// \return		Encoded text.
	////
	**********************************************************************/
	template< typename C >
	std::string EncodeByPattern( const C& container, std::string text )
	{
		if( container.size() > 0 )
		{
			for( unsigned int i = 0; i < text.size(); ++i )
			{
				if( container[ i % container.size() ] == false )
				{
					text[ i ] = '*';
				}
			}
		}
		return text;
	}

	/**********************************************************************
	//// \brief Encryption according to the letters.
	////
	//// If the pattern is: a, b, c. All letters a, b, and c in the text will be encoded.
	////
	//// \param first	Container for storing the encoding pattern.
	//// \param second	Text for encode.
	////
	//// \return		Encoded text.
	////
	**********************************************************************/
	template< typename C >
	std::string EncodeLetters( const C& container, std::string text )
	{
		for( auto i = 0; i < container.size(); )
		{
			std::string::size_type key = text.find_first_of( container[ i ], 0 );
			if( key != std::string::npos )
			{
				text[ key ] = '*';
			}
			else
				++i;
		}
		return text;
	}
};
