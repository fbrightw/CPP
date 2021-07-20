#ifndef FILEDEALING_HPP
# define FILEDEALING_HPP
#include <iostream>
#include <fstream>

class FileDealing
{
public:

	FileDealing(std::string str1, std::string str2, std::string fileName);
	int		open();

private:

	std::string	_str1;
	std::string	_str2;
	std::string	_fileName;
	std::string	_text;
	int		output();
	int		replace(std::string *line);

};
#endif