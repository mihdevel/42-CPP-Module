#include <iostream>
#include <fstream>

std::string ft_replace_all(std::string str, std::string s1, std::string s2)
{
	std::string str_rep;
	std::string befor;
	std::string after;
	size_t pos;

	str_rep = str;
	while ((pos = str_rep.find(s1)) && pos != std::string::npos)
	{
		befor = str_rep.substr(0, pos);
		after = str_rep.substr(pos + s1.length());
		str_rep = befor;
		str_rep.append(s2 + after);
	}
	return (str_rep);
}

int main(std::int32_t ac, char* av[])
{
	std::string line;
	std::string str_replace;
	size_t pos;

	if (ac != 4)
	{
		std::cout << "Error: need only 3 arguments" << std::endl;
		exit(1);
	}

	std::string filename = static_cast<std::string>(av[1]);
	std::ifstream ifs(filename);
	if (!ifs.is_open()) {
		std::cout << "Error: failed to open file " << filename << std::endl;
		exit(1);
	}

	std::ofstream ofs(filename + ".replace");
	if (!ofs.is_open()) {
		std::cout << "Error: failed to open file " << filename << ".replace" <<
		std::endl;
		exit(1);
	}

	while (std::getline(ifs, line))
	{
		std::string s1 = static_cast<std::string>(av[2]);
		std::string s2 = static_cast<std::string>(av[3]);

		pos = line.find(s1);
		if (pos != std::string::npos)
			str_replace = ft_replace_all(line, s1, s2);
		else
			str_replace = line;
		ofs << str_replace;
		if (!ifs.eof())
			ofs << "\n";
	}
	ifs.close();
	ofs.close();
	return (0);
}
