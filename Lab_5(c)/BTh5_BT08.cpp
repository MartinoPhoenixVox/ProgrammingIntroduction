/*Input: so nguyen duong n
* Output: tong so le tu 1 toi n
* Algorithm:
*	B1: Khai bao
*	B2: Nhap n. Lap va bao loi neu sai
*	B3: Dung vong lap chay tu 1 toi n. Neu so duoc chay khong chia het cho 2 thi cong don vao tong
*	B4: Xuat tong
*/
#include <iostream>
using namespace std;

int main()
{
	//B1:
	int n, tong = 0;
	//B2:
	cout << "Nhap n: ";
	do {
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai. Nhap lai: ";
	} while (n <= 0);
	//B3:
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
			tong += i;
	}
	//B4:
	cout << "Tong cac so tu 1 toi n bang " << tong << endl;
	return 0;
}