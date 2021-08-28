#include "KeyboardManager.hpp"

using std::cin;
using std::getline;

std::string KeyboardManager::LoadData()
{
	getline( cin, keyboardData.kData );

	return keyboardData.kData;
}
