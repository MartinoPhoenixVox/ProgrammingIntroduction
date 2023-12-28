//Input: so nhi phan
//Output: so thap phan
//B1: Khai bao nP, tP,tam,cS, i
//B2: Nhap nP va lap neu nP < 0;
//B3: Cho tam = nP
//B4: Lap neu tam > 0
//	1. cS = tam % 10
//	2. tP = cS * (2 mu i)
//	3. Neu cS khac 0 thi tam chia don cS, nguoc lai tiep tuc
//	4. i cong don
//B5: Xuat tP
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int nP, tP{}, tam, cS, i = 0;
	do {
		cout << "Nhap so nhi phan: ";
		cin >> nP;
		if (nP < 0)
			cout << "Nhap sai. Nhap lai.\n";
	} while (nP < 0);
	tam = nP;
	do {
		cS = tam % 10;
		tP += cS * static_cast<int>(pow(2.0, i * 1.0));
		tam /= 10;
		i++;
	} while (tam > 0);
	cout << "So thap phan nhan duoc tu " << nP << " la " << tP << endl;
	return 0;
}