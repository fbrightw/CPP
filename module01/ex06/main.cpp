#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen	karen;
	int		level;

	std::string msg;
	(argc != 2) ? ( msg = "no") : (msg = argv[1]);
	(!msg.compare("no")) ? (level = 0) :
	((!msg.compare("DEBUG")) ? (level = 1) \
	: (!msg.compare("INFO") ? (level = 2) \
	: (!msg.compare("WARNING") ? (level = 3) \
	: (!msg.compare("WARNING") ? (level = 4) : (level = 0)))));
	karen.complain(level);
}
