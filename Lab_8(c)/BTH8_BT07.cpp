#include <iostream>
#include <conio.h>
using namespace std;
#define MAXSIZE 100
void cls()
{
	_getch();
	system("cls");
}
void input(int& a, int b, int c)
{
	do {
		cin >> a;
		if (a < b || a > c)
			cout << "Nhap sai. Nhap lai:\t";
	} while (a < b || a > c);
	cout << endl;
}
void inputArr(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Nhap gia tri vi tri thu " << i << ":\t";
		cin >> a[i];
		cout << endl;
	}
}
void outputArr(const int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (i % 10 == 0)
			cout << endl;
		cout << a[i] << "\t";
	}
	cout << endl;
}
//	Ham tra ve vi tri xuat hien dau tien cua phan tu nho nhut trong mang
int minFirstPlace(const int a[], int size)
{
	int min = INT_MAX, place = -1;
	for (int i = 0; i < size; i++)
		if (a[i] < min)
		{
			min = a[i];
			place = i;
		}
	return place;
}
int main()
{
	int arr[MAXSIZE];
	int arrSize, chon = -100;
	bool check = false;
	int exit = -1;
	//	Menu
	do {
		cout << "Menu:\n"
			<< "1. Nhap mang\n"
			<< "2. Xuat mang\n"
			<< "3. Tra ve vi tri xuat hien dau tien cua phan tu nho nhut trong mang\n"
			<< "Ban chon:\t";
		input(chon, INT_MIN, INT_MAX);
		switch (chon)
		{
		case 1:
			cls();
			cout << "Ban muon nhap vao mang bao nhieu gia tri?\t";
			input(arrSize, 1, MAXSIZE);
			inputArr(arr, arrSize);
			check = true;
			break;
		case 2:
			cls();
			if (check == false)
			{
				cout << "Ban chua nhap mang.\n";
				break;
			}
			cout << "Ta co mang sau:";
			outputArr(arr, arrSize);
			break;
		case 3:
			cls();
			if (check == false)
			{
				cout << "Ban chua nhap mang.\n";
				break;
			}
			cout << "Gia tri nho nhut mang namw o vi tri thu " << minFirstPlace(arr, arrSize) << endl;
			break;
		default:
			cls();
			cout << "Ban muon thoat chuong trinh?\n"
				<< "Chon 1 de thoat, chon 0 de o lai.\n"
				<< "Ban chon:\t";
			input(exit, 0, 1);
			if (exit == 0)
			{
				cout << "Ban chon o lai.\nQuay lai menu\n";
				chon = -100;
				break;
			}
			cout << "Ban chon thoat.\nDang thoat chuong trinh\n";
		}
		cls();
	} while (chon > 0 && chon < 4 || chon == -100);
	return 0;
}