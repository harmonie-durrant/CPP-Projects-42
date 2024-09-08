#include <iostream>
#include <fstream>
#include <string>

int replace(std::string filename, std::string s1, std::string s2)
{
    int s1len = s1.length();
    std::size_t found = 0;
    std::string line;

    std::ifstream my_file(filename.c_str());
    if (!my_file.good())
    {
        std::cerr << "Error: Cannot open file" << std::endl;
        return (1);
    }
    if (my_file.peek() == std::ifstream::traits_type::eof())
    {
        std::cerr << "Error: File is empty" << std::endl;
        return (1);
    }
    std::ofstream tmp_file(filename.append(".replace").data());
    while (my_file.good() && tmp_file.good())
    {
        std::getline(my_file, line);
        found = line.find(s1, 0);
        while (found != std::string::npos)
        {
            line.erase(found, s1len);
            line.insert(found, s2);
            found = line.find(s1, found);
        }
        tmp_file << line;
        if (my_file.eof())
            break;
        tmp_file << std::endl;
    }
    my_file.close();
    tmp_file.close();
    return (0);
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Error: Usage: ./replace <filename> <string 1> <string 2>" << std::endl;
        return (1);
    }
    std::string filename(av[1]);
	std::string s1(av[2]);
	std::string s2(av[3]);
    return (replace(filename, s1, s2));
}
