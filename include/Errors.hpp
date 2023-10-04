#include <exception>
#include <string>
 
 #ifndef ERRORS_H
 #define ERRORS_H 
class BaseError:public std::exception{
	public:
	virtual const char* what()const noexcept;
};

class FileError:public BaseError{
	std::string _errorMsg;
	
	public:
	FileError();
	FileError(std::string);
	const char* what()const noexcept override;
};

class AllegroError:public BaseError{
	std::string _errorMsg;
	
	public:
	AllegroError();
	AllegroError(std::string);
	const char* what()const noexcept override;
};

class NullError:public BaseError{
	std::string _errorMsg;
	
	public:
	NullError();
	NullError(std::string);
	const char* what()const noexcept override;
};

#endif