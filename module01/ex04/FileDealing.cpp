#include "FileDealing.hpp"

FileDealing::FileDealing(std::string str1, std::string str2, std::string fileName)
{
	_str1 = str1;
	_str2 = str2;
	_fileName = fileName;
}

int	FileDealing::output()
{
	std::ofstream	_output;
	_output.open("text.replace");
	if (!_output.is_open()) {
		std::cout << "There is error in opening replace file";
		return (0);
	}
	else {
		_output << _text;
		_output.close();
		return (1);
	}
}

int	FileDealing::replace(std::string *line)
{
	int i = 0;
	while (i < line->length())
	{
		int index = line->find(_str1);
		if (index != std::string::npos) {
			line->erase(index, _str1.length());
			line->insert(index, _str2);
			i += index + _str2.length();
		}
		else
			return (0);
	}
	return (1);
}

int	FileDealing::open()
{
	std::string		line;
	std::ifstream	_input;

	_input.open(_fileName, std::ios::in);
	if (_input.is_open()) {
		while (!_input.eof()) {
			std::getline(_input, line);
			FileDealing::replace(&line);
			_text += line + "\n";
			line.clear();
		}
		_input.close();
		if (!FileDealing::output())
			return (0);
		return (1);
	}
	else
	{
		std::cout << "Unable to open file" << std::endl;
		return (0);
	}
}
