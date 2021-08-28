#pragma once

#include "DataManager.hpp"
#include "Encoding.hpp"

/* Klasa reprezentuj�ca menu z wszelkimi dost�pnymi opcjami. */
class Menu
{
public:
	constexpr Menu() : isActive{ true }, dataManager{ nullptr } {};

	~Menu()	{ delete dataManager; }

	void ShowGreeting();
	void ShowOptions();
	void ChooseOption();

	bool GetState() const noexcept { return isActive; }

private:
	bool isActive;

	DataManager*	dataManager;
	Encoding		encoding;
};

