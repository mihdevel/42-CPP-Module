#ifndef EX01_SPAN_HPP
# define EX01_SPAN_HPP

#include <vector>

class Span {
private:
	unsigned int _N;
	unsigned int _checkN;
public:
	std::vector<int> my_array;
	Span(int N);
	Span(const Span &value);
	Span &operator=(const Span &value);
	unsigned int getN() const;
	virtual ~Span();

	void	addNumber(int number);
	int		shortestSpan(void);
	int		longestSpan(void);

	class SizeException : public std::exception {
		virtual const char* what() const throw ();
	};

	class SmallArrayException : public std::exception {
		virtual const char* what() const throw ();
	};

	template <typename Iterator>
	void	addNumber(Iterator begin, Iterator end) {
		if (end - begin > this->_N)
			throw SizeException();
		else {
			this->_checkN = std::distance(begin, end);
			my_array.assign(begin, end);
		}
	}
};

#endif //EX01_SPAN_HPP