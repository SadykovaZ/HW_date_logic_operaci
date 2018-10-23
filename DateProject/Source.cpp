#include"date_.h"
void main()
{
	date_ d1(5,1,2018);
	d1.print();
	cout << endl;
	if (d1.getDay() == 1 && d1.getMonth() == 1) cout << true;
	cout << endl;
	if (d1.getDay() == 1 || d1.getMonth() == 1) cout << true;
	cout << endl;
	if (d1.getDay() != 1) cout << true;
	system("pause");
}