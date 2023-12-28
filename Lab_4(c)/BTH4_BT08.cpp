//Input: so nguyen n > 0
//Output: tong so le 
//	B1: Khai bao so nguyen n, tam, tong
//	B2: Nhap vao n. Bao loi va lap neu n < 0
//	B3: tam = n
//	B4: Lap neu tam > 0
//		+ neu (tam % 10) / 2 != 0 thi tong += (tam % 10)
//		+ tam / 10
//	B5: Xuat tong
//Date: Nov-27, 2021
#include <iostream>
using namespace std;

int main()
{
	//B1:
	int n, tam, tong;
	//B2:
	do {
		cout << "Nhap n: ";
		cin >> n;
		if (n < 0)
			cout << "Nhap gia tri sai. Moi nhap lai.\n";
	} while (n < 0);
	tam = n;
	tong = 0;
	while (tam > 0)
	{
		if (tam % 10 % 2 != 0)
			tong += tam % 10;
		tam /= 10;
	}
	cout << "Tong cac so le cua n: " << tong << endl;
	return 0;
}