/*Input: so nguyen duong n
* Output: bang cuu chuong ung voi n
* Algorithm:
*	B1: Khai bao
*	B2: Nhap n. Lap va bao loi neu sai
*	B3: Lap tu 1 toi 10. Xuat phuong trinh va xuong dong
*/
#include <iostream>
using namespace std;

int main()
{
	//B1:
	int n;
	//B2:
	cout << "Nhap n: ";
	do {
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai. Nhap lai: ";
	} while (n <= 0);
	//B3:
	cout << "Bang cuu chuong " << n << ":\n";
	for (int i = 1; i <= 10; i++)
	{
		cout << n << "\tx\t" << i << "\t=\t" << n * i << endl;
	}
	return 0;
}