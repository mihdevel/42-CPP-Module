#include "PhoneBook.hpp"

Contact::Contact(void)
{
  this->index = 0;
}

int Contact::print(void) {
    if (this->index == 0)
      return (0);
    std::cout << "First name: " << this->firstName << std::endl;
    std::cout << "Last name: " << this->lastName << std::endl;
    std::cout << "Nick name: " << this->nickName << std::endl;
    std::cout << "Phone number: " << this->phoneNumber << std::endl;
    std::cout << "Darkest secret: " << this->darkestSecret << std::endl;
    return (1);
  }

void Contact::print_world(std::string str) {
  int i = 0;
  while (str[i] && i < 9)
    std::cout << str[i++];
  for (int j = i; j < 9; j++)
    std::cout << ' ';
  if (i >= 9)
    std::cout << ".";
  else
    std::cout << " ";
}

void Contact::print_data(void) {
  if (this->index == 0)
    return;
  std::cout << "|";
  std::cout << static_cast<char>(this->index + 48) << "         ";
  std::cout << "|";
  print_world(this->firstName);
  std::cout << "|";
  print_world(this->lastName);
  std::cout << "|";
  print_world(this->nickName);
  std::cout << "|" << std::endl;
}

void Contact::add(int index) {
  std::cout << "Enter your first name :";
  std::getline(std::cin, this->firstName);
  std::cout << "Enter your last name :";
  std::getline(std::cin, this->lastName);
  std::cout << "Enter your nick name :";
  std::getline(std::cin, this->nickName);
  std::cout << "Enter your phone number :";
  std::getline(std::cin, this->phoneNumber);
  std::cout << "Enter your darkest secret :";
  std::getline(std::cin, this->darkestSecret);
  this->index = index;
}
