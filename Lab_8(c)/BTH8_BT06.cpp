#include <iostream>
#include <conio.h>
using namespace std;
#define MAXSIZE 100
void input(int& a, int b, int c)
{
	do {
		cin >> a;
		if (a < b || a > c)
			cout << "Nhap sai. Nhap lai:\t";
	} while (a < b || a > c);
	cout << endl;
}
void dao(int& a, int& b)
{
	int tam;
	tam = a;
	a = b;
	b = tam;
}
void cls()
{
	_getch();
	system("cls");
}
//	a. Nhap mot day so nguyen vao mang
void nhap(int arr[], int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		cout << "Vi tri " << i << " co gia tri:\t";
		cin >> arr[i];
		cout << endl;
	}
	cout << endl;
}
//	b. In day so nguyen cach nhau boi ","
void xuat(const int arr[], int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		if (i % 10 == 0)
			cout << endl;
		if (i == arrSize - 1)
			cout << arr[i] << "\n";
		else cout << arr[i] << ",\t";
	}
	cout << endl;
}
//	c. Tim x trong mang. Co thi "true", khong co thi "false"
bool tim(const int arr[], int arrSize, int x)
{
	for (int i = 0; i < arrSize; i++)
		if (arr[i] == x)
			return true;
	return false;
}
//	d. Dao nguoc phan tu trong mang
void daonguoc(int arr[], int arrSize)
{
	for (int i = 0; i < arrSize / 2; i++)
		dao(arr[i], arr[arrSize - 1 - i]);
}
//	e. Xoa phan tuu tai vi tri p
void xoa(int arr[], int& arrSize, int p)
{
	for (int i = p; i < arrSize; i++)
		arr[i] = arr[i + 1];
	arrSize--;
}
//	Chuong trinh chanh
int main()
{
	int arr[MAXSIZE];
	int size, x, p;
	bool check = false;
	int exit;
	//	Menu
	int chon;
	do {
		cout << "Menu\n1. Nhap mang so nguyen\n"
			<< "2. Xuat mang so nguyen cach nhau boi \", \"\n"
			<< "3. Tim x trong mang\n"
			<< "4. Dao nguoc mang\n"
			<< "5. Xoa mang tai vi tri tuy chon\n"
			<< "Ban chon:\t";
		input(chon, INT_MIN, INT_MAX);
		switch (chon)
		{
		case 1:
			cls();
			cout << "Ban muon nhap may gia tri?\t";
			input(size, 1, MAXSIZE);
			nhap(arr, size);
			check = true;
			break;
		case 2:
			cls();
			if (check == false)
			{
				cout << "Ban chua nhap mang.\n";
				break;
			}
			cout << "Mang da nhap gom:";
			xuat(arr, size);
			break;
		case 3:
			cls();
			if (check == false)
			{
				cout << "Ban chua nhap mang.\n";
				break;
			}
			cout << "Nhap gia tri can tim:\t";
			input(x, INT_MIN, INT_MAX);
			if (tim(arr, size, x) == true)
				cout << "Mang co gia tri " << x << endl;
			else cout << "Mang khong co gia tri " << x << endl;
			break;
		case 4:
			cls();
			if (check == false)
			{
				cout << "Ban chua nhap mang.\n";
				break;
			}
			daonguoc(arr, size);
			cout << "Mang da duoc dao nguoc.\nVui long bam \"Enter\" de tro ve menu va chon 2 de xem ket qua\n";
			break;
		case 5:
			cls();
			if (check == false)
			{
				cout << "Ban chua nhap mang.\n";
				break;
			}
			cout << "Ban muon xoa phan tu tai vi tri nao?\t";
			input(p, 0, size);
			xoa(arr, size, p);
			cout << "Vi tri da duoc xoa.\nVui long bam \"Enter\" de tro ve menu va chon 2 de xem ket qua\n";
			break;
		default:
			cls();
			cout << "Ban co chac muon thoat chuong trinh?\n"
				<< "Khong muon thi chon 0. Muon thi chon 1\n"
				<< "Ban chon:\t";
			input(exit, 0, 1);
			if (exit == 0)
			{
				chon = -100;
				break;
			}
			cout << "Ban chon thoat chuong trinh\n";
		}
		cls();
	} while (chon > 0 && chon < 6 || chon == -100);
	return 0;
}