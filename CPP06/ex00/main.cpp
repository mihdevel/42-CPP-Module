#include "Conversion.hpp"

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cout << "Error wrong argc" << std::endl;
		return(1);
	}
	Conversion Convers(argv[1]);
	Convers.cast();
	return (0);
}