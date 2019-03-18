#pragma once
#include "CatRepository.h"
#include "CatValidator.h"
#include "FileRepository.h"
class CatController
{
private:
	CatRepository repo;
	CatValidator V;
	FileRepository* F;
public:
	CatController(const CatRepository& r) : repo{ r } {}

	CatRepository getRepo() const { return repo; }
	FileRepository* getFile() const { return F; }
	void setFile(FileRepository* f) { F = f; }
	int addCatC(const std::string& breed, const std::string& name, const std::int32_t age, const std::string& photosource, const std::double_t weight);
	int deleteCatC(const int pos);
	int updateCatC(const int pos, const std::string& breed, const std::string& name, const std::int32_t age, const std::string& photosource, const std::double_t weight);
	int addCatCA(Cat C);
	int filterCats(const std::string& breed, const int age, std::vector <Cat>& v);
	int weightCats(const int weight, std::vector<Cat>& v);
	
	
};