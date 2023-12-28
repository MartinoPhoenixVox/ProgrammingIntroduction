#include <iostream>
#include <iomanip>
#define MAXSIZE 100
using namespace std;

int main()
{
	int q[MAXSIZE];
	int max = INT_MIN, n, loc = 0, tong = 0, xoa;
	double  trungBinh;
	cout << "Ban muon mang co bao nhieu phan tu?\n";
	do {
		cin >> n;
		if (n <= 0 || n > MAXSIZE)
			cout << "Nhap sai. Nhap lai: ";
	} while (n <= 0 || n > MAXSIZE);
	//Nhap mang
	for (int i = 0; i < n; i++)
	{
		cout << "q[" << i << "] = ";
		cin >> q[i];
	}
	//Tim phan tu lon nhat
	for (int i = 0; i < n; i++)
	{
		if (q[i] > max)
		{
			max = q[i];
			loc = i;
		}
	}
	//Xuat phan tu lon nhat
	cout << "Phan tu lon nhat cua mang la q[" << loc << "] = " << max << endl;
	//Tinh tong
	for (int i = 0; i < n; i++)
	{
		tong += q[i];
	}
	//Tinh trung binh cong
	trungBinh = tong * 1.0 / n;
	//Xuat tong va trung binh cong
	cout << "Tong cua mang bang " << tong << endl 
		<< "Trung binh cong cua mang bang " << fixed << setprecision(2) << trungBinh << endl;
	//Nhap vi tri can xoa
	cout << "Can xoa tai vi tri: ";
	do {
		cin >> xoa;
		if (xoa <= 0 || xoa > n)
			cout << "Nhap sai. Nhap lai: ";
	} while (xoa <= 0 || xoa > n);
	for (int i = xoa; i < n; i++)
	{
		q[i] = q[i + 1];
	}
	n--;
	//In mang
	cout << "Mang sau khi xoa se nhu sau:";
	for (int i = 0; i < n; i++)
	{
		if (i % 10 == 0)
			cout << endl;
		cout << q[i] << "\t";
	}
	return 0;
}