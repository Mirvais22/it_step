#include "MyArray.h"

ostream& operator<<(ostream& os, const MyArray obj)
{
	for (auto i = 0; i < obj.size; i++)
		os << obj.masiv[i]<<" ";
	return os;
}

MyArray::MyArray()
{
	size = 0;
	masiv = nullptr;
	index = -1;
}

MyArray::MyArray(const MyArray& obj)
{
	this->size = obj.size;
	this->masiv = new int[obj.size];
	for (auto i = 0; i < obj.size; i++)
		this->masiv[i] = obj.masiv[i];

}

MyArray::MyArray(MyArray&& obj)
{
	this->size = obj.size;
	this->masiv = obj.masiv;
	obj.masiv = nullptr;
}

MyArray MyArray::operator=(const MyArray& obj)
{
	this->size = obj.size;
	if (this->masiv)
		delete[] this->masiv;
	this->masiv = new int[obj.size];
	for (auto i = 0; i < obj.size; i++)
		this->masiv[i] = obj.masiv[i];

	return *this;
}

MyArray MyArray::operator=(MyArray&& obj)
{
	this->size = obj.size;
	if (this->masiv)
		delete[] this->masiv;
	this->masiv = obj.masiv;
	obj.masiv = nullptr;
	return *this;
}

MyArray MyArray::operator+(const MyArray& obj) const
{
	int* new_masiv1 = nullptr;
	new_masiv1 = new int[this->size + obj.size];
	for (size_t i = 0; i < this->size + obj.size; i++)
	{
		if (i < size)
			new_masiv1[i] = this->masiv[i];
		else
			for (size_t j = 0; j < size; i++)
				new_masiv1[i] = obj.masiv[j];
			
	}
	return MyArray();
}

void MyArray::begin()
{
	index = 0;
}

bool MyArray::end() const
{
	if (true)
		return this->index < this->size;
	else
		return 0;
}

void MyArray::next()
{
	index++;
}

int MyArray::get() const
{
	for(size_t i = 0; i < size; i++)
		return this-> masiv[i];
}

void MyArray::resize(const size_t new_size)
{
	int* new_masiv = nullptr;
	new_masiv = new int[new_size];
	for (size_t i = 0; i < new_size; i++)
	{
		new_masiv[i] = this->masiv[i];
	}
}

void MyArray::revers()
{
	int temp = 0;
	for (size_t i = 0; i < (size/2); i++)
	{
		temp = this->masiv[i];
		this->masiv[i] = this->masiv[size - 1 - i];
		this->masiv[size - 1 - i] = temp;
	}
}

void MyArray::sort()
{
	int temp = 0;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (this->masiv[j] > this->masiv[j + 1]) {
				// меняем элементы местами
				temp = this->masiv[j];
				this->masiv[j] = this->masiv[j + 1];
				this->masiv[j + 1] = temp;
			}
		}
	}
}

size_t MyArray::lenght() const
{
	return size;
}




























//header
#include <iostream>
using namespace std;
class MyArray {
public:
	MyArray();
	explicit MyArray(const size_t size);
	MyArray(const MyArray& obj);
	MyArray(MyArray&& obj);
	MyArray operator=(const MyArray& obj);
	MyArray operator=(MyArray&& obj);
	MyArray operator+ (const MyArray& obj) const;
	void begin();
	bool end() const;
	void next();
	int	get() const;
	void set(const int data, const size_t pos = 0);
	void resize(const size_t new_size);
	void revers();
	void sort();
	size_t lenght() const;
	friend ostream& operator<< (ostream& os, const MyArray obj);
	~MyArray();
private:
	size_t size;
	int* masiv;
	size_t index;
};

