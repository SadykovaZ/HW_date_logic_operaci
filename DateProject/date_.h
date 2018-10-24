#pragma once
#include <iostream>
using namespace std;

class date_
{
	int day;
	int month;
	int year;
public:
	date_();
	date_(int day, int month, int year);
	//date_(string dt);"01.01.2018"
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);	
	int getDay() const { return day; }
	int getMonth() const{ return month; }
	int getYear() const { return year; }
	void print();
	
};
bool operator>(const date_&d, const date_&m);
bool operator>= (const date_&d, const date_&m);
bool operator<(const date_&d, const date_&m);
bool operator<=(const date_&d, const date_&m);
bool operator==(const date_&d, const date_&m);
bool operator!=(const date_&d, const date_&m);
