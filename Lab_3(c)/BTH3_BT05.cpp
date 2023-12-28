/*Chuong trinh nhan vao diem tich luy cua 1 sinh vien, xuat ra man hinh ket qua xep loai cua sinh vien do dua vao diem tich luy
Date: Nov-9, 2021*/
#include <iostream>
using namespace std;

int main()
{
	double diemTichLuy;
	cout << "Nhap diem tich luy cua ban: ";
	cin >> diemTichLuy;
	if (diemTichLuy > 0 && diemTichLuy < 10)
		if (diemTichLuy >= 9)
			cout << "Xuat sac\n";
		else
			if (diemTichLuy >= 8)
				cout << "Gioi\n";
			else
				if (diemTichLuy >= 7)
					cout << "Kha\n";
				else
					if (diemTichLuy >= 6)
						cout << "Trung binh kha\n";
					else
						if (diemTichLuy >= 5)
							cout << "Trung binh\n";
						else
							cout << "Yeu\n";
	else
		cout << "Gia tri nhap khong dung.\n";
	return 0;
}