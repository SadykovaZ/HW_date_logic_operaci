#include"date_.h"
void main()
{
	date_ d1(5,1,2018);
	d1.print();
	cout << endl;
	if (d1.getDay()> d1.getMonth()) cout << true;
	cout << endl;
	if (d1.getDay() >= d1.getMonth()) cout << true;
	cout << endl;
	if (d1.getDay() < d1.getMonth()) cout << true;
	cout << endl;
	if (d1.getDay() <= d1.getMonth()) cout << true;
	cout << endl;
	if (d1.getDay() == d1.getMonth()) cout << true;
	cout << endl;
	if (d1.getDay() != d1.getMonth()) cout << true;
	cout << endl;
	system("pause");
}