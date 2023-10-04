#include "File.hpp"
#include "Errors.hpp"

std::vector<std::string> File::readFile()
{
	std::ifstream file(_filename);
	if (file.is_open())
	{
		std::string word;
		while (file >> word)
			_words.push_back(word);
		file.close();
		return _words;
	}
	std::string errorMsg="failed to open file ";
	errorMsg.append(_filename);
	throw FileError(errorMsg);
}

void File::writeFile(std::string text)
{
	std::ofstream outFile(_filename,std::ios::app);
	if (outFile.is_open())
	{
		outFile << text.c_str() << std::endl;
		outFile.close();
		return;
	}
	std::string errorMsg="failed to open file ";
	errorMsg.append(_filename);
	throw FileError(errorMsg);
}

File::File(const std::string &filename)
{
	_filename = filename;
}