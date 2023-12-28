/*Viet chuong trinh yeu cau nhap vao gia mua cua mot mat hang, sau do in ra gia ban cua mat hang do.
Date: Nov-3,2021*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double giaMua = 0.0, giaBan = 0.0;
	cout << "Nhap vao gia mua: ";
	cin >> giaMua;
	giaBan = giaMua + giaMua * 0.6;
	cout << "Gia ban: " << fixed << setprecision(0) << giaBan << endl;
	return 0;
}