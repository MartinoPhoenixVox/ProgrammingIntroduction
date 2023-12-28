//Nhap xuat mang so nguyen toi da 100 phan tu, cho biet mang co so am khong
//So chinh phuong la so co can bac 2 la so nguyen. Trong mang co so chinh phuong hay khong
//So hoan hao co tong cac uoc cua no khong ke chinh no, bang no. Vi tri xuat hien so hoan hao cuoi cung trong mang
//So nguyen to la so ma no khong chia het cho cac so tu 1 toi can bac 2 cua chinh no .Trong mang co bao nhieu so nguyen to
//Mang doi xung, vi du:  1 2 3 3 2 1 la mang doi xung, 1 2 3 4 3 2 1 la mang doi xung, 1 2 3 4 5 2 1 khong la mang doi xung. Mang co doi xung hay khong
#include <iostream>
using namespace std;

int main()
{
	int a[100];
	int n;
	bool laSCP = true, laSNT = true;
	do {
		cout << "Nhap so luong phan tu can: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai. Nhap lai.\n";
	} while (n <= 0);
	//So chinh phuong:
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "soChinhPhuong[" << i << "] = ";
		cin >> a[i];
	}
	for (int i = 0; i <= n - 1; i++)
	{
		int x = sqrt(a[i]);
		if (x % 1 == 0)
		{
			laSCP = true;
			break;
		}
		else
			laSCP = false;
	}
	if (laSCP = true)
		cout << "Mang nay co so chinh phuong.\n\n";
	else
		cout << "Mang nay khong co so chinh phuong.\n\n";
	//So nguyen to:
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "soNguyenTo[" << i << "] = ";
		cin >> a[i];
	}
	for (int i = 0; i <= n - 1; i++)
	{
		if (a[i] <= 1)
			continue;
		int x = sqrt(a[i]);
		int j = 2;
		while (j <= x && laSNT == true)
		{
			if (a[i] % j == 0)
			{
				laSNT = false;
				break;
			}
			j++;
		}

	}
	if (laSNT = true)
		cout << "Mang nay co so nguyen to.\n\n";
	else
		cout << "Mang nay khong co so nguyen to.\n\n";
}