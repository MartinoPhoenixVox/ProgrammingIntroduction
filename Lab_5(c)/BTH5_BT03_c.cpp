/*Input: So nguyen duong n
* Output: Ket qua cua S3 = 1 + 1/3 + 1/5 + ... + 1/(2 * n - 1)
* B1: Khai bao n, S3
* B2: Nhap n. Lap neu n <= 0
* B3: S3 = 1
* B4: Cho i = 2. Lap neu i <= n trong do:
*		S3 cong don voi 1/(2 * i - 1)
*		i cong don 1
* B5: Xuat S3
Date: Dec-7, 2021*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	double S3 = 1;
	do {
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap gia tri sai. Moi nhap lai.\n";
	} while (n <= 0);
	for (int i = 2; i <= n; i++)
		S3 += 1 / (2.0 * i - 1);
	cout << "Ket qua cua S3 = 1 + 1/3 + 1/5 + ... + 1/(2 * n - 1) la " << fixed << setprecision(2) << S3 << endl;
	return 0;
}