#include <iostream>
using namespace std;
//Muc dich: kiem tra nam co hop le khong
//Input: nam
// Kieu int
//Thuat toan: lap khi nam khong la so nguyen 
//
//Muc dich: kiem tra nam co nhuan khong
//Input: nam
//Kieu bool
//Thuat giai: neu nam chia het cho 4 va khong chia het cho 100 thi nam nhuan

void input(int &n)
{
	do {
		cout << "Nhap nam:\t";
		cin >> n;
		if (n != int(n))
			cout << "Nhap sai. Nhap lai.\n";
	} while (n != int(n));
}
bool namNhuan(int a)
{
	bool xet;
	if (a % 4 == 0 && a % 100 != 0)
		xet = true;
	else
		xet = false;
	return xet;
}
void namCN(int n)
{
	if (n < 0)
		cout << "Nam " << -n << " TCN la nam ";
	else if (n >= 0)
		cout << "Nam " << n << " la nam ";
}

int main()
{
	int nam;
	bool xet;
	input(nam);
	namCN(nam);
	if (namNhuan(nam) == true)
		cout << "nhuan.\n";
	else
		cout << "khong nhuan.\n";
	return 0;
}

