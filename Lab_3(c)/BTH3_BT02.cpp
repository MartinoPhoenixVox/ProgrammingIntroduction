/*Chuong trinh tim so lon nhat cua 2 so nguyen a va b
Date: Nov-9, 2021*/
#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	cout << "Nhap lan luot 2 so nguyen: ";
	cin >> a >> b;
	if (a < b)
		cout << "So nguyen lon nhat la: " << b << endl;
	else
		cout << "So nguyen lon nhat la: " << a << endl;
	return 0;
}