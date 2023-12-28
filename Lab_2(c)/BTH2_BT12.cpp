/*Chuong trinh nhap vao mot chuoi ky tu va in ra chieu dai cua chuoi 
Date: Nov-5,2021*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cout << "Nhap vao mot chuoi bat ky: ";
	getline(cin, s);
	cout << "Chieu dai chuoi la " << s.length() << " ky tu" << endl;
	return 0;
}