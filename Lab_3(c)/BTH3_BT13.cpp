/*Chuong trinh giai va bien luan phuong trinh bac hai: ax^2 + bx + c = 0
Date: Nov-13, 2021*/
#include <iostream>
using namespace std;

int main()
{
	double a, b, c, x1, x2, delta;
	cout << "Giai va bien luan phuong trinh bac 2: ax^2 + bx + c = 0\nNhap vao lan luot a, b va c: ";
	cin >> a >> b >> c;
	cout << "ta co delta = b^2 -4ac.\n";
	delta = b * b - 4 * a * c;
	if (a == 0)
		// Phuong trinh chuyen sang dang bac nhat bx + c = 0
		if (b == 0 && c == 0)
			cout << "Phuong trinh vo so nghiem.\n";
		else
			if (b != 0 && c == 0)
				cout << "Phuong trinh vo nghiem.\n";
			else
			{
				x1 = -b / c;
				cout << "x = -c / b = " << x1 << endl;
			}
	else
	{
		if (delta == 0)
		{
			x1 = -b / (2 * a);
			cout << "Phuong trinh co nghiem kep x = -b / (2a) = " << x1 << endl;
		}
		else
			if (delta > 0)
			{
				x1 = (-b + sqrt(delta)) / (2 * a);
				x2 = (-b - sqrt(delta)) / (2 * a);
				cout << "Phuong trinh co nghiem kep x = (-b + sqrt(delta)) / (2a) = "
					<< x1 << " hoac x = (-b - sqrt(delta)) / (2a) = " << x2 << endl;
			}
			else
			{
				cout << "delta < 0 => Phuong trinh vo nghiem.\n";
			}
	}
	return 0;
}