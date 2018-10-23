#include "date_.h"
date_::date_()
{
	this->day = 1;
	this->month = 1;
	this->year = 1900;
}
date_::date_(int day, int month, int year)
{
	setDay(day);
	setMonth(month);
	setYear(year);
}
void date_::setDay(int day)
{
	if (day < 1 || day>31)
		this->day = 1;
	else
		this->day = day;
}
void date_::setMonth(int month)
{
	if (month < 1 || month>12)
		this->month = 1;
	else
		this->month = month;
}
void date_::setYear(int year)
{
	if (year < 1900)
		this->year = 1900;
	else
		this->year = year;
}
void date_::print()
{
	if (day < 10)
		cout << 0;
	cout << day << ".";
	if (month<10)
		cout << 0;
	cout << month << "." << year;
}

bool operator&&(const date_ & d, const date_ & m)
{
	return d.getDay()==1 && m.getMonth()==1 ;
}

bool operator||(const date_ & d, const date_ & m)
{
	return d.getDay() == 1 || m.getMonth() == 1;
}

bool operator!=(const date_ & d, const date_ & m)
{
	return d.getDay()!=1;
}
