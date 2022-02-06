#include "PhoneBook.hpp"

void add_book(Contact book[]) {
	int static i;

	if (i == 8)
		i = 0;
	book[i].add(i + 1);
	i++;
}

void search(Contact book[]) {
	std::string input;
	int         index;
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|Index     |First Name|Last Name |Nick Name |" << std::endl;
	for (int j = 0; j < 8; j++)
		book[j].print_data();
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	std::cout << "Enter index:";
	std::cin >> input;
	std::cin.get();
	index = std::atoi(input.c_str());
	if (index < 1 || index > 9 || !book[index - 1].print())
		std::cout << "invalid index\n" << std::endl;
}


int main(void)
{
	std::string input;
	Phonebook phonebook;

	while (true)
	{
		std::cout << "Please enter the comand ADD or SEARCH or EXIT : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
		if (!input.compare("ADD"))
			add_book(phonebook.book);
		else if (!input.compare("SEARCH"))
			search(phonebook.book);
		else if (!input.compare("EXIT"))
			return (0);
	}
}