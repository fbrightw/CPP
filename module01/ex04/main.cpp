#include "FileDealing.hpp"

int main(int argc, char **argv)
{
	std::ifstream file;
	if (argc != 1)
		std::cout << "Wrong number of arguments" << std::endl;
	else
	{
		file.open(argv[0]);
		if (!file.is_open())
			std::cout << "File corruption" << std::endl;
		else
		{
			FileDealing DoSmth = FileDealing("I", "bla", "text.txt");
			DoSmth.Replace();
		}
	}
}