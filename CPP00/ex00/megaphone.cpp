# include <iostream>

int main(int argc, char **argv)
{
	size_t i;
	size_t j;
	size_t len;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		i = 0;
		while (++i < (size_t)argc)
		{
			len = std::strlen(argv[i]);
			j = -1;
			while(++j < len)
				std::cout << static_cast<char>(std::toupper(argv[i][j]));
		}
		std::cout << std::endl;
	}
}