#pragma once

#include <string>
#include "Cat.h"
#include <vector>
#include "FileRepository.h"
class HTMLAdoptionList: public FileRepository
{

public:
	/*
	Writes the AdoptionList to file.
	Throws: FileException - if it cannot write.
	*/
	HTMLAdoptionList();
		 // Parametru lista de adoptii - LA FEL PT CSV
	void writetoFile(const std::vector <Cat>& adopt) override;

	/*
	Displays the AdoptionList using Microsoft Excel.
	*/
	void displayAdoptionList() override ;
};
