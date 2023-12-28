/*Input: chieu cao h
* Output: tam giac voi chieu cao duoi dang *
* Algorithm:
*	B1: Khai bao
*	B2: Nhap h. Lap va bao loi neu sai
*	B3: Lap lai viec xuat dau * cong don theo tung dong toi khi du h *
*/
#include <iostream>
using namespace std;

int main()
{
	//B1:
	int h;
	//B2:
	cout << "Nhap chieu cao cua tam giac: ";
	do {
		cin >> h;
		if (h <= 0)
			cout << "Nhap sai. Nhap lai: ";
	} while (h <= 0);
	//B3:
	cout << "Hinh tam giac theo chieu cao da nhap duoc tao duoi day:\n";
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}