#include <iostream>
#include <fstream>
#include <string>

std::size_t	getstring(std::string line, std::string string)
{
	std::size_t	ret = line.find(string);

	std::cout << "found at: " << ret << "\n";
	if (ret > line.length())
		ret = line.length();
	return (ret);
}

int	replace_occ(std::string filename, std::string base, std::string replacement)
{
	std::ifstream	input_file(filename.c_str());

	if (!input_file) {
		std::cerr << "Error opening file!\n";
		return (1);
	}

	std::string		newfile = "Copy of " + filename;
	std::ofstream	output_file(newfile.c_str());

	std::string	line;
	std::string	temp;
	std::size_t	found = 0;
	std::size_t	i;

	while (getline(input_file, line))
	{
		temp = "";
		i = 0;
		if (base.empty())
			temp += replacement;
		if (!line.empty())
		{
			while ((found = line.find(base, i)) != std::string::npos)
			{
				temp += line.substr(i, found - i + (base.empty() ? 1 : 0));
				temp += replacement;
				i = found + base.length();
				if (base.empty())
					++i;
				if (i >= line.length())
					break ;
			}
			temp += line.substr(i, std::string::npos);
			/* found = getstring(line, base);
			std::cout << found << "\n";
			if (found < line.length())
			{
				temp = line.substr(0, found);
				temp += replacement;
				temp += line.substr(base.length() + found, line.length());
			}
			else
				temp = line; */
		}
		output_file << temp << std::endl;
	}
	input_file.close();
	output_file.close();
	return (0);
}

// Replace every occurence of s1 with s2 in the file
int	main(int argc, char **argv)
{
	if (argc < 4)
	{
		std::cout << "intended usage: [Filename] [string to replace] [string to replace with]\n";
		return (0);
	}
	std::string		filename(argv[1]);
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);

	return (replace_occ(filename, s1, s2));
}