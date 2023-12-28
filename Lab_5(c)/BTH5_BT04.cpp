/*Input: so nguyen duong n
* Output: n!
* B1: Khai bao n, nGT
* B2: Nhap n. Lap neu n <= 0
* B3: nGT = 1
* B4: Cho i = 1. Lap neu i <= n trong do:
*		nGT nhan don i
*		i cogn don 1
* B5: Xuat nGT
Date: Dec-7, 2021*/
#include <iostream>
using namespace std;

int main()
{
	int n, nGT = 1;
	do {
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap gia tri sai. Moi nhap lai.\n";
	} while (n <= 0);
	for (int i = 1; i <= n; i++)
		nGT *= i;
	cout << n << "! = " << nGT << endl;
}