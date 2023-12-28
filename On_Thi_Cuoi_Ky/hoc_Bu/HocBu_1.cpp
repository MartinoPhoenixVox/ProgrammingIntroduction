#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
const int tienK1 = 20000, tienK2 = 45000;
const int tien1 = 5, tien2 = 7, tien3 = 10, tien4 = 15, tien5 = 20;
void clear()
{
	_getch();
	system("cls");
}
int main()
{
	double gioVao, gioRa, tienK, kyTruoc, kySau, ky, tien;
	do 
	{
		do {
			cout << "Nhap gio vao:\t";
			cin >> gioVao;
			if (gioVao < 10 || gioVao >= 24)
			{
				cout << "Gio vao khong dung. Yeu cau nhap lai.\n";
				clear();
			}
				
		} while (gioVao < 10 || gioVao >= 24);
		do {
			cout << "Nhap gio ra:\t";
			cin >> gioRa;
			if (gioRa < 10 || gioRa >= 24)
			{
				cout << "Gio ra khong dung. Yeu cau nhap lai.\n";
				clear();
			}
		} while (gioRa < 10 || gioRa > 24);
		if (gioVao > gioRa)
		{
			cout << "Gio vao phai khong lon hon gio ra. Yeu cau nhap lai.\n";
			clear();
		}
	} while (gioVao > gioRa);
	if (gioRa < 17)
		tienK = tienK1 * (gioRa - gioVao);
	else
		if (gioVao >= 17)
			tienK = tienK2 * (gioRa - gioVao);
		else tienK = tienK1 * (17 - gioVao) + tienK2 * (gioRa - 17);
	cout << "Tien hat karaoke =\t" << fixed << setprecision(0) << tienK << " VND.\n";
	clear();
	do {
		do {
			cout << "Nhap luong dien tieu thu thang truoc:\t";
			cin >> kyTruoc;
			if (kyTruoc < 0)
			{
				cout << "Luong dien tieu thu khong hop le. Yeu cau nhap lai.\n";
				clear();
			}
		} while (kyTruoc < 0);
		do {
			cout << "Nhap luong dien tieu thu thang nay:\t";
			cin >> kySau;
			if (kySau < 0)
			{
				cout << "Luong dien tieu thu khong hop le. Yeu cau nhap lai.\n";
				clear();
			}
		} while (kySau < 0);
		if (kyTruoc > kySau)
		{
			cout << "Luong dien tieu thu thang truoc phai khong lon hon luong dien tieu thu thang nay. Yeu cau nhap lai.\n";
			clear();
		}
	} while (kyTruoc > kySau);
	ky = kySau - kyTruoc;
	if (ky < 101)
		tien = ky * tien1;
	else
		if (ky < 151)
			tien = 100 * tien1 + (ky - 100) * tien2;
		else
			if (ky < 201)
				tien = 100 * tien1 + 50 * tien2 + (ky - 150) * tien3;
			else
				if (ky < 301)
					tien = 100 * tien1 + 50 * tien2 + 50 * tien3 + (ky - 200) * tien4;
				else tien = 100 * tien1 + 50 * tien2 + 50 * tien3 + 100 * tien4 + (ky - 300) * tien5;
	cout << "Tien dien phai dong =\t" << fixed << setprecision(0) << tien << " $.\n";
	clear();
	return 0;
}