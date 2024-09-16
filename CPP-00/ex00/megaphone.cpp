#include <iostream>

int main(int ac, char const **av)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	while (ac > 1 && av && av[++j])
	{
		i = -1;
		while (j > 0 && av[j][++i])
			std::cout << (char)std::toupper(av[j][i]);
	}
	std::cout << std::endl;
	return (0);
}
