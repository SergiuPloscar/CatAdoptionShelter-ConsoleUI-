#pragma once
#include "CatController.h"

class UI
{
private:
	CatController ctrl;

public:
	UI(const CatController& c) : ctrl(c) {}
	void run();

private:
	static void printMenu();
	static void printRepositoryMenu();
	static void printRepositoryMenu2();
	int addCatUI();
	int deleteCatUI();
	int updateCatUI();
	void displayAllCats();
	void displayCatAt(const int pos);
	void displayAllAdoptions();
};