/*Chuong trinh nhan vao 2 so nguyen, xuat ra man hinh ket qua so sanh giua 2 so
Date: Nov-9, 2021*/
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Nhap lan luot 2 so nguyen: ";
	cin >> a >> b;
	if (a > b)
		cout << a << " lon hon " << b << endl;
	else
		if (a < b)
			cout << a << " nho hon " << b << endl;
		else
			cout << a << " bang voi " << b << endl;
	return 0;
}