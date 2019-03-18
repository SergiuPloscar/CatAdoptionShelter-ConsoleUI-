#pragma once
#include "Cat.h"
#include <vector>

class CatRepository
{
private:
	std::vector<Cat> catlist;
	std::vector<Cat> adoptions;
	

public:
	CatRepository() {}
	int addCatR(const Cat& c);
	int deleteCatR(const int pos);
	int updateCatR(const int pos, const std::string& breed, const std::string& name, const std::int32_t age, const std::string& photosource, const std::double_t weight);
	int addCatA(const Cat&c);

	std::vector<Cat> getCatList() const { return catlist; }
	std::vector<Cat> getAdoptions() const { return adoptions; }
	void displayCatAtVec(const int pos);
	void readFromFile();
	void writeToFile();
};