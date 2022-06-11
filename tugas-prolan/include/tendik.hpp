#ifndef __TENDIK_HPP__
#define __TENDIK_HPP__

#include <iostream>
#include "include/person.hpp"


class tendik : public person {
private:
	std::string npp;
	std::string unit;

public:
	tendik(std::string id, std::string nama, int dd, int mm, int yy, std::string npp, std::string unit);

	void setNpp(std::string npp);
	std::string getNpp();

	void setUnit(std::string unit);
	std::string getUnit();	
};

#endif
