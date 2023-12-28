/*Input: m so nguyen
* Output: tong cac so vua nhap
* B1: Khai bao m, tam, tong
* B2: Nhap m. Lap neu m <= 0
* B3: tong = 0
* B4: Cho i = 1. Lap neu i <= m trong do:
*		Xuat "Nhap so thu i: "
*		Nhap vao tam
*		tong cong don tam
*		i cong don 1
* B5: Xuat tong
Date: Dec-7, 2021*/
#include <iostream>
using namespace std;

int main()
{
	int m, tam, tong = 0;
	do {
		cout << "Ban can bao nhieu so nguyen: ";
		cin >> m;
		if (m <= 0)
			cout << "Ban nhap sai roi. Moi nhap lai.\n\n";
	} while (m <= 0);
	for (int i = 1; i <= m; i++)
	{
		cout << "Nhap so thu " << i << ": ";
		cin >> tam;
		tong += tam;
	}
	cout << "Tong " << m << " so vua nhap la " << tong << endl;
	return 0;
}