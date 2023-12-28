/*Input: n (n > 0)
*Output: tong cac so tu 1 toi n.
* B1: Khai bao n. 
* B2: Lap: Nhap n. Neu n <= 0 thi xuat: sai, nhap lai. Nguoc lai thi thoat vong lap va tiep tuc.
* B3: Khai bao tong = 0, i = 1.
* B4: Lap: Neu i <= n thi tong cong voi i, sau do i tang 1. Nguoc lai thi thoat vong lap va tiep tuc.
* B5: Xuat tong.
Date: Nov-23, 2021*/
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap 1 so nguyen duong: ";
	do {
		cin >> n;
		if (n <= 0)
			cout << "Nhap gia tri sai. Xin nhap lai: ";
	} while (n <= 0);
	int tong = 0, i = 1;
	while (i <= n)
	{
		tong += i;
		i++;
	}
	cout << "Vay tong tu 1 toi " << n << " bang " << tong << ".\n";
	return 0;
}