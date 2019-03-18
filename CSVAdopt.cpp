#include "CSVAdopt.h"
#include <fstream>
#include "RepositoryException.h"
#include <Windows.h>
using namespace std;

CSVAdoptionList::CSVAdoptionList():FileRepository()
{
}

void CSVAdoptionList::writetoFile(const std::vector <Cat>& adopt)
{
	ofstream f("Cats.csv");

	if (!f.is_open())
		throw FileException("The file could not be opened!");

	for (auto c : adopt) {
		f << c.getBreed() << ", " << c.getName() << ", " << c.getAge() << ", " << c.getPhotoSource() << ", " << c.getWeight() << "\n";
	}

	f.close();
}

void CSVAdoptionList::displayAdoptionList()
{
	//string aux = "\"" + this->filename + "\""; // if the path contains spaces, we must put it inside quotations

	string aux = "Cats.csv";
	ShellExecuteA(NULL, NULL, "notepad.exe", aux.c_str(), NULL, SW_SHOWMAXIMIZED);

}


