/*Input: so nguyen n
* Output: n co phai so nguyen to khong
* Type: bool
* Algorithm:
*	S1: Neu n < 2 thi khong la so nguyen to. Nguoc lai, lap tu 2 toi can bac 2 cua n: 
*		Neu n chia het cho gia tri lap thi n khong la so nguyen to va ket thuc vong lap
*/
#include <iostream>
#include <cmath>
using namespace std;

void input(double& n)
{
	cout << "Nhap 1 so nguyen: ";
	do {
		cin >> n;
		if (n != int(n))
			cout << "Nhap sai. Nhap lai: ";
		else n = int(n);
	} while (n != int(n));
}
bool checkNT(int n)
{
	bool NT = true;
	if (n < 2)
		NT = false;
	else 
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				NT = false;
				break;
			}
		}
	return NT;
}

int main()
{
	double n;
	input(n);
	cout << "Vay " << n;
	if (checkNT(n))
		cout << " la so nguyen to.\n";
	else cout << " khong la so nguyen to.\n";
	return 0;
}