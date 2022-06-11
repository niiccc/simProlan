#include <iostream>
#include "include/tendik.hpp"

tendik::tendik(std::string id, std::string nama, int dd, int mm, int yy, std::string npp, std::string unit)
		: person(id, nama, dd, mm, yy), npp(npp), unit(unit)
{
}

void tendik::setNpp(std::string npp)
{
	this->npp = npp;
}

std::string tendik::getNpp()
{
	return this->npp;
}

void tendik::setUnit(std::string unit)
{
	this->unit = unit;
}

std::string tendik::getUnit()
{
	return this->unit;
}


