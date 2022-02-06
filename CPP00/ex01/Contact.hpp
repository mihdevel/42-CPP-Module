#include "PhoneBook.hpp"

class Contact {
  public:
    int print(void);
    void print_world(std::string str);
    void add(int index);
    void print_data(void);
    Contact(void);

  private:
    std::string  firstName;
    std::string  lastName;
    std::string  nickName;
    std::string  phoneNumber;
    std::string  darkestSecret;
    unsigned     index;
};