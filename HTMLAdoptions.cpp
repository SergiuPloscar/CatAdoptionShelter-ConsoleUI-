
#include <fstream>
#include <iostream>
#include "RepositoryException.h"
#include "Windows.h "
#include "HTMLAdoptions.h"
using namespace std;
HTMLAdoptionList::HTMLAdoptionList():FileRepository()
{
}
void HTMLAdoptionList::writetoFile(const std::vector <Cat>& adopt)
{
	ofstream f("Cats.html");

	string rez = "<!DOCTYPE html>\n";
	rez += "<html>\n";
	rez += "<head>\n";
	rez += "<title>Adoptions</title>\n";
	rez += "</head>\n";
	rez += "<body>\n";
	rez += "<table border=\"1\">\n";
	rez += "<tr>\n";
	rez += "<td>Breed</td>\n";
	rez += "<td>Name</td>\n";
	rez += "<td>Age</td>\n";
	rez += "<td>Weight</td>\n";
	rez += "<td>Source</td>\n";
	rez += "</tr>\n";
	f << rez;
	for (auto c : adopt)
	{
		f << "<tr>" << "<td>" << c.getBreed() << "</td>" << "<td>" << c.getName() << "</td>" << "<td>" << c.getAge() << "</td>" << "<td>" << c.getWeight() << "</td>" << "<td><a href =" << c.getPhotoSource() << ">Link</a></td>" << "</tr>";
	}
	f << "</table></body></html>";
	f.close();

}
void HTMLAdoptionList::displayAdoptionList()
{
	//string aux = "\"" + this->filename + "\""; // if the path contains spaces, we must put it inside quotations
	string aux = "Cats.html";
	ShellExecuteA(NULL, NULL, "firefox.exe", aux.c_str(), NULL, SW_SHOWMAXIMIZED);



}