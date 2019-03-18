#pragma once
#include <vector>
#include "Cat.h"
class FileRepository
{

public:
	FileRepository();
	
	virtual void writetoFile(const std::vector <Cat>& adopt) = 0;
	virtual void displayAdoptionList() = 0;
};