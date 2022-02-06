#include <iomanip>
#include <string>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    Base *tmp;
    srand(time(NULL));
	int first = rand();
    int second = rand();
    int third = rand();
    if (first >= second && first >= third)
        return (tmp = new A);
    if (second >= first && second >= third)
        return (tmp = new B);
    return (tmp = new C);
}

void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
        std::cout << "This is A class" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "This is B class" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "This is C class" << std::endl;
    else
        std::cout << "wrong pointer" << std::endl;
}

void identify(Base& p)
{
    int flag = 0;
    try
    {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "This is A class" << std::endl;
        flag = 1;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "This is B class" << std::endl;
        flag = 1;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "This is C class" << std::endl;
        flag = 1;
    }
    catch(const std::exception& e)
    {
    }
    if(!flag)
        std::cout << "wrong reference" << std::endl;
}

int main()
{
    Base *base1 = generate();
    Base &base2 = *base1;
    identify(base1);
    identify(base2);
    identify(NULL);
    identify(0);

    return(0);
}