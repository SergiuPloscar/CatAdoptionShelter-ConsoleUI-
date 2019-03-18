//#pragma once
//#include "Cat.h"
//#include <assert.h>
//
//template <typename T>
//class DynamicVector
//{
//private:
//	T* elems;
//	int size;
//	int capacity;
//
//public:
//
//	DynamicVector(int capacity = 10);
//	DynamicVector(const DynamicVector& v);
//	~DynamicVector();
//	DynamicVector& operator-(const T& c);
//	DynamicVector& operator=(const DynamicVector& v);
//	void displayCatAtVec(const int pos);
//	int addCat(const T& e);
//	int deleteCat(const int pos);
//	int updateCat(const int pos, const std::string& breed, const std::string& name, const std::int32_t age, const std::string& photosource, const std::double_t weight);
//	int getSize() const;
//	int getCapacity() const;
//	T* getAllElems() const;
//
//private:
//	void resize(int factor = 2);
//};
//
//template <typename T>
//DynamicVector<T>::DynamicVector(int capacity)
//{
//	this->size = 0;
//	this->capacity = capacity;
//	this->elems = new T[capacity];
//}
//template <typename T>
//DynamicVector<T>::DynamicVector(const DynamicVector& v)
//{
//	this->size = v.size;
//	this->capacity = v.capacity;
//	this->elems = new T[this->capacity];
//	for (int i = 0; i < this->size; i++)
//		this->elems[i] = v.elems[i];
//}
//template <typename T>
//DynamicVector<T>::~DynamicVector()
//{
//	delete[] this->elems;
//}
//template <typename T>
//DynamicVector<T>& DynamicVector<T>::operator-(const T& c)
//{
//	int pos = -1;
//	for (int i = 0;i < this->size;i++)
//		if (this->elems[i] == c)
//			pos = i;
//	if (pos == -1)
//		return *this;
//	for (int i = pos;i < this->size - 1;i++)
//		this->elems[i] = this->elems[i + 1];
//	this->size--;
//	return *this;
//}
//template <typename T>
//DynamicVector<T>& DynamicVector<T>::operator=(const DynamicVector<T>& v)
//{
//	if (this == &v)
//		return *this;
//
//	this->size = v.size;
//	this->capacity = v.capacity;
//
//	delete[] this->elems;
//	this->elems = new Cat[this->capacity];
//	for (int i = 0; i < this->size; i++)
//		this->elems[i] = v.elems[i];
//
//	return *this;
//}
//template <typename T>
//int DynamicVector<T>::addCat(const T& e)
//{
//	for (int i = 0;i < this->size;i++)
//	{
//		if (this->elems[i] == e)
//			return 0;
//	}
//	if (this->size == this->capacity)
//		this->resize(2);
//	this->elems[this->size] = e;
//	this->size++;
//	return 1;
//
//}
//template <typename T>
//int DynamicVector<T>::deleteCat(const int pos)
//{
//	if (pos < 0 || pos >= this->size)
//		return 0;
//
//		for (int i = pos;i < this->size - 1;i++)
//			this->elems[i] = this->elems[i + 1];
//		this->size--;
//		return 1;
//	
//}
//template <typename T>
//int DynamicVector<T>::updateCat(const int pos, const std::string& breed, const std::string& name, const std::int32_t age, const std::string& photosource, const std::double_t weight)
//{
//	if (pos < 0 || pos >= this->size)
//		return 0;
//
//		T C = T{ breed, name, age, photosource, weight};
//		this->elems[pos] = C;
//		return 1;
//
//}
//template <typename T>
//void DynamicVector<T>::resize(int factor)
//{
//	this->capacity *= factor;
//	T* els = new T[this->capacity];
//	for (int i = 0; i < this->size; i++)
//		els[i] = this->elems[i];
//
//	delete[] this->elems;
//	this->elems = els;
//}
//template <typename T>
//T* DynamicVector<T>::getAllElems() const
//{
//	return this->elems;
//}
//template <typename T>
//int DynamicVector<T>::getSize() const
//{
//	return this->size;
//}
//template <typename T>
//int DynamicVector<T>::getCapacity() const
//{
//	return this->capacity;
//}
//template<typename T>
//void DynamicVector<T>::displayCatAtVec(const int pos)
//{
//	Cat c = this->getAllElems()[pos];
//	cout << c.getName() << " - " << c.getBreed() << " and is " << c.getAge() << " years old and weights around "<<c.getWeight()<<" kilograms \n";
//	c.showPhoto();
//}
