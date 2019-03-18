#include "CatController.h"

int CatController::addCatC(const std::string& breed, const std::string& name, const std::int32_t age, const std::string& photosource, const std::double_t weight)
{	
	
	Cat C = Cat{ breed,name,age,photosource,weight};
	this->V.validate(C);
	return this->repo.addCatR(C);
}
int CatController::deleteCatC(const int pos)
{
	return this->repo.deleteCatR(pos);
}
int CatController::updateCatC(const int pos, const std::string& breed, const std::string& name, const std::int32_t age, const std::string& photosource , const std::double_t weight)
{
	Cat C = Cat{ breed,name,age,photosource,weight };
	this->V.validate(C);
	return this->repo.updateCatR(pos,breed,name,age,photosource,weight);
}
int CatController::addCatCA(Cat C)
{
	return this->repo.addCatA(C);
}
int CatController::filterCats(const std::string& breed, const int age, std::vector<Cat>& v)
{
	int ok = 0;
	for (int i = 0;i<this->getRepo().getCatList().size();i++)
	{
		if (this->getRepo().getCatList()[i].getBreed() == breed && this->getRepo().getCatList()[i].getAge() < age)
		{
			v.push_back(this->getRepo().getCatList()[i]);
			ok = 1;
		}
	}
	return ok;
}
int CatController::weightCats(const int weight, std::vector<Cat>& v)
{
	int ok = 0;
	for (int i=0;i<this->getRepo().getCatList().size();i++)
		if (this->getRepo().getCatList()[i].getWeight() < weight)
		{
			v.push_back(this->getRepo().getCatList()[i]);
			ok = 1;
		}
	return ok;
}