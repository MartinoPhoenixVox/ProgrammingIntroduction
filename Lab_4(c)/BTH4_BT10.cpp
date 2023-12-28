//Input: n > 0
//Output: Cac thua so nguyen to cua n
//Vi du: n = 126 thi cac thua so nguyen to la 2, 3, 3, 7
//	B1: Khai bao n, tam, i, s, tichAo
//	B2: Nhap n. Neu n <= 0 thi bao sai va nhap lai
//	B3: tam = n, i = 2, s = "Vay cac thua so nguyen to cua n la: "
//	B4: Lap neu tichAo < n
//		+ Neu tam chia du i = 0
//			- Ep i vao chuoi s
//			- tichAo nhan don voi i
//			- tam chia het cho i
//		+ Hoac i cong 1
//	B5: Xuat s
//Date: Nov-27, 2021
//Date: Nov-29, 2021
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//B1:
	int n, tam, tichAo{}, i;
	string s;
	//B2:
	do {
		cout << "Nhap n: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai gia tri. Moi nhap lai.\n";
	} while (n <= 0);
	//B3:
	tam = n;
	i = 2;
	s = "Vay cac thua so nguyen to cua n la: ";
	tichAo = 1;
	//B4: 
	do {
		if (tam % i == 0)
		{
			s += to_string(i);
			tichAo *= i;
			tam /= i;
			if (tichAo < n)
				s += ", ";
		}
		else
			i++;
	} while (tichAo < n);
	cout << s << endl;
	return 0;
}