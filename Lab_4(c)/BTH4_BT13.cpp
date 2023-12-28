//Lap lai trong khi con nhan duoc 1 so nguyen thi so sanh de tim duoc gia tri max, so sanh de tim duoc gia tri min va tinh tong
//B1: Khai bao max, min, tong, i
#include <iostream>
using namespace std;

int main()
{
	int i, max = INT_MIN, min = INT_MAX, tong = 0;
	cout << "Nhap mot day so nguyen va dung bang to hop Ctrl + Z: ";
	while (cin >> i)
	{
		if (max < i)
			max = i;
		if (min > i)
			min = i;
		tong += i;
	}
	cout << "So lon nhat trong cac so vua nhap la " << max << endl
		<< "So nho nhat trong cac so vua nhap la " << min << endl
		<< "Tong cac so vua nhap la " << tong << endl;
	return 0;
}