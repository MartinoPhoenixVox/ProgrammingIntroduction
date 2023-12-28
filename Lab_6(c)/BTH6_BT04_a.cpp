/*B1: Xac dinh muc dich: tinh tong tu 1 toi x
* B2: Du lieu se nhan: x
* B3: Du lieu tra ve: xTong
* B4: Thuat giai:
*					xTong = 0
*					Cho i = 1
*					Lap neu i <= n
*						xTong cong don i
*						i cong don 1
*/
#include <iostream>
using namespace std;

int tinhTongn(int x);

int main()
{
	int n;
	do {
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap gia tri sai. Moi nhap lai.\n";
	} while (n <= 0);
	cout << "Tong tu 1 toi n la " << tinhTongn(n) << endl;
	return 0;
}

int tinhTongn(int x)
{
	int xTong = 0;
	for (int i = 1; i <= x; i++)
		xTong += i;
	return xTong;
}