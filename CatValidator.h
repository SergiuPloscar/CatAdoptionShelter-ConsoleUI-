#pragma once
#include <string>
#include "Cat.h"
#include <vector>

class CatException
{
private:
	std::vector<std::string> errors;

public:
	CatException(std::vector<std::string> _errors);
	std::vector<std::string> getErrors() const;
};

class CatValidator
{
public:
	CatValidator() {}
	static void validate(const Cat& c);
};
