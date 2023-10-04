#include "Errors.hpp"

const char *BaseError::what() const noexcept
{
	return "Base Error";
}

FileError::FileError()
{
	std::string errorMsg = "[FILE ERROR]failed to open file";
	_errorMsg = errorMsg;
}

FileError::FileError(std::string msg)
{
	std::string errorMsg = "[FILE ERROR] ";
	errorMsg.append(msg);
	_errorMsg = errorMsg;
}

const char *FileError::what() const noexcept
{
	return _errorMsg.c_str();
}

AllegroError::AllegroError()
{
	std::string errorMsg = "[ALLEGRO ERROR]failed to initialize allegro.";
	_errorMsg = errorMsg;
}

AllegroError::AllegroError(std::string msg)
{
	std::string errorMsg = "[ALLEGRO ERROR] ";
	errorMsg.append(msg);
	_errorMsg = errorMsg;
}

const char *AllegroError::what() const noexcept
{
	return _errorMsg.c_str();
}

NullError::NullError()
{
	std::string errorMsg = "[NULL ERROR]accessing a null object.";
	_errorMsg = errorMsg;
}

NullError::NullError(std::string msg)
{
	std::string errorMsg = "[NULL ERROR] ";
	errorMsg.append(msg);
	_errorMsg=errorMsg;
}

const char *NullError::what() const noexcept
{
	return _errorMsg.c_str();
}