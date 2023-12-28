/*Chuong trinh yeu cau nhap vao hai canh hinh chu nhat,sau do tinh va in ra dien tich hinh chu nhat.
Date: Nov-2, 2021*/
#include <iostream>
using namespace std;

int main()
{
	double a = 0.0, b = 0.0, S = 0.0;
	cout << "Nhap vao hai canh hinh chu nhat: ";
	cin >> a;
	cout << "va ";
	cin >> b;
	cout << endl;
	S = a * b;
	cout << "Dien tich hinh chu nhat: " << S << endl;
	return 0;
}