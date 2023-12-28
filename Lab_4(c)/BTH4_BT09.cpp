//Input: n1, n2 (n1 < n2)
//Output: so luong uoc cua 10 trong pham vi n1 toi n2
//	Ly thuyet: 
//		+ Uoc cua 10 la 1, 2, 5, 10 (nguyen duong)
//	B1: Khai bao n1, n2, uoc
//	B2: Nhap n1. Neu n1 <= 0 thi bao sai va nhap lai
//	B3: Nhap n2. Neu n2 >= n1 thi bao sai va nhap lai
//	B4: Xet tung uoc cua 10 trong pham vi n1 toi n2
//	B5: Xuat ra so luong uoc
//Date: Nov-27, 2021
#include <iostream>
using namespace std;

int main()
{
	//B1:
	int n1, n2, uoc = 0, i;
	//B2:
	do {
		cout << "Nhap n1: ";
		cin >> n1;
		if (n1 <= 0)
			cout << "Nhap gia tri sai. Hay nhap lai.\n";
	} while (n1 <= 0);
	//B3:
	do {
		cout << "Nhap n2: ";
		cin >> n2;
		if (n2 <= n1)
			cout << "Nhap gia tri sai. Hay nhap lai.\n";
	} while (n2 <= n1);
	//B4:
	i = 1;
	while (i <= 10)
	{
		if (10 % i == 0 && i >= n1 && i <= n2)
			uoc++;
		i++;
	}
	cout << "Vay so luong uoc cua 10 trong pham vi n1 toi n2 la " << uoc << endl;
	return 0;
}