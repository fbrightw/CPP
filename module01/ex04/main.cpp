#include "FileDealing.hpp"

int main(int argc, char **argv)
{
	std::ifstream file;
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (-1);
	}
	else
	{
		file.open(argv[1]);
		if (!file.is_open()) {
			std::cout << "File corruption" << std::endl;
			return (-1);
		}
		else
		{
			FileDealing DoSmth = FileDealing(argv[2], argv[3], argv[1]);
			if (!DoSmth.open())
				file.close();
		}
	}
}
