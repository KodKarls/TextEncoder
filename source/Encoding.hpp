#pragma once

#include <string>

/* Struktura umo¿liwiaj¹ca ró¿ne wersje szyfrowania otrzymanego tekstu  */
struct Encoding
{
	/* Szyfrowanie wed³ug podanego wzoru:
	* Wybieraj¹c wzór np. true, false, false, false - otzymamy szyfrowanie od 2 do 4 litery,
	* które powtarzaæ siê bêdzie okresowo.
	*/
	template< typename bool... Values >
	std::string EncodeByPattern( std::string text )
	{
		constexpr unsigned int arraySize = sizeof...( Values );

		if constexpr( arraySize > 0 )
		{
			// Przepisanie wartoœci do tablicy.
			bool pattern[ arraySize ] { Values... };

			for( unsigned int i = 0; i < text.size(); ++i )
			{
				if( pattern[ i % arraySize ] == false )
				{
					text[ i ] = '*';
				}
			}
		}
		return text;
	}

	/* Szyfrowanie wed³ug liter:
	* Wybieramy zestaw liter np. 'a', 'e' - te litery zostan¹ zaszyfrowane w podanym tekœcie.
	*/
	template< typename char... Args >
	std::string EncodeLetters( std::string text )
	{
		char badLetters[ sizeof...( Args ) + 1 ] { Args... };

		while( true )
		{
			std::string::size_type key = text.find_first_of( badLetters, 0 );
			if( key != std::string::npos )
			{
				text[ key ] = '*';
			}
			else
				return text; // gdy nie ma wiêcej wybranych znaków ( tych, które ukrywamy )
		}
	}
};

