#include <iostream>
#include <ctime>
#include "Array.h"

template <typename T>
Array<T>::Array()
{
	array = nullptr;
	this->len = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->len = n;
	this->array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		array[i] = 0;
}

template<typename T>
Array<T>::Array(Array<T> const &value)
{
	len = value.len;
	array = new T[len];
	for (unsigned int i = 0; i < len; i++)
		array[i] = value.array[i];
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &value)
{
	if (&value == this)
		return *this;

	if (this->len != value.len)
	{
		if (this->array != NULL)
			delete[] this->array;
		this->array = new T[value.len];
	}

	this->len = value.len;
	for (unsigned int i = 0; i < value.len; i++)
		this->array[i] = value.array[i];
	return *this;
}

template<typename T>
T &Array<T>::operator[](int index)
{
	if (static_cast<unsigned int>(index) >= len)
		throw Array::Exception_border();
	return (array[index]);
};

template<typename T>
T const &Array<T>::operator[](int &index) const
{
	if (static_cast<unsigned int>(index) >= len)
		throw Array::Exception_border();
	return (array[index]);
};

template<typename T>
Array<T>::~Array()
{
	if (array)
		delete[] array;
}

template<typename T>
unsigned  int Array<T>::size(void) const
{
	return len;
}

int main(void)
{
	srand(time(NULL));
	int len = (rand() % 15);

	try
	{
		Array<unsigned int> a(len);
		std::cout << "A default -> ";
		for (unsigned int i = 0; i < a.len; i++)
			std::cout << a[i] << " ";
		std::cout << std::endl;

		std::cout << "A -> ";
		for (unsigned int i = 0; i < a.len; i++)
		{
			a[i] = i;
			std::cout << a[i] << " ";
		}
		std::cout << std::endl << "Length A: " << a.size() << std::endl;
		std::cout << std::endl << std::endl;
//		std::cout << a[15] << std::endl;


		Array<unsigned int> b(a);
		std::cout << "B default -> ";
		for (unsigned int i = 0; i < a.len; i++)
			std::cout << a[i] << " ";
		std::cout << std::endl;

		std::cout << "B -> ";
		for (unsigned int i = 0; i < b.len; i++)
		{
			b[i] = i + 1;
			std::cout << b[i] << " ";
		}
		std::cout << std::endl << "Length B: " << b.size() << std::endl;
		std::cout << std::endl << std::endl;


		Array<unsigned int> c;
		c = b;
		std::cout << "C copy B -> ";
		for (unsigned int i = 0; i < c.len; i++)
		{
			std::cout << c[i] << " ";
		}
		std::cout << std::endl << "Length C: " << b.size() << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}