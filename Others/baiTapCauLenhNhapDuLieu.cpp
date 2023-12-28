/*Vo Huynh Thanh Phuong_ 2151013072.
* Ngay 26 thang 10 nam 2021.
Chuong trinh nhap vao do Fahrenheit, chuyen qua do Celsius va in ra ket qua.*/
#include <iostream>
using namespace std;

int main()
{
	double doC = 0.0;
	double doF = 0.0;
	cout << "Nhap do Fahrenheit ban dau: ";
	cin >> doF;
	cout << endl;
	doC = (doF - 32.0) / 1.8;
	cout << "Do Celsius tinh duoc: " << doC << endl;
	return 0;
}