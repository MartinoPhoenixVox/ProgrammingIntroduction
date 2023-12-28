/*Input: so nguyen duong c
* Output: hinh vuong duoi dang *
* Algorithm:
*	B1: Khai bao
*	B2: Nhap c. Bao loi va lap neu sai
*	a)
*	B3: Lap tu 1 toi c: (Lap tu 1 toi c: Xuat dau sao.) roi xuong dong
*	b)
*	B3: Lap tu 1 toi c: Neu so can xet = 1 hoac = c thi (Lap tu 1 toi c: Xuat dau sao.) roi xuong dong. Con lai thi chi co dau sao dau va cuoi dong
*/
#include <iostream>
using namespace std;

int main()
{
	//B1:
	int c;
	//B2:
	cout << "Nhap canh cua hinh vuong can xuat: ";
	do {
		cin >> c;
		if (c <= 0)
			cout << "Nhap sai. Nhap lai: ";
	} while (c <= 0);
	//a)
	//B3:
	cout << "Hinh vuong dau tien:\n";
	for (int i = 1; i <= c; i++)
	{
		for (int j = 1; j <= c; j++)
			cout << "*";
		cout << endl;
	}
	//b)
	cout << "Hinh vuong thu hai:\n";
	for (int i = 1; i <= c; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			if (i == 1 || i == c)
				cout << "*";
			else
				if (j == 1 || j == c)
					cout << "*";
				else cout << " ";
		}
		cout << endl;
	}
	return 0;
}