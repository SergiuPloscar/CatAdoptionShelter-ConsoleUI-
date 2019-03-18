#pragma once
#include <iostream>
using namespace std;

class Cat
{
private:
	std::string breed;
	std::string name;
	std::int32_t age;
	std::string photosource;
	std::double_t weight;
public:
	Cat();
	Cat(const std::string& breed, const std::string& name, const std::int32_t age, const std::string& photosource, const std::double_t weight);
	Cat& operator=(const Cat& c);
	std::string getBreed() const { return breed; }
	std::string getName() const { return name; }
	std::int32_t getAge() const { return age; }
	std::string getPhotoSource() const { return photosource; }
	std::double_t getWeight() const { return weight; }
	bool operator==(const Cat& c);
	bool operator<(const int w);
	void showPhoto();
	friend ostream & operator << (ostream &out, const Cat &c);
	friend istream & operator >> (istream &in, Cat &c);
};
