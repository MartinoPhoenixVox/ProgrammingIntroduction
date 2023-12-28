/*Date: Dec-14, 2021
Muc tieu: tong cac chu so cua n
Dau vao: so nguyen n
Kieu int
Thuat giai: 
	Cho tong bang 0
	Cho tam bang n
	Lap voi dieu kien: tam > 0, khi do thuc hien:
		cs bang tam chia du cho 10
		tong cong don cs
		tam chia nguyen don cho 10
	Tra ve
*/
#include <iostream>
using namespace std;

int tong(int x);

int main()
{
	int n;
	do {
		cout << "Nhap n: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai roi. Moi nhap lai.\n";
	} while (n <= 0);
	//Dap an:
	cout << "Tong cac chu so trong " << n << " bang " << tong(n) << endl;
	return 0;
}

int tong(int x)
{
	int tong = 0;
	int tam = x;
	while (tam > 0)
	{
		int cs = tam % 10;
		tong += cs;
		tam /= 10;
	}
	return tong;
}