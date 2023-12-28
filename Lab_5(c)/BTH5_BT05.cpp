/*Input: 2 so nguyen duong n1 < n2
* Output: Tu n1 toi n2 co bao nhieu so nguyen to
* B1: Khai bao n1, n2, demNT, j
* B2: Nhap n1. Lap neu n1 <= 0
* B3: Nhap n2. Lap neu n2 <= n1
* B4: demNT = 0
* B5: Cho i = n1. Lap neu i <= n2 thi i cong don 1, trong do:
*		Neu i < 2 thi bo qua va tiep tuc lan lap moi
*		Cho j = 2. Lap neu j <= can bac 2 cua i thi j cong don 1, trong do:
*			Neu i chia het cho j thi ket thuc vong lap
*		Neu j > can bac 2 cua i thi demNT cong don 1
* B6: Xuat demNT
Date: Dec-7, 2021
Date: Dec-14, 2021*/
#include <iostream>
using namespace std;

int main()
{
	//B1:
	int n1, n2, demNT, j;
	//B2:
	do {
		cout << "Nhap n1: ";
		cin >> n1;
		if (n1 <= 0)
			cout << "Nhap gia tri khong hop le. Moi nhap lai.\n";
	} while (n1 <= 0);
	//B3:
	do {
		cout << "Nhap n2: ";
		cin >> n2;
		if (n2 <= n1)
			cout << "Nhap gia tri khong hop le. Moi nhap lai.\n";
	} while (n2 <= n1);
	//B4:
	demNT = 0;
	//B5:
	for (int i = n1; i <= n2; i++)
	{
		if (i < 2)
			continue;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
			demNT++;
	}
	cout << "Vay tu " << n1 << " toi " << n2 << " co " << demNT << " so nguyen to.\n";
	return 0;
}