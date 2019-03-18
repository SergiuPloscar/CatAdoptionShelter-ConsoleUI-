#include "CatValidator.h"

using namespace std;

CatException::CatException(std::vector<std::string> _errors) : errors{ _errors }
{
}

std::vector<std::string> CatException::getErrors() const
{
	return this->errors;
}

void CatValidator::validate(const Cat & c)
{
	vector<string> errors;
	if (c.getBreed().size() < 3)
		errors.push_back("The breed cannot be less than 2 characters!\n");
	if (!isupper(c.getName()[0]))
		errors.push_back(string("The name of the Cat must start with a capital letter!\n"));
	if (c.getAge() <= 0)
		errors.push_back(string("The age cannot be 0!\n"));
	int posWww = c.getPhotoSource().find("www");
	int posHttp = c.getPhotoSource().find("http");
	if (posWww != 0 && posHttp != 0)
		errors.push_back("The photo source must start with one of the following strings: \"www\" or \"http\"");
	if (c.getWeight() <= 0)
		errors.push_back("The weight can't be 0");
	if (errors.size() > 0)
		throw CatException(errors);
}