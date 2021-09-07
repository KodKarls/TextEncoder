#pragma once

#include <string>

/* Struktura umo�liwiaj�ca r�ne wersje szyfrowania otrzymanego tekstu  */
struct Encoding
{
	/* Szyfrowanie wed�ug podanego wzoru:
	* Wybieraj�c wz�r np. true, false, false, false - otzymamy szyfrowanie od 2 do 4 litery,
	* kt�re powtarza� si� b�dzie okresowo.
	*/
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

	/* Szyfrowanie wed�ug liter:
	* Wybieramy zestaw liter np. 'a', 'e' - te litery zostan� zaszyfrowane w podanym tek�cie.
	*/
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

