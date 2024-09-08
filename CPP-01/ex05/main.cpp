#include "Harl.hpp"

int main(int argc, char const *argv[])
{
	Harl harl;

	if (argc != 2)
	{
		std::cerr << "Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
		return 1;
	}
	harl.complain(argv[1]);
	return 0;
}
