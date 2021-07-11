#include "FileDealing.hpp"

FileDealing::FileDealing(std::string str1, std::string str2, std::string fileName)
{
	_str1 = str1;
	_str2 = str2;
	_fileName = fileName;
}

void	FileDealing::output()
{
	std::ofstream	_output;
	_output.open("text.replace");
	_output << _text;
	_output.close();
}

void	FileDealing::Replace()
{
	std::string		line;
	std::ifstream	_input;

	_input.open(_fileName, std::ios::in);
	if (_input.is_open()) {
		while (!_input.eof()) {
			_input >> line;
			if (_input.peek() == '\n') {
				_text += line + "\n";
				_text.replace(_text.find(_str1), _str1.length(), _str2);
				line.clear();
			}
			else if (_input.peek() == ' ') {
				_text += line + " ";
				line.clear();
			}
			else
				_text += line;
		}
		_input.close();
		FileDealing::output();
	}
	else
		std::cout << "Unable to open file" << std::endl;
}
