//Input: bac, he so cua da thuc, x
//Output: da thuc, gia tri da thuc
//vi du (da thuc bac 2): 2x^2 + 0x^1 + 5x^0 //a = 2, b = 0, c = 5, x = 3 //gia tri bieu thuc = 23
//	B1: Khai bao bac, x, tam, a, heSo, giaTri
//	B2: Nhap bac. Neu bac < 0 thi bao sai va nhap lai
//	B3: Nhap x
//	B4: Cho tam = bac 
//	B5: Lap neu tam >= 0
//		+Nhap heSo.
//		+Ep heSo voi tam ve chuoi va cong don + (heSo) ^ (tam) va gan cho a
//		+Cong don (heSo) ^ (tam) va gan cho giaTri
//		+Giam tam di 1
//	B6: Xuat a va giaTri
//Date: Nov-26, 2021
//Date: Nov-28, 2021
//Date: Nov-29, 2021 (deadline)
//Cam on cac ban
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	int bac, tam;
	double x, heSo, giaTri{};
	string a;
	do {
		cout << "Nhap bac cua da thuc: ";
		cin >> bac;
		if (bac < 0)
			cout << "Nhap gia tri sai. Moi nhap lai.";
	} while (bac < 0);
	cout << "Nhap gia tri x: ";
	cin >> x;
	tam = bac;
	while (tam >= 0)
	{
		cout << "He so cua x^" << tam << " la: ";
		cin >> heSo;
		a += "(" + to_string(heSo) + ")x^(" + to_string(tam) + ")";
		if (tam > 0)
			a += " + ";
		giaTri += heSo * pow(x, tam);
		tam--;
	}
	cout << "Da thuc bac " << bac << ": " << a << endl;
	cout << "Gia tri bieu thuc =  " << giaTri;
	return 0;
}