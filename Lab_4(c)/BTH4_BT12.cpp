//Input: n > 0
//Output: n duoc the hien duoi dang cach nhau 1 khoang cach
//B1: Khai bao n1, tam1, tam2, cS, n2
//B2: Nhap n va lap lai neu sai
//B3: tam1 = n1, tam2 = 0
//B4: Lap lai neu tam1 > 0
//	1. cS = tam1 % 10
//	2. tam2 = tam2 * 10 + cS
//	3. tam1 chia nguyen cho 10
//B5: Lap lai neu tam2 > 0
//	1. cS = tam2 % 10
//	2. n2 cong don " " + cS
//	3. tam2 chia nguyen cho 10
//B5: Xuat n2
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n1, tam1, tam2 = 0, cS;
	string n2;
	do {
		cout << "Nhap n: ";
		cin >> n1;
		if (n1 <= 0)
			cout << "Nhap sai. Nhap lai.\n";
	} while (n1 <= 0);
	tam1 = n1;
	while (tam1 > 0)
	{
		cS = tam1 % 10;
		tam2 = tam2 * 10 + cS;
		tam1 /= 10;
	}
	while (tam2 > 0)
	{
		cS = tam2 % 10;
		n2 += to_string(cS);
		if (tam2 > 0)
			n2 += " ";
		tam2 /= 10;
	}
	cout << n1 << " duoc the hien duoi dang khoang cach la " << n2 << endl;
	return 0;
}


