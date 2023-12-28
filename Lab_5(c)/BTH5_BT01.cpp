/*Input: so nguyen duong n
* Output: tong tu 1 toi n
* B1: Khai bao n, tong
* B2: Nhap n. Lap neu n <= 0
* B3: tong = 1
* B4: Cho i = 2. Lap neu i <= n trong do:
*		tong cong don i
*		i cong don 1
* B5: Xuat tong
Date: Dec-7, 2021*/
#include <iostream>
using namespace std;

int main()
{
	int n, tong = 1;
	do {
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap gia tri sai. Moi nhap lai.\n";
	} while (n <= 0);
	for (int i = 2; i <= n; i++)
		tong += i;
	cout << "Tong cac so tu 1 toi " << n << " la " << tong << endl;
	return 0;
}