#include <iostream>
#include "iter.hpp"

template<typename T>
void	print(T data) {
	std::cout << data << " " ;
}

template <typename T1, typename T2>
void iter(T1 *array, T2 len, void f(T1))
{
	for (long long i = 0; i < len; ++i)
	{
		f(array[i]);
	}
}

class Type {
private:
	int _n;
public:
	Type(){
		_n = 21;
		return ;
	}
	int get() const { return _n; }
	~Type(){}
};

std::ostream & operator<<(std::ostream &out, Type const &rhs ) {
	out << rhs.get();
	return out;
}

int main(void)
{
	int array[] = {65, 550, 443, 80, 8080};
	std::string str[] = {"string1", "string2", "string3"};
	Type array_type[8];

	std::cout << "array int: \t";
	iter(array, 5, print);
	std::cout <<std::endl;

	std::cout << "array string: \t";
	iter(str, 3, print);
	std::cout <<std::endl;

	std::cout << "array type: \t";
	iter(array_type, 8, print);
	std::cout <<std::endl;

	return 0;
}