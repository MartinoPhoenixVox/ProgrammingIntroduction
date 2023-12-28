/*Chuong trinh nhan vao so do 3 canh cua 1 tam giac
* Kiem tra xem 3 canh do co hop le hay khong
* Neu hop le thi tam giac do la loai tam giac gi
*Date: Nov-13, 2021
Date: Nov-16, 2021*/
#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cout << "Nhap lan luot so do 3 canh cua tam giac: ";
	cin >> a >> b >> c;
	//if (a <= 0 || b <= 0 || c <= 0)
	//	cout << "So do canh khong hop le.\n";
	//else
	//	if (a < b)
	//		if (b == c)
	//			cout << "So do canh khong hop le.\n";
	//		else
	//			if (b < c)
	//				if (c * c == a * a + b * b)
	//					cout << "Day la tam giac vuong.\n";
	//				else
	//					cout << "Day la tam giac thuong.\n";
	//			else
	//				if (c == a)
	//					if (b * b == a * a + c * c)
	//						cout << "Day la tam giac vuong can.\n";
	//					else
	//						cout << "Day la tam giac can.\n";
	//				else
	//					if (b * b == a * a + c * c)
	//						cout << "Day la tam giac vuong.\n";
	//					else
	//						cout << "Day la tam giac thuong.\n";
	//	else
	//		if (a == b)
	//			if (a == c)
	//				cout << "Day la tam giac deu.\n";
	//			else
	//				if (a < c)
	//					if (c * c == a * a + b * b)
	//						cout << "Day la tam giac vuong can.\n";
	//					else
	//						cout << "Day la tam giac can.\n";
	//				else
	//					cout << "So do canh khong hop le.\n";
	//		else
	//			if (a < c)
	//				if (c * c == a * a + b * b)
	//					cout << "Day la tam giac vuong can.\n";
	//				else
	//					cout << "Day la tam giac can.\n";
	//			else
	//				if (a == c)
	//					cout << "So do canh khong hop le.\n";
	//				else
	//					if (a * a == b * b + c * c)
	//						cout << "Day la tam giac vuong.\n";
	//					else
	//						cout << "Day la tam thuong.\n";

	//Rut gon:
	if (a + b <= c || a + c <= b || b + c <= a || a <= 0 || b <= 0 || c <= 0)
		cout << "So do canh khong hop le.\n";
	else
		if (a == b && a == c)
			cout << "Day la tam giac deu.\n";
		else
			if (a == b || a == c || b == c)
				if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
					cout << "Day la tam giac vuong can.\n";
				else
					cout << "Day la tam giac can.\n";
			else
				if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
					cout << "Day la tam giac vuong.\n";
				else
					cout << "Day la tam giac thuong.\n";
	return 0;
}