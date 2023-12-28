/*Input: chieu cao h
* Output: 
*	a) tam giac trong duoi trai vuong can, 
*	b) tam giac day duoi phai vuong can, 
*	c) tam giac day tren trai vuong can, 
*	d) tam giac day tren phai vuong can, 
*	e) tam giac day duoi deu
*    *     
*   * *
*  * * *
* * * * *
* Algorithm:
*	B1: Khai bao
*	B2: Nhap h. Bao loi va lap neu sai
*	B3: 
*	a) Lap tu 1 toi h. Neu so can xet bang 1 hoac h thi xet du, con lai xet thieu
*	b) Lap tu 1 toi h. Neu ma so can xet nho hon hoac bang so chieu cao giam dan theo tung lan lap thi xuat dau cach, con lai thi xuat dau *
*	c) Lap tu 1 toi h. Neu ma so can xet nho hon hoac bang so chieu cao giam dan theo tung lan lap thi xuat dau *, con lai thi xuat dau cach
*	d) Lap tu 1 toi h. Neu ma so can xet nho hon hoac bang 0 tro len cho toi so chieu cao tru di 1 thi xuat dau cach, con lai thi xuat dau *
*	e) Lap tu 1 toi h. Lap tu 1 toi 2h - 1.
*		Neu h la so le: Khoang can xet tu vi tri giua dong cach deu qua trai va phai, neu dong va cot cung chan hoac cung le, thi xuat dau *, con lai xuat dau cach
*		Neu h la so chan: Khoang can xet tu vi tri giua dong cach deu qua trai va phai, neu dong va cot khong cung chan (le), thi xuat dau *, con lai xuat dau cach
*/
#include <iostream>
using namespace std;

int main()
{
	//B1:
	int h, n, m, l = 0;
	//B2:
	cout << "Nhap chieu cao tam giac: ";
	do {
		cin >> h;
		if (h <= 0)
			cout << "Nhap sai. Nhap lai: ";
	} while (h <= 0);
	//B3:
	//a)
	n = h - 1;
	cout << "Tam giac trong duoi trai vuong can:\n";
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= i; j++)
			if (i != 1 && i != h)
				if (j != 1 && j != i)
					cout << " ";
				else cout << "*";
			else cout << "*";
		cout << endl;
	}
	//b)
	cout << "Tam giac day duoi phai vuong can:\n";
	for (int i = 1; i <= h ; i++)
	{
		for (int j = 1; j <= h; j++)
		{
			if (j <= n)
				cout << " ";
			else cout << "*";
		}
		n--;
		cout << endl;
	}
	//c)
	n = h;
	cout << "Tam giac day tren trai vuong can:\n";
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= h; j++)
			if (j <= n)
				cout << "*";
		n--;
		cout << endl;
	}
	//d)
	n = 0;
	cout << "Tam giac day tren phai vuong can:\n";
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= h; j++)
			if (j > n)
				cout << "*";
			else cout << " ";
		n++;
		cout << endl;
	}
	//e)
	n = 2 * h - 1;
	m = n / 2 + 1;
	cout << "Tam giac day duoi deu:\n";
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (h % 2 == 0)
				if (j >= m - l && j <= m + l)
					if ((i % 2 != 0 && j % 2 == 0) || (i % 2 == 0 && j % 2 != 0))
						cout << "*";
					else cout << " ";
				else cout << " ";
			else
				if (j >= m - l && j <= m + l)
					if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
						cout << "*";
					else cout << " ";
				else cout << " ";
		}
		cout << endl;
		l++;
	}
	return 0;
}