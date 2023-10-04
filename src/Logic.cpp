#include "Logic.hpp"

Logic::Logic()
{
	File file(DICTIONARY_PATH);
	_words = file.readFile();
}

void Logic::start()
{
	_setupDifficulty();
	_removeWordsNotEqualsMaxWord();
	_createWord();
	//_word.shrink_to_fit();
	//_guessedLetters.resize(_words.size());
	_setGuessedLetters();
}

void Logic::reset()
{
}

int Logic::run(std::string letter)
{
	/*if (_word == _guessedLetters)
		return WON;
	if (_maxMisses == 0) return LOSS;*/

	if (_isInWord(letter))
	{
		if (_word == _guessedLetters)
			return WON;
	}
	else
	{
		_maxMisses--;
		if (_maxMisses == 0)
			return LOSS;
	}
	return CONTINUE;
}

void Logic::setDifficulty(int difficulty)
{
	_difficulty = difficulty;
	_setupDifficulty();
	_removeWordsNotEqualsMaxWord();
	_createWord();
	_setGuessedLetters();
}

int Logic::getMaxMisses()
{
	return _maxMisses;
}

std::string Logic::getWord()
{
	return _word;
}

std::string Logic::getGuessedLetters()
{
	/*for(int i=0;i<_guessedLetters.size();i++){
		std::string c=_guessedLetters.substr(i,1);
		_guessedLetters.replace(i,1,c);
	}
	std::cout<<_guessedLetters.c_str();*/
	return _guessedLetters;
}

void Logic::_initialize()
{
	_setupDifficulty();
	_removeWordsNotEqualsMaxWord();
	_createWord();
	_word.shrink_to_fit();
	_guessedLetters.resize(_words.size());
	_setGuessedLetters();
}

bool Logic::_isInWord(std::string letter)
{
	char letterToFind = letter[0];
	int miss = 0;
	for (int i = 0; i < _word.size(); i++)
	{
		if (_word[i] == letterToFind)
		{
			std::string letter = _word.substr(i, 1);
			_guessedLetters.replace(i, 1, letter);
		}
		else
			miss++;
	}
	if (miss == _word.size())
		return false;
	return true;
}

void Logic::_setGuessedLetters()
{
	std::string guessedLetters;
	guessedLetters.reserve(_word.size());
	for (int i = 0; i < _word.length(); i++)
	{
		if (i < guessedLetters.length() && _word[i] == _guessedLetters[i])
		{
			//guessedLetters.replace(i, 1, "*");
			guessedLetters += _guessedLetters[i];
		}
		else
			guessedLetters += "*";
	}
	_guessedLetters = guessedLetters;
}

void Logic::_removeWordsNotEqualsMaxWord()
{
	std::vector<std::string> words;
	for (int i = 0; i < _words.size(); i++)
	{
		if (_words[i].length() == _maxWord)
			words.push_back(_words[i]);
	}
	_filteredWords = words;
}

void Logic::_createWord()
{
	std::cout<<_words.size();
	srand((unsigned int)time(NULL));
	int random = rand() % _filteredWords.size();
	_word = _filteredWords[random];
	for (int i = 0; i < _word.size(); i++)
	{
		std::string c(1, toupper(_word[i]));
		_word.replace(i, 1, c);
	}
}

void Logic::_setupDifficulty()
{
	std::vector<int> missValues = {8, 5, 3};
	std::vector<int> maxLetterValues = {3, 4, 5};
	switch (_difficulty)
	{
	case EASY:
		_maxMisses = missValues[EASY];
		_maxWord = maxLetterValues[EASY];
		break;
	case MEDIUM:
		_maxMisses = missValues[MEDIUM];
		_maxWord = maxLetterValues[MEDIUM];
		break;
	case HARD:
		_maxMisses = missValues[HARD];
		_maxWord = maxLetterValues[HARD];
		break;
	default:
		_maxMisses = missValues[EASY];
		_maxWord = maxLetterValues[EASY];
		break;
	}
}