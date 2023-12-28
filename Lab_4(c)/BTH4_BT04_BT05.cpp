/*Input: n 
*Output: so chu so, tong cac chu so, so dao nguoc cua n
* B1: Khai bao n, tam, soChuSo, tong, nNguoc.
* B2: Lap: Nhap n. Neu n <= 0 thi xuat: sai, nhap lai. Nguoc lai thi thoat lap.
* B3: tam = n, nNguoc = 0, tong = 0, soChuSo = 0.
* B4: Lap: Neu tam > 0 thi:
*			+nNguoc = nNguoc * 10 + tam % 10.
* 			+tong = tong + tam % 10.
*			+tam = tam /10.
* 			+soChuSo++ (tang bien dem len 1 don vi).
* B5: Xuat soChuSo, tong, nNguoc.
Date: Nov-23, 2021*/
#include <iostream>
using namespace std;

int main()
{
	//B1:
	int n;
	cout << "Nhap 1 so nguyen duong: ";
	//B2:
	do {
		cin >> n;
		if (n <= 0)
			cout << "Nhap gia tri sai. Xin nhap lai: ";
	} while (n <= 0);
	//B3:
	int tong = 0, nNguoc = 0, tam = n, soChuSo =0;
	
	//B4:
	while (tam > 0)
	{
		nNguoc = nNguoc * 10 + tam % 10;
		tong = tong + tam % 10;
		tam = tam / 10;
		soChuSo++;
	}
	//B5:
	cout << "So chu so cua " << n << " la " << soChuSo << endl
		<< "Tong cua " << n << " la " << tong << endl
		<< "So dao nguoc cua " << n << " la " << nNguoc << endl;
	return 0;
}