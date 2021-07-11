#ifndef FILEDEALING_HPP
# define FILEDEALING_HPP
#include <iostream>
#include <fstream>

class FileDealing
{
public:

	FileDealing(std::string str1, std::string str2, std::string fileName);
	void		Replace();

private:

	std::string	_str1;
	std::string	_str2;
	std::string	_fileName;
	std::string	_text;
	void		output();

};
#endif