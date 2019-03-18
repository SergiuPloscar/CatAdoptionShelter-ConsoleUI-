#include "Cat.h"
#include <Windows.h>
#include <shellapi.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Utils.h"
using namespace std;

Cat::Cat() : breed(""), name(""), age(0), photosource("") , weight(0){};
Cat::Cat(const std::string& breed, const std::string& name, const std::int32_t age, const std::string& photosource, const std::double_t weight)
{
	this->breed = breed;
	this->name = name;
	this->age = age;
	this->photosource = photosource;
	this->weight = weight;
}
void Cat::showPhoto()
{
	ShellExecuteA(NULL, NULL, "firefox.exe", this->getPhotoSource().c_str(), NULL, SW_SHOWMAXIMIZED);
}
bool Cat::operator==(const Cat& c)
{
	if (this->breed == c.getBreed() && this->name == c.getName() && this->age == c.getAge() && this->photosource == c.getPhotoSource() && this->weight == c.getWeight())
		return true;
	return false;
}
Cat& Cat::operator=(const Cat& c)
{
	this->breed = c.getBreed();
	this->name = c.getName();
	this->age = c.getAge();
	this->photosource = c.getPhotoSource();
	this->weight = c.getWeight();
	return *this;
}
bool Cat::operator<(const int w)
{
	if (this->weight < w)
		return true;
	return false;
}
ostream &operator << (ostream &out, const Cat &c)
{
	out << c.getName() <<","<< c.getBreed() << "," << c.getAge() << "," << c.getWeight() << "," << c.getPhotoSource() << endl;
	return out;
}

istream & operator >> (istream &in, Cat &c)
{
	string line;
	getline(in, line);
	vector<string> tokens = tokenize(line, ',');
	if (tokens.size() != 5) // make sure all the song data was valid
		return in;
	c.name = tokens[0];
	c.breed = tokens[1];
	c.age = stoi(tokens[2]);
	c.weight = stod(tokens[3]);
	c.photosource = tokens[4];

	return in;

}