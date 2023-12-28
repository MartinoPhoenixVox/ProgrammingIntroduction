/*B1: Xac dinh muc dich: tinh x!
* B2: Du lieu se nhan: x
* B3: Du lieu tra ve: xTich
* B4: Thuat giai:
*					xTich = 1
*					Cho i = 1
*					Lap neu i <= n
*						xTich nhan don i
*						i cong don 1
*/
#include <iostream>
using namespace std;

int tinhTichn(int x); //29

int main()
{
	int n;
	do {
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap gia tri sai. Moi nhap lai.\n";
	} while (n <= 0);
	cout << "n! = " << tinhTichn(n) << endl;
	return 0;
}

int tinhTichn(int x)
{
	int xTich = 1;
	for (int i = 2; i <= x; i++)
		xTich *= i;
	return xTich;
}