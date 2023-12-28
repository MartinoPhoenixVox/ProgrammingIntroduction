//a.	Xac dinh muc dich: dien tich hinh chu nhat
//		Du lieu se nhan: chieu dai, chieu rong
//		Kieu double
//		Thuat giai:	
//					dien tich = chieu dai * chieu rong
//b.	Xac dinh muc dich: chu vi hinh chu nhat
//		Du lieu se nhan: chieu dai, chieu rong
//		Kieu double
//		Thuat giai:	
//					chu vi = (chieu dai + chieu rong) * 2
#include <iostream>
#include <iomanip>
using namespace std;

double S(double a, double b)
{
	double S;
	return S = a * b;
}

double P(double a, double b)
{
	double P;
	return P = (a + b) * 2;
}

int main()
{
	double a, b;
	do {
		cout << "Nhap chieu dai va chieu rong hinh chu nhat: ";
		cin >> a >> b;
		if (a <= 0 || b <= 0)
			cout << "Nhap sai. Nhap lai.\n";
	} while (a <= 0 || b <= 0);
	//a.
	cout << "Dien tich hinh chu nhat tren bang " << fixed << setprecision(2)  << S(a, b) << " don vi.\n";
	//b.
	cout << "Chu vi hinh chu nhat tren bang " << fixed << setprecision(2) << P(a, b) << " don vi.\n";
	return 0;
}