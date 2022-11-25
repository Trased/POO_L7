#include "data.h"

Data::Data(int an, int luna, int zi )
{
	this->an = an;
	this->luna = luna;
	this->zi = zi;
}
Data::Data()
{
	an = 0;
	luna = 0;
	zi = 0;
}
int Data::getAn()
{
	return an;
}
int Data::getZi()
{
	return zi;
}
int Data::getLuna()
{
	return luna;
}
void Data::setAn(int an)
{
	this->an = an;
}
void Data::setZi(int zi)
{
	this->zi = zi;
}
void Data::setLuna(int luna)
{
	this->luna = luna;
}