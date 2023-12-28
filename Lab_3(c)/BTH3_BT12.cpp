/*Chuong trinh giai va bien luan phuong trinh bac nhat: ax + b = 0
Date: Nov-13, 2021*/
#include <iostream>
using namespace std;

int main()
{
	double a, b, x;
	cout << "Giai va bien luan phuong trinh ax = b = 0\nNhap lan luot a va b: ";
	cin >> a >> b;
	if (a == 0 && b == 0)
		cout << "Phuong trinh vo so nghiem.\n";
	else
		if (a != 0 && b == 0)
			cout << "Phuong trinh vo nghiem.\n";
		else
		{
			x = -b / a;
			cout << "Ta co x = -b / a. => x =" << x << endl;
		}
}