#ifndef EX02_MUTANTSTACK_HPP
# define EX02_MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename std::stack<T>::container_type::iterator 				iterator;
		typedef typename std::stack<T>::container_type::const_iterator 			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		MutantStack(): std::stack<T>() {}
		MutantStack(const MutantStack<T>& value):std::stack<T>(value) {}
		MutantStack<T> &operator=(const MutantStack<T> &value) {
			this->c = value.c;
			return (*this);
		}
		~MutantStack() {}

		iterator begin(void) {
			return (std::stack<T>::c.begin());
		}

		iterator end(void) {
			return (std::stack<T>::c.end());
		}

		const_iterator	cbegin()
		{
			return (std::stack<T>::c.cbegin());
		}

		const_iterator	cend()
		{
			return (std::stack<T>::c.cend());
		}

		reverse_iterator	rbegin()
		{
			return (std::stack<T>::c.rbegin());
		}

		reverse_iterator	rend()
		{
			return (std::stack<T>::c.rend());
		}

		const_reverse_iterator	crbegin()
		{
			return (std::stack<T>::c.crbegin());
		}

		const_reverse_iterator	crend()
		{
			return (std::stack<T>::c.crend());
		}
};

#endif //EX02_MUTANTSTACK_HPP