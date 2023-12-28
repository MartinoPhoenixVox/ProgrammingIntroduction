/*Chuong trinh yeu cau nhap vao goc x theo do, sau do in ra sin, cos, tan cua x
Date: Nov-4, 2021*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x = 0.0, sinx = 0.0, cosx = 0.0, tanx = 0.0;
	const double PI = 3.14;
	cout << "Nhap vao goc x theo do: ";
	cin >> x;
	x = x * PI / 180;
	sinx = sin(x);
	cosx = cos(x);
	tanx = tan(x);
	cout << "Vay sin, cos, tan cua x lan luot la: " << sinx << ", " << cosx << ", " << tanx << endl;
	return 0;
}