/*Input: n (n > 1)
*Output: Tich cac so le tu 1 toi n
* B1: Khai bao n.
* B2: Nhap n. Lap: Neu n <= 1 thi xuat: sai, nhap lai. Nguoc lai thi thoat vong lap va tiep tuc.
* B3: Khai bao i = 3, tich = 1.
* B4: Lap: Neu i <= n thi tich nhan voi i, i cong them 2. Nguoc lai thi thoat vong lap va tiep tuc.
* B5: Xuat tich.
Date: Nov-23,2021*/
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap so le nguyen duong n: ";
	do {
		cin >> n;
		if (n <= 1)
			cout << "Nhap gia tri sai. Xin nhap lai: ";
	} while (n <= 1);
	int tich = 1, i = 3;
	while (i <= n)
	{
		tich *= i;
		i += 2;
	}
	cout << "Vay tich cac so le tu 1 toi " << n << " la " << tich << ".\n";
	return 0;
}