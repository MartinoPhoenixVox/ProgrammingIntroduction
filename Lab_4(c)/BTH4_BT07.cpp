//Input: 1 so bat ky, 2 so nguyen
//Output : Giao dien, bieu thuc, ket qua (lam tron 2 chu so thap phan)
//B1: Xuat menu bieu hien mot so bat ky
//B2: Nhap i
//B3: lap(menu), so nguyen i 1 toi 4 dai dien 4 phep tinh, con lai thi thoat
//B4: 
//*Truong hop i = 1 (phep cong)
//	+Nhap 2 so nguyen
//	+Xuat ket qua phep tinh
//*Truong hop i = 2 (phep tru)
//	+ Nhap 2 so nguyen
//	+ Xuat ket qua phep tinh
//*Truong hop i = 3 (phep nhan)
//	+ Nhap 2 so nguyen
//	+ Xuat ket qua phep tinh
//*Truong hop i = 4 (phep chia)
//	+ Nhap 2 so nguyen
//	+ Xuat ket qua phep tinh (lam tron 2 chu so thap phan)
//		-Neu nhap mau la 0 thi xuat la "loi chia 0"
//B5: Xuat "thoat chuong trinh" va ket thuc
//Date: Nov-26, 2021
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i, a, b;
	std::cout << "Menu 4 phep toan 2 so nguyen:\n1. Phep cong\n2. Phep tru\n3. Phep nhan\n4. Phep chia\n5. Thoat chuong trinh\n";
	std::cout << "Vui long nhap 1 so tren menu: ";
	cin >> i;
	while (i >= 1 && i <= 4)
	{
		switch (i)
		{
		case 1:
			std::cout << "Nhap 2 so nguyen theo thu tu phep toan: ";
			cin >> a >> b;
			std::cout << a << " + " << b << " = " << a + b << endl;
			break;
		case 2:
			std::cout << "Nhap 2 so nguyen theo thu tu phep toan: ";
			cin >> a >> b;
			std::cout << a << " - " << b << " = " << a - b << endl;
			break;
		case 3:
			std::cout << "Nhap 2 so nguyen theo thu tu phep toan: ";
			cin >> a >> b;
			std::cout << a << " * " << b << " = " << a * b << endl;
			break;
		case 4:
			std::cout << "Nhap 2 so nguyen theo thu tu phep toan: ";
			cin >> a >> b;
			b == 0 ? std::cout << "Loi chia 0\n" : std::cout << a << " / " << b << " = " << fixed << setprecision(2) << a * 1.0 / b << endl;
			break;
		}
		std::cout << "Menu 4 phep toan 2 so nguyen:\n1. Phep cong\n2. Phep tru\n3. Phep nhan\n4. Phep chia\n5. Thoat chuong trinh\n";
		std::cout << "Vui long nhap 1 so tren menu: ";
		cin >> i;

	}
	std::cout << "Thoat chuong trinh.";
	return 0;
}
