#include "date_.h"

date_::date_(int day, int month, int year)
{
	setDay(day);
	setMonth(month);
	setYear(year);
}
void date_::setDay(int day)
{
	this->day = new int(day);
	if (day < 1 || day>31)
		day = 1;
	else
		day = day;
}
void date_::setMonth(int month)
{
	this->month = new int(month);
	if (month < 1 || month>12)
		month = 1;
	else
		month = month;
}
void date_::setYear(int year)
{
	this->year = new int(year);
	if (year < 1970)
		year = 1970;
	else
		year = year;
}
void date_::print() const
{
	if (*day < 10)
		cout << 0;
	cout << *day << ".";
	if (*month < 10)
		cout << 0;
	cout << *month << "." << *year;
}

date_::date_(const date_ & obj)
{
	this->day = new int(*obj.day);
	this->month = new int(*obj.month);
	this->year = new int(*obj.year);
}
date_ & date_::operator=(const date_ & obj)
{
	if (this == &obj) return *this;
	this->~date_();
	this->day = new int(*obj.day);
	this->month = new int(*obj.month);
	this->year = new int(*obj.year);
	return *this;
}
date_::date_(date_ && obj)
{
	this->day = obj.day;
	this->month = obj.month;
	this->year = obj.year;

	obj.day = nullptr;
	obj.month = nullptr;
	obj.year = nullptr;

}
date_ &  date_::operator=(date_ && obj)
{
	this->~date_();

	this->day = obj.day;
	this->month = obj.month;
	this->year = obj.year;

	obj.day = nullptr;
	obj.month = nullptr;
	obj.year = nullptr;

	return *this;

}

date_ & date_::operator+=(const date_ & obj)
{
	*this->day += *obj.day;
	*this->month += *obj.month;
	*this->year += *obj.year;
	if (*this->day > 31)
	{
		*this->day = 1;
	}
	if (*this->month > 12)
	{
		*this->month = 1;
	}
	return *this;
}

date_ & date_::operator-=(const date_ & obj)
{
	*this->day -= *obj.day;
	*this->month -= *obj.month;
	*this->year -= *obj.year;
	if (*this->day < 1)
	{
		*this->day = 1;
	}
	if (*this->month < 1)
	{
		*this->month = 1;
	}
	if (*this->year < 1970)
	{
		*this->year = 1970;
	}
	return *this;
}

date_ & date_::operator*=(const date_ & obj)
{
	*this->day *= *obj.day;
	*this->month *= *obj.month;
	*this->year *= *obj.year;
	if (*this->day > 31)
	{
		*this->day = 1;
	}
	if (*this->month > 12)
	{
		*this->month = 1;
	}
	return *this;
}

date_ & date_::operator/=(const date_ & obj)
{
	*this->day /= *obj.day;
	*this->month /= *obj.month;
	*this->year /= *obj.year;
	if (*this->day < 1)
	{
		*this->day = 1;
	}
	if (*this->month < 1)
	{
		*this->month = 1;
	}
	if (*this->year < 1970)
	{
		*this->year = 1970;
	}
	return *this;
}

date_ & date_::operator+=(int number)
{
	*this->day += number;
	*this->month += number;
	*this->year += number;
	if (*this->day > 31)
	{
		*this->day = 1;
	}
	if (*this->month > 12)
	{
		*this->month = 1;
	}
	return *this;
}

date_ & date_::operator-=(int number)
{
	*this->day -= number;
	*this->month -= number;
	*this->year -= number;
	if (*this->day < 1)
	{
		*this->day = 1;
	}
	if (*this->month < 1)
	{
		*this->month = 1;
	}
	if (*this->year < 1970)
	{
		*this->year = 1970;
	}
	return *this;
}

date_ & date_::operator*=(int number)
{
	*this->day *= number;
	*this->month *= number;
	*this->year *= number;
	if (*this->day > 31)
	{
		*this->day = 1;
	}
	if (*this->month > 12)
	{
		*this->month = 1;
	}
	return *this;
}

date_ & date_::operator/=(int number)
{
	*this->day /= number;
	*this->month /= number;
	*this->year /= number;
	if (*this->day < 1)
	{
		*this->day = 1;
	}
	if (*this->month < 1)
	{
		*this->month = 1;
	}
	if (*this->year < 1970)
	{
		*this->year = 1970;
	}
	return *this;
}
date_ & date_::operator++()
{
	*this->day++;
	*this->month++;
	*this->year++;
	return *this;
}
date_ date_::operator++(int)
{
	date_ tmp;
	*tmp.day = *this->day;
	*this->day++;

	*tmp.month = *this->month;
	*this->month++;

	*tmp.year = *this->year;
	*this->year++;

	return tmp;
}

date_::~date_()
{
	delete day;
	delete month;
	delete year;
}

date_::operator int()
{
	return *this->day;
	return *this->month;
	return *this->year;
}

ostream & operator<<(ostream & os, const date_ & obj)
{
	if (obj.getDay() < 10)
		cout << 0;
	os << obj.getDay() << ".";

	if (obj.getMonth() < 10)
		cout << 0;
	os << obj.getMonth() << ".";

	os << obj.getYear() << endl;
	return os;
}

istream & operator>>(istream & is, date_ & obj)
{
	int n_day;
	int n_month;
	int n_year;
	is >> n_day;
	is >> n_month;
	is >> n_year;
	obj.setDay(n_day);
	obj.setMonth(n_month);
	obj.setYear(n_year);
	return is;
}
bool operator>(const date_ & d, const date_ & m)
{
	return d.getDay() > m.getMonth();
}

bool operator>=(const date_ & d, const date_ & m)
{
	return d.getDay() >= m.getMonth();
}

bool operator<(const date_ & d, const date_ & m)
{
	return d.getDay() < m.getMonth();
}

bool operator<=(const date_ & d, const date_ & m)
{
	return d.getDay() <= m.getMonth();
}

bool operator==(const date_ & d, const date_ & m)
{
	return d.getDay() == m.getMonth();
}

bool operator!=(const date_ & d, const date_ & m)
{
	return d.getDay() != m.getMonth();
}

date_ operator+(const date_ & d, const date_ & d1)
{
	date_ tmp(d.getDay());
	tmp += d1.getDay();
	return tmp;
}

date_ operator+(const date_ & d, int number)
{
	date_ tmp(d.getDay());
	tmp += number;
	return tmp;
}

date_ operator-(const date_ & d, const date_ & d1)
{
	date_ tmp(d.getDay());
	tmp -= d1.getDay();
	return tmp;
}

date_ operator-(const date_ & d, int number)
{
	date_ tmp(d.getDay());
	tmp -= number;
	return tmp;
}

date_ operator*(const date_ & d, const date_ & d1)
{
	date_ tmp(d.getDay());
	tmp *= d1.getDay();
	return tmp;
}

date_ operator*(const date_ & d, int number)
{
	date_ tmp(d.getDay());
	tmp *= number;
	return tmp;
}

date_ operator/(const date_ & d, const date_ & d1)
{
	date_ tmp(d.getDay());
	tmp /= d1.getDay();
	return tmp;
}

date_ operator/(const date_ & d, int number)
{
	date_ tmp(d.getDay());
	tmp /= number;
	return tmp;
}
