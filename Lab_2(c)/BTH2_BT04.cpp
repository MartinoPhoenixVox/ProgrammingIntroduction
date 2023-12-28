/*Chuong trinh yeu cau nhap vao ban kinh r, tinh va in ra dien tich (PI*r^2) va chu vi cua hinh tron (2*PI*r). Dinh nghia hang so PI de luu gia tri PI ~ 3.141593.
Date: Nov-2, 2021*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double PI = 3.141593;
	double r = 0.0, S = 0.0, P = 0.0;
	cout << "Nhap r: ";
	cin >> r;
	S = PI * r * r;
	P = 2 * PI * r;
	cout << fixed << setprecision(10) << "Dien tich hinh tron bang " << S << endl
		<< fixed << setprecision(10) << "Chu vi hinh tron bang " << P << endl;
	return 0;
}