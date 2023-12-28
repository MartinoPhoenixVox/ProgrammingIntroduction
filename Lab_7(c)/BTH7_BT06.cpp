#include <iostream>
#include <iomanip>
using namespace std;
//

void input(int &a, int &b)
{
	do {
		cout << "Nhap 2 so nguyen: ";
		cin >> a >> b;
		if (a != int(a) || b != int(b))
			cout << "Nhap gia tri sai. Nhap lai.\n";
	} while (a != int(a) || b != int(b));
}
void input2(int &a)
{
	do {
		cin >> a;
		if (a != int(a) || a < 1 || a > 4)
			cout << "Nhap gia tri sai. Nhap lai.\n";
	} while (a != int(a) || a < 1 || a > 4);
}
int cong(int &a, int &b)
{
	int tong;
	return tong = a + b;
}
int tru(int &a, int &b)
{
	int hieu;
	return hieu = a - b;
}
int nhan(int &a, int &b)
{
	int tich;
	return tich = a * b;
}
double chia(int &a, int &b)
{
	double thuong;
		return thuong = static_cast<double>(a) / static_cast<double>(b);
}
void menu(int &a, int&b)
{
	char tiepTuc;
	int chon;
	do {
		cout << "1. Cong\n2. Tru\n3.Nhan\n4.Chia\n\n";
		input(a, b);
		cout << "Chon (1 - 4): ";
		input2(chon);
		cout << endl;
		switch (chon)
		{
		case 1:
			cout << a << " + " << b << " = " << cong(a, b) << "\n\n";
			break;
		case 2:
			cout << a << " - " << b << " = " << tru(a, b) << "\n\n";
			break;
		case 3:
			cout << a << " * " << b << " = " << nhan(a, b) << "\n\n";
			break;
		case 4:
			if (b == 0)
				cout << "Loi chia 0.\n\n";
			else
				cout << a << " / " << b << " = " << fixed << setprecision(3)  << chia(a, b) << "\n\n";
			break;
		}
		cout << "Tiep tuc (C/K): ";
		cin >> tiepTuc;
	} while (tiepTuc == 'c' || tiepTuc == 'C');
}

int main()
{
	int a, b;
	menu(a, b);
	return 0;
}