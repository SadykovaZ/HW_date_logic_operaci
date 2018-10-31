#include"date_.h"
void main()
{
	date_ d1(5,6,2018);
	d1.print();
	cout << endl;
	date_ d2;
	d2 = std::move(d1);
	d2.print();
	cout << endl;
	date_ d3;
	d3 = d2;
	d3.print();
	cout << endl;
	date_ d4(5,6,2019);
	//d3 /= d4;
	//d3 -= d4;
	//d3 *= d4;
	//d3 /= d4;
	//d3.print();
	//d4++;
	//cin >> d4;
	++d4;
	cout << d4;
	//d4.print();
	system("pause");
}