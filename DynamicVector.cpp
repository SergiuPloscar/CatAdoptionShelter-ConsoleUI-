#include "DynamicVector.h"
#include <assert.h>
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
//	int pos=-1;
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
//void DynamicVector<T>::testOperatorDelete()
//{
//	DynamicVector<Cat> v = DynamicVector{ 10 };
//	T c1 = T{ "Tabby","MeatBall",4,"http://i.dailymail.co.uk/i/pix/2014/01/31/article-2548957-1B18E81700000578-293_638x627.jpg" };
//	T c2 = T{ "Orange\White Tabby","Meow",6,"https://upload.wikimedia.org/wikipedia/en/f/f5/Meow_the_fat_cat.jpg" };
//	T c3 = T{ "Orange\White Tabby","Garfield",10,"http://msnbcmedia.msn.com/j/today/sections/blogs/animaltracks/june%202012/garfield_scale1.nbcnews-ux-1024-900.jpg" };
//	T c4 = T{ "Siamese","Katy",10,"https://i0.wp.com/worth-seeing.com/wp-content/uploads/2017/12/Fat-cat-123-696x521.jpg" };
//	T c5 = T{ "Maine Coon","Mitzi",2,"https://metrouk2.files.wordpress.com/2017/05/pri_39765840.jpg?w=620&h=425&crop=1" };
//	T c6 = T{ "Idek","Cat",2,"https://metrouk2.files.wordpress.com/2017/05/pri_39765840.jpg?w=620&h=425&crop=1" };
//	v.addCat(c1);
//	v.addCat(c2);
//	v.addCat(c3);
//	v.addCat(c4);
//	v.addCat(c5);
//	v = v - c1;
//	v = v - c4;
//	v = v - c6;
//	for (int i = 0;i < v.getSize();i++)
//	{
//		assert(!(v.getAllElems()[i] == c1));
//		assert(!(v.getAllElems()[i] == c4));
//		assert(!(v.getAllElems()[i] == c6));
//	}
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
//if (this->size == this->capacity)
//	this->resize(2);
//this->elems[this->size] = e;
//this->size++;
//return 1;
//		
//}
//template <typename T>
//int DynamicVector<T>::deleteCat(const int pos)
//{
//	if (pos < 0 || pos >= this->size)
//		return 0;
//	else
//	{
//		for (int i = pos;i < this->size - 1;i++)
//			this->elems[i] = this->elems[i + 1];
//		this->size--;
//		return 1;
//	}
//}
//template <typename T>
//int DynamicVector<T>::updateCat(const int pos, const std::string& breed, const std::string& name, const std::int32_t age, const std::string& photosource)
//{
//	if (pos < 0 || pos >= this->size)
//		return 0;
//	else
//	{
//		T C = T{ breed, name, age, photosource};
//		this->elems[pos]=C;
//		return 1;
//	}
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