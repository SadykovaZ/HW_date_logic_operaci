#pragma once
#include <iostream>
using namespace std;

class date_
{
	int *day;
	int *month;
	int *year;
public:
	
	date_(int day = 1, int month = 1, int year = 1970);
	
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	
	int getDay() const { return *day; }
	int getMonth() const { return *month; }
	int getYear() const { return *year; }
	
	void print() const;
	//copy
	date_(const date_ &obj);
	//присваивание
	date_ &operator=(const date_&obj);
	//перемещение
	date_(date_&&obj);
	date_ & operator=(date_&&obj);

	date_&operator+=(const date_&obj);
	date_&operator-=(const date_&obj);
	date_&operator*=(const date_&obj);
	date_&operator/=(const date_&obj);
	date_ &operator+=(int number);
	date_ &operator-=(int number);
	date_ &operator*=(int number);
	date_ &operator/=(int number);
	date_ &operator++();
	date_ operator++(int);
	
	~date_();
	operator int();
};
ostream & operator<<(ostream& os, const date_ & obj);
istream & operator>>(istream & is, date_ & obj);
bool operator>(const date_&d, const date_&m);
bool operator>= (const date_&d, const date_&m);
bool operator<(const date_&d, const date_&m);
bool operator<=(const date_&d, const date_&m);
bool operator==(const date_&d, const date_&m);
bool operator!=(const date_&d, const date_&m);

date_ operator+(const date_&d, const date_&d1);
date_ operator+(const date_&d, int number);

date_ operator-(const date_&d, const date_&d1);
date_ operator-(const date_&d, int number);

date_ operator*(const date_&d, const date_&d1);
date_ operator*(const date_&d, int number);

date_ operator/(const date_&d, const date_&d1);
date_ operator/(const date_&d, int number);
