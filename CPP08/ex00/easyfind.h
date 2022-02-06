#ifndef EX00_EASYFIND_HPP
# define EX00_EASYFIND_HPP

#include <iostream>

template <typename T>
int	easyfind(T container, int value) {
	class ErrorContainerException: public std::exception {
		const char * what() const throw() {
			return ("Error: no occurence");
		}
	};
	typename T::iterator iter = std::find(container.begin(), container.end(), value);
	if (iter != container.end()) {
		int index = std::distance(container.begin(),iter);
		return index;
	}
	else {
		throw ErrorContainerException();
	}
};

#endif //EX00_EASYFIND_HPP