#pragma once
#include "Cat.h"
#include <string>
#include <vector>
#include "FileRepository.h"
class CSVAdoptionList: public FileRepository
{
public:
	/*
	Writes the AdoptionList to file.
	Throws: FileException - if it cannot write.
	*/
	CSVAdoptionList();
	void writetoFile(const std::vector <Cat>& adopt) override;

	/*
	Displays the AdoptionList using Microsoft Excel.
	*/
	void displayAdoptionList() override;
};
