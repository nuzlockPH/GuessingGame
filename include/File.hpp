#ifndef FILE_H
#define FILE_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#define DICTIONARY_PATH "res/dictionary.txt"

class File
{
	std::string _filename;
	std::vector<std::string> _words;
  public:
	File();
	File(const std::string &);
	std::vector<std::string> readFile();
	void writeFile(std::string);
};
#endif