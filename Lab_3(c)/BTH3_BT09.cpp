/*Chuowng trinh co chuc nang nhang nhu may tinh cam tay (su dung switch)
*Date1: Nov-9, 2021
Date2: Nv-13, 2021*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int soNguyen1, soNguyen2;
	char toanTu;
	cout << "Nhap lan luot 2 so nguyen: ";
	cin >> soNguyen1 >> soNguyen2;
	cout << "Nhap toan tu (+, -, *, /): ";
	cin >> toanTu;
	switch (toanTu)
	{
	case '+':
		cout << soNguyen1 << " + " << soNguyen2 << " = " << soNguyen1 + soNguyen2 << endl;
		break;
	case '-':
		cout << soNguyen1 << " - " << soNguyen2 << " = " << soNguyen1 - soNguyen2 << endl;
		break;
	case '*':
		cout << soNguyen1 << " * " << soNguyen2 << " = " << soNguyen1 * soNguyen2 << endl;
		break;
	case '/':
		switch (soNguyen2 >= 0)
		{
		case true:
			cout << soNguyen1 << " / " << soNguyen2 << " = " << fixed << setprecision(2) << soNguyen1 * 1.0 / soNguyen2 << endl;
			break;
		default:
			cout << "Loi chia 0.\n";
		}
		break;
	default:
		cout << "Nhap toan tu sai.\n";
		break;
	}
	return 0;
}
