#include <iostream>

#include "Errors.hpp"
#include "Start.hpp"
int main(int argc, char *argv[])
{
	try{
		Start start;
		start.run();
	}catch(const BaseError &e){
		std::cout<<e.what();
	}
}