
#include "replace.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong input" << std::endl;
		return 1;
	}

	//READ INPUT
	std::string filename = av[1];
	std::string str1 = av[2];
	std::string str2 = av[3];

	//OPEN INPUT FILE
	std::ifstream input_file(filename);
	if (!input_file.is_open())
	{
		std::cerr << "Error opening input" << std::endl;
		return 2;
	}

	//OPEN OUTPUT FILE
	std::ofstream output_file("output.txt");
	if (!output_file.is_open())
	{
		std::cerr << "Error opening output";
		return 3;
	}

	std::string line;
	while (std::getline(input_file, line))
	{
		std::string result;
		std::size_t pos = 0;
		while (true)
		{
			std::size_t found = line.find(str1, pos);
			if (found == std::string::npos)
			{
				result += line.substr(pos);
				break;
			}
			result += line.substr(pos, found - pos);
			result += str2;
			pos = found + str1.length();
		}
		output_file << result << std::endl;
	}
	input_file.close();
	output_file.close();
	return 0;
}
