#pragma once

#include "Input.hpp"

/* Klasa reprezentuj¹ca menu z wszelkimi dostêpnymi opcjami. */
class Menu
{
public:
	constexpr Menu() : isActive{ true } {};

	void ShowGreeting();
	void ShowOptions();
	void ChooseOption();

	bool GetState() const noexcept { return isActive; }

private:
	bool isActive;

	Input input;
};

