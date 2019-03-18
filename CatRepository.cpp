#include "CatRepository.h"
#include <string>
#include <fstream>
#include "Utils.h"
int CatRepository::addCatR(const Cat& c)
{
	for (Cat e: this->catlist)
		{
			if (c.getName() == e.getName() && c.getBreed() == e.getBreed() && c.getPhotoSource() == e.getPhotoSource() && c.getAge() == e.getAge() && c.getWeight() == e.getWeight())
				return 0;
		}
	this->catlist.push_back(c);
	this->writeToFile();
	return 1;
	
}

int CatRepository::deleteCatR(const int pos)
{
	if (pos < 0 || pos >= this->catlist.size() )
		return 0;
	this->catlist.erase(this->catlist.begin() + pos);
	this->writeToFile();
	return 1;
}
int CatRepository::updateCatR(const int pos, const std::string& breed, const std::string& name, const std::int32_t age, const std::string& photosource, const std::double_t weight)
{
	if (pos < 0 || pos >= this->catlist.size())
		return 0;
	Cat C = Cat{ breed, name, age, photosource, weight };
	this->catlist[pos] = C;
	this->writeToFile();
	return 1;
}
int CatRepository::addCatA(const Cat& c)
{
	for (Cat e : this->adoptions)
	{
		if (c.getName() == e.getName() && c.getBreed() == e.getBreed() && c.getPhotoSource() == e.getPhotoSource() && c.getAge() == e.getAge() && c.getWeight() == e.getWeight())
			return 0;
	}
	this->adoptions.push_back(c);
	return 1;
}
void CatRepository::displayCatAtVec(const int pos)
{
	Cat c = this->catlist[pos];
	std::cout << c.getName() << " - " << c.getBreed() << " and is " << c.getAge() << " years old and weights around "<<c.getWeight()<<" kilograms \n";
	c.showPhoto();
} 
void CatRepository::readFromFile()
{
	ifstream file("C://Users/SergiuP/source/repos/Lab5_6Pr1/Lab5_6Pr1/Cats.txt");

	//if (!file.is_open())
		//throw FileException("The file could not be opened!");

	Cat c;
	while (file >> c)
		this->catlist.push_back(c);

	file.close();
}
void CatRepository::writeToFile()
{
	ofstream file("Cats.txt");
	//if (!file.is_open())
		//throw FileException("The file could not be opened!");

	for (Cat s : this->catlist)
	{
		file << s;
	}

	file.close();
}