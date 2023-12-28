/*Input: So nguyen duong n
* Output: Ket qua cua S1 = 1 + 2^2 + 3^2 + ... + n^2
* B1: Khai bao n, S1
* B2: Nhap n. Lap neu n <= 0
* B3: S1 = 1
* B4: Cho i = 2. Lap neu i <= n trong do:
*		S1 cong don voi i^2
*		i cong don 1
* B5: Xuat S1
Date: Dec-7, 2021*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	double S1 = 1;
	do {
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap gia tri sai. Moi nhap lai.\n";
	} while (n <= 0);
	for (int i = 2; i <= n; i++)
		S1 += pow(i * 1.0, 2);
	cout << "Ket qua cua S1 = 1 + 2^2 + 3^2 + ... + n^2 la " << fixed << setprecision(0) << S1 << endl;
	return 0;
}