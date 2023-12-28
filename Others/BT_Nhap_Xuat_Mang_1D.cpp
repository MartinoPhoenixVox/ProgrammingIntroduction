//Nhap va xuat 1 mang so nguyen toi da 50 phan tu
#include <iostream>
using namespace std;

int main()
{
	const int MAXSIZE = 50; //phan tu toi da co the nhap
	int trueSIZE; //phan tu nguoi dung nhap
	int a[MAXSIZE] ;
	//Nhap so phan tu. Lap lai neu so luong phan tu khong phu hop
	do {
		cout << "Ban muon nhap bao nhieu phan tu?\n";
		cin >> trueSIZE;
		if (trueSIZE <= 0)
			cout << "Nhap qua so luong phan tu toi thieu. Moi nhap lai.\n";
		if (trueSIZE > MAXSIZE)
			cout << "Nhap qua so luong phan tu toi da. Moi nhap lai.\n";
	} while (trueSIZE > MAXSIZE || trueSIZE <= 0);
	//Nhap mang a. Dung vong lap de nhap mang
	cout << "Nhap " << trueSIZE << " so nguyen:\n";
	for (int i = 0; i <= trueSIZE - 1; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	//Xuat mang a. Dung vong lap bieu dien mang
	cout << "Vay mang nay gom cac so nguyen: ";
	for (int i = 0; i <= trueSIZE - 1; i++)
	{
		cout << a[i];
		if (i < trueSIZE - 1)
			cout << "; ";
	}
	cout << endl;
	return 0;
}