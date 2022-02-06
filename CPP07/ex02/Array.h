#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

template <typename T>
class Array {
public:
	T *array;
	unsigned int len;

	Array();
	Array(unsigned int n);
	Array(Array<T> const &value);
	Array &operator=(Array<T> const &value);
	T &operator[](int index);
	T const &operator[](int &index) const;
	unsigned int size(void) const;
	~Array();

	class Exception_border : public std::exception {
		virtual const char *what () const throw(){
			return ("Exeption border");
		};
	};
};

template<typename T>
std::ostream &operator<<(std::ostream & out, Array<T> const &value)
{
	for (unsigned int i = 0; i < value.len; i++)
		out << value[i] << std::endl;
	return (out);
}

#endif //EX02_ARRAY_HPP