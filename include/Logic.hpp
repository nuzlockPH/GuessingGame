#include <File.hpp>
#include <string>
#include <iostream>
#include <vector>
#include <random>
#define EASY 0
#define MEDIUM 1
#define HARD 2
#define WON 3
#define LOSS 4
#define CONTINUE 5

class Logic
{
	std::vector<std::string> _words;
	std::vector<std::string> _filteredWords;
	std::string _word;
	std::string _guessedLetters;
	int _difficulty;
	int _maxMisses;
	int _maxWord;
	
	void _setupDifficulty();
	void _createWord();
	void _setGuessedLetters();
	void _removeWordsNotEqualsMaxWord();
	bool _isInWord(std::string);
	void _initialize();
	public:
	Logic();
	void setDifficulty(int);
	int getMaxMisses();
	std::string getWord();
	std::string getGuessedLetters();
	void start();
	int run(std::string);
	void reset();
};
