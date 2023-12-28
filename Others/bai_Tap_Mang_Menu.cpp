#include <iostream>
#include <iomanip>
#include <conio.h>
#define MAXSIZE 100
using namespace std;
void inputSize(int& n)
{
	do {
		cout << "Mang can nhap chua bao nhieu gia tri?\t";
		cin >> n;
		if (n < 0)
			cout << "Nhap thong tin sai. Yeu cau nhap 1 so nguyen duong nho hon " << MAXSIZE << endl;
	} while (n < 0);
}
void inputArrayDouble(int n, double aD[])
{
	cout << "Nhap mang so thuc:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "arrayDouble[" << i << "]\t=\t";
		cin >> aD[i];
		cout << endl;
	}
}
void outputArrayDouble(int n, const double aD[])
{
	cout << "Mang so thuc gom " << n << " gia tri:";
	for (int i = 0; i < n; i++)
	{
		if (i % 10 == 0)
			cout << endl;
		cout << fixed << setprecision(2) << aD[i] << "\t";
	}
	cout << endl;
}
void inputArrayInt(int n,int aI[])
{
	cout << "Nhap mang so nguyen:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "arrayInt[" << i << "]\t=\t";
		cin >> aI[i];
		cout << endl;
	}
}
void outputArrayInt(int n, const int aI[])
{
	cout << "Mang so nguyen gom "  << n << " gia tri : ";
	for (int i = 0; i < n; i++)
	{
		if (i % 10 == 0)
			cout << endl;
		cout << aI[i] << "\t";
	}
	cout << endl;
}
void outputArrayIntb(int n, const int aI[])
{
	cout << "Mang so nguyen b gom " << n << " gia tri : ";
	for (int i = 0; i < n; i++)
	{
		if (i % 10 == 0)
			cout << endl;
		cout << aI[i] << "\t";
	}
	cout << endl;
}
void outputArrayIntc(int n, const int aI[])
{
	cout << "Mang so nguyen c gom " << n << " gia tri : ";
	for (int i = 0; i < n; i++)
	{
		if (i % 10 == 0)
			cout << endl;
		cout << aI[i] << "\t";
	}
	cout << endl;
}
//01. Viet ham kiem tra mang so nguyen co ton tai gia tri 0 hay khong? Neu co thi tra ve 1, nguoc lai tra ve 0.
int checkArrayInt_0(int n, const int aI[])
{
	for (int i = 0; i < n; i++)
	{
		if (aI[i] == 0)
			return 1;
	}
	return 0;
}
//02. Viet ham tim doan [a, b] sao cho doan nay chua tat ca cac gia tri cua mang 1 chieu cac so nguyen.
void findMaxMin(int n, const int aI[], int& max, int& min)
{
	for (int i = 0; i < n; i++)
	{
		if (aI[i] > max)
			max = aI[i];
		else if (aI[i] < min)
			min = aI[i];
	}
}
void outputClosedInterval(int max, int min)
{
	cout << "Doan [" << min << ", " << max << "] chua tat ca ca gia tri cua mang 1 chieu cac so nguyen.\n";
}
//03. Viet ham liet ke cac gia tri am trong mang 1 chieu cac so nguyen.
void listNegativeNumber(int n, const int aI[])
{
	cout << "Cac gia tri am trong mang 1 chieu cac so nguyen:";
	for (int i = 0; i < n; i++)
	{
		if (i % 10 == 0)
			cout << endl;
		if (aI[i] < 0)
			cout << aI[i] << "\t";
		else continue;
	}
}
//04. Viet ham liet ke cac gia tri trong mang 1 chieu cac so thuc thuoc doan [x, y] cho truoc.
void inputClosedInterval(double& x, double& y)
{
	do {
		cout << "Nhap lan luot gia tri nho nhat va lon nhat cua doan can tim:\t";
		cin >> x >> y;
		if (x < INT_MIN || y < x || y > INT_MAX)
			cout << "Nhap thong tin sai. Nhap lai.\n";
	} while (x < INT_MIN || y < x || y > INT_MAX);
}
void listClosedInterval(int n, const double aD[], double x, double y)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 10 == 0)
			cout << endl;
		if (aD[i] >= x && aD[i] <= y)
			cout << aD[i] << "\t";
	}
	cout << endl;
}
//05. Viet ham them 1 phan tu vao mang so nguyen.
void addSize(int& n)
{
	n++;
}
void whereToAddElement(int n, int& m)
{
	do {
		cout << "Ban muon them vao vi tri thu bao nhieu?\t";
		cin >> m;
		if (m >= n || m < 0)
			cout << "Nhap sai. Yeu cau nhap vi tri tu 0 den " << n - 1 << endl;
	} while (m >= n || m < 0);
}
void addElement(int n, int aI[], int m)
{
	for (int i = n - 2; i >= m; i--)
	{
		aI[i + 1] = aI[i];
		if (i == m)
			cout << endl << "Gia tri them vao mang:\t";
			cin >> aI[m];
	}
}
//06. Viet ham xoa mot phan tu khoi mang so nguyen.
void whereToLoseElement(int n, int& m)
{
	do {
		cout << "Ban muon xoa vi tri thu bao nhieu?\t";
		cin >> m;
		if (m >= n || m < 0)
			cout << "Nhap sai. Yeu cau nhap vi tri tu 0 den " << n - 2 << endl;
	} while (m >= n || m < 0);
}
void loseElement(int n, int aI[], int m)
{
	for (int i = m; i < n; i++)
	{
		aI[i] = aI[i + 1];
	}
}
void eraseSize(int& n)
{
	n--;
}
//07. Viet ham sap xep cac phan tu cua mang so nguyen tang dan.
void swap(int& a, int& b)
{
	int tam = a;
	a = b;
	b = tam;
}
void arrangeElement1(int n, int aI[])
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (aI[j] > aI[i])
				swap(aI[j], aI[i]);
		}
	}
}
//08. Viet ham sap xep cac phan tu cua mang so nguyen sao cho cac phan tu chan tang dan, cac phan tu le thi giam dan.
void arrangeElement2(int n, int aI[])
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (aI[i] % 2 == 0 && aI[j] % 2 == 0)
				if (aI[i] < aI[j])
					swap(aI[i], aI[j]);
			if (aI[i] % 2 != 0 && aI[j] % 2 != 0)
				if (aI[i] > aI[j])
					swap(aI[i], aI[j]);
		}
	}
}
//09. Viet ham tu mang a luu so nguyen sao chep cac gia tri duong sang mang b va so am sang mang c. Ham phai tra ve mang b va c sau khi sao chep.
void copyElement(int n, int& b, int& c, const int aI[], int aIb[], int aIc[])
{
	int tam1 = 0, tam2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (aI[i] < 0)
		{
			c++;
			aIc[tam2] = aI[i];
			tam2++;
			continue;
		}
		if (aI[i] > 0)
		{
			b++;
			aIb[tam1] = aI[i];
			tam1++;
		}
	}
	outputArrayIntb(b, aIb);
	outputArrayIntc(c, aIc);
}
void choosing(int& a)
{
	cout << "Menu:\n01. Nhap mang.\n"
		<< "02. Xuat mang.\n"
		<< "03. Viet ham kiem tra mang so nguyen co ton tai gia tri 0 hay khong? Neu co thi tra ve 1, nguoc lai tra ve 0.\n"
		<< "04. Viet ham tim doan [a, b] sao cho doan nay chua tat ca cac gia tri cua mang 1 chieu cac so nguyen.\n"
		<< "05. Viet ham liet ke cac gia tri am trong mang 1 chieu cac so nguyen.\n"
		<< "06. Viet ham liet ke cac gia tri trong mang 1 chieu cac so thuc thuoc doan [x, y] cho truoc.\n"
		<< "07. Viet ham them 1 phan tu vao mang so nguyen.\n"
		<< "08. Viet ham xoa mot phan tu khoi mang so nguyen.\n"
		<< "09. Viet ham sap xep cac phan tu cua mang so nguyen tang dan.\n"
		<< "10. Viet ham sap xep cac phan tu cua mang so nguyen sao cho cac phan tu chan tang dan, cac phan tu le thi giam dan.\n"
		<< "11. Viet ham tu mang a luu so nguyen sao chep cac gia tri duong sang mang b va so am sang mang c. Ham phai tra ve mang b va c sau khi sao chep.\n"
		<< "Ban chon:\t";
	cin >> a;
	system("cls");
}
int main()
{
	int sizeInt, sizeDouble, sizeIntb = 0, sizeIntc = 0, max = INT_MIN, min = INT_MAX, m, choose, choose1, a = 0, b = 0;
	double x, y;
	double arrayDouble[MAXSIZE];
	int arrayInt[MAXSIZE];
	int arrayIntb[MAXSIZE];
	int arrayIntc[MAXSIZE];
	do {
		system("cls");
		choosing(choose);
		if (choose > 11 || choose < 1)
		{
			cout << "Ket thuc chuong trinh. Nhan phim bat ky de thoat.\n";
			return 0;
			break;
		}
		switch (choose)
		{
		//01. Nhap mang:
		case 1:
			cout << "Nhap:\n01. Mang so nguyen\n02. Mang so thuc\nBan chon:\t";
			do {
				cin >> choose1;
				if (choose1 > 2 || choose1 < 1)
					cout << "Nhap thong tin sai. Nhap lai.\nBan chon:\t";
			} while (choose1 > 2 || choose1 < 1);
			switch (choose1)
			{
			case 1:
				inputSize(sizeInt);
				inputArrayInt(sizeInt, arrayInt);
				a++;
				break;
			default:
				inputSize(sizeDouble);
				inputArrayDouble(sizeDouble, arrayDouble);
				b++;
			}
			break;
		//02. Xuat mang:
		case 2:
			cout << "Xuat: \n01.Mang so nguyen\n02.Mang so thuc\nBan chon : \t";
			do {
				cin >> choose1;
				if (choose1 > 2 || choose1 < 1)
					cout << "Nhap thong tin sai. Nhap lai.\nBan chon:\t";
			} while (choose1 > 2 || choose1 < 1);
			switch (choose1)
			{
			case 1:
				if (a < 1)
				{
					cout << "Mang so nguyen chua duoc nhap. Yeu cau nhap mang.\n";
					break;
				}
				outputArrayInt(sizeInt, arrayInt);
				break;
			default:
				if (b < 1)
				{
					cout << "Mang so thuc chua duoc nhap. Yeu cau nhap mang.\n";
					break;
				}
				outputArrayDouble(sizeDouble, arrayDouble);
			}
			break;
		//03. Viet ham kiem tra mang so nguyen co ton tai gia tri 0 hay khong? Neu co thi tra ve 1, nguoc lai tra ve 0:
		case 3:
			if (a < 1)
			{
				cout << "Mang so nguyen chua duoc nhap. Yeu cau nhap mang.\n";
				break;
			}
			cout << "Gia tri tra ve:\t" << checkArrayInt_0(sizeInt, arrayInt) << endl;
			break;
		//04. Viet ham tim doan [a, b] sao cho doan nay chua tat ca cac gia tri cua mang 1 chieu cac so nguyen:
		case 4:
			if (a < 1)
			{
				cout << "Mang so nguyen chua duoc nhap. Yeu cau nhap mang.\n";
				break;
			}
			findMaxMin(sizeInt, arrayInt, max, min);
			outputClosedInterval(max, min);
			break;
		//05. Viet ham liet ke cac gia tri am trong mang 1 chieu cac so nguyen
		case 5:
			if (a < 1)
			{
				cout << "Mang so nguyen chua duoc nhap. Yeu cau nhap mang.\n";
				break;
			}
			listNegativeNumber(sizeInt, arrayInt);
			break;
		//06. Viet ham liet ke cac gia tri trong mang 1 chieu cac so thuc thuoc doan [x, y] cho truoc:
		case 6:
			if (b < 1)
			{
				cout << "Mang so thuc chua duoc nhap. Yeu cau nhap mang.\n";
				break;
			}
			inputClosedInterval(x, y);
			listClosedInterval(sizeDouble, arrayDouble, x, y);
			break;
		//07. Viet ham them 1 phan tu vao mang so nguyen:
		case 7:
			if (a < 1)
			{
				cout << "Mang so nguyen chua duoc nhap. Yeu cau nhap mang.\n";
				break;
			}
			addSize(sizeInt);
			whereToAddElement(sizeInt, m);
			addElement(sizeInt, arrayInt, m);
			cout << "Da hoan thanh. Vao muc \"02. Xuat mang\" de xem ket qua.\n";
			break;
		//08. Viet ham xoa mot phan tu khoi mang so nguyen:
		case 8:
			if (a < 1)
			{
				cout << "Mang so nguyen chua duoc nhap. Yeu cau nhap mang.\n";
				break;
			}
			whereToLoseElement(sizeInt, m);
			loseElement(sizeInt, arrayInt, m);
			eraseSize(sizeInt);
			cout << "Da hoan thanh. Vao muc \"02. Xuat mang.\" de xem ket qua.\n";
			break; 
		//09. Viet ham sap xep cac phan tu cua mang so nguyen tang dan:
		case 9:
			if (a < 1)
			{
				cout << "Mang so nguyen chua duoc nhap. Yeu cau nhap mang.\n";
				break;
			}
			arrangeElement1(sizeInt, arrayInt);
			cout << "Da hoan thanh. Vao muc \"02. Xuat mang.\" de xem ket qua.\n";
			break;
		//10. Viet ham sap xep cac phan tu cua mang so nguyen sao cho cac phan tu chan tang dan, cac phan tu le thi giam dan:
		case 10:
			if (a < 1)
			{
				cout << "Mang so nguyen chua duoc nhap. Yeu cau nhap mang.\n";
				break;
			}
			arrangeElement2(sizeInt, arrayInt);
			cout << "Da hoan thanh. Vao muc \"02. Xuat mang.\" de xem ket qua.\n";
			break;
		//11. Viet ham tu mang a luu so nguyen sao chep cac gia tri duong sang mang b va so am sang mang c. Ham phai tra ve mang b va c sau khi sao chep:
		default:
			if (a < 1)
			{
				cout << "Mang so nguyen chua duoc nhap. Yeu cau nhap mang.\n";
				break;
			}
			copyElement(sizeInt, sizeIntb, sizeIntc, arrayInt, arrayIntb, arrayIntc);
		}
		_getch();
	} while (choose < 12 && choose > 0);
}