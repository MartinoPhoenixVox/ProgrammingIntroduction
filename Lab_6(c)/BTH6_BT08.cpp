/*Date: Dec- 14, 2021
a.
Input: canh
Output: chu vi hinh vuong
b.
Input: canh
Output: dien tich hinh vuong
c.
Input: canh, ky tu
Output: hinh vuong rong duoc ve bang ky tu
Kieu void
Thuat giai:
	Duyet canh lan, moi lan thuc hien:
		Duyet canh lan, neu i bang 1 hoac i bang canh thi xuat ky tu; nguoc lai, neu j bang 1 hoac j bang canh thi xuat ky tu; nguoc lai thi xuat dau cach 
		Xuong dong
*/
#include <iostream>
#include <string>
using namespace std;

int PVuong(int x); //Ham a
int SVuong(int x); //Ham b
void Vuong(int n, char s); //Ham c

int main()
{
	int n;
	char s;
	do {
		cout << "Nhap so do canh hinh vuong: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap gia tri sai. Hay nhap lai.\n";
	} while (n <= 0);
	cout << "Nhap ky tu hinh vuong: ";
	cin >> s;
	//Dap an a
	cout << "Chu vi hinh vuong dua theo canh: " << PVuong(n) << endl;
	//Dap an b
	cout << "Dien tich hinh vuong dua theo canh: " << SVuong(n) << endl;
	//Dap an c
	Vuong(n, s);
	return 0;
}

//a.
int PVuong(int x)
{
	int P;
	return P = x * 4;
}

//b.
int SVuong(int x)
{
	int S;
	return S = x * x;
}

//c.
void Vuong(int n, char s)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == 1 || i == n)
				cout << s;
			else
				if (j == 1 || j == n)
					cout << s;
				else cout << " ";
		}
		cout << endl;
	}
}
