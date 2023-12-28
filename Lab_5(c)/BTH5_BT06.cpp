/*Input: chieu dai d, chieu rong r
* Output: hinh chu nhat duoi dang *
* Algorithm: 
*	B1: Khai bao 
*	B2: Nhap chieu dai va chieu rong. Lap va bao loi neu nhap sai
*	B3: Dung vong lap doi de khi ket thuc mot lan lap trong thi se tu dong xuong hang va lam thanh lan lap moi
*	B4: Xuat hinh chu nhat
*/
#include <iostream>
using namespace std;

int main()
{
	//B1:
	int d, r;
	//B2:
	cout << "Nhap chieu dai va chieu rong: ";
	do {
		cin >> d >> r;
		if (d <= 0 || r <= 0)
			cout << "Nhap sai. Nhap lai: ";
	} while (d <= 0 || r <= 0);
	//B3 + B4:
	cout << "Hinh chu nhat duoc tao ra duoi day:\n";
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= d; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}