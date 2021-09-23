#include "KeyboardManager.hpp"

using std::cin;
using std::getline;

std::string KeyboardManager::LoadData()
{
	getline( cin, keyboardData.m_data );

	return keyboardData.m_data;
}
