/*Input: So nguyen duong n
* Output: Ket qua cua S2 = 1 + 1/2 + 1/3 + ... + 1/n
* B1: Khai bao n, S2
* B2: Nhap n. Lap neu n <= 0
* B3: S2 = 1
* B4: Cho i = 2. Lap neu i <= n trong do:
*		S2 cong don voi 1/(i)
*		i cong don 1
* B5: Xuat S2
Date: Dec-7, 2021*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	double S2 = 1;
	do {
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap gia tri sai. Moi nhap lai.\n";
	} while (n <= 0);
	for (int i = 2; i <= n; i++)
		S2 += 1.0 / i;
	cout << "Ket qua cua S2 = 1 + 1/2 + 1/3 + ... + 1/n la " << fixed << setprecision(2) << S2 << endl;
	return 0;
}