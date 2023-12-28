//Muc dich: tinh luy thua
//Nhap: x (so thuc), y (so nguyen)
//Kieu double
//Thuat giai:
//				Neu y >= 0 thi luy thua = x * x * ... * x (y lan)
//				Nguoc lai thi luy thua = 1 / (x * x * ... * x) (-y lan)
#include <iostream>
#include <iomanip>
using namespace std;

double lT(double x, int y)
{
	double lT = 1.0;
	if (y >= 0)
		for (int i = 1; i <= y; i++)
			lT *= x;
	else
		for (int i = 1; i <= -y; i++)
			lT /= x;
	return lT;
}

int main()
{
	double x;
	int y;
	cout << "Nhap co so x: ";
	cin >> x;
	cout << "Nhap so mu y: ";
	cin >> y;
	cout << "Luy thua cua " << fixed << setprecision(3) << x << " mu " << y << " bang " << fixed << setprecision(3) << lT(x, y) << endl;
	return 0;
}