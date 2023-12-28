/*Input: So nguyen n
*Output: Thong bao co phai so nguyen to khong
* B1: Khai bao n, laSNT, i
* B2: Lap: Nhap n. Neu n <= 1, bao khong la so nguyen to, nhap lai. Nguoc lai thi tiep.
* B3: laSNT = true, i = 2
* B4: Lap: Neu i <= sqrt(n) & laSNT = true thi:
*		+Neu n % i = 0 thi laSNT = false
*		+i++
* B5: Neu laSNT = true thi xuat la so nguyen to. Nguoc lai thi xuat khong la so nguyen to
Date: Nov-23, 2021*/
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap so nguyen n: ";
	do {
		cin >> n;
		if (n <= 1)
			cout << "Nhap khong dung. Moi nhap lai:";
	} while (n <= 1);
	bool laSNT = true;
	int i = 2;
	while (i <= sqrt(n) && laSNT == true)
	{
		if (n % i == 0)
			laSNT = false;
		i++;
	}
	if (laSNT == true)
		cout << "Day la so nguyen to.\n";
	else
		cout << "Day khong la so nguyen to.\n";
	return 0;
}