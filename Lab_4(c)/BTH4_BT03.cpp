/*Input: n (n > 1)
*Output: Tong cac so le va tong cac so chan (tu 1 toi n)
* B1: Khai bao n, tongLe, tongChan, i
* B2: Lap: Neu n <= 1 thi bao sai, nhap lai. Nguoc lai thi tiep
* B3: i = 1, tongLe =0, tongChan = 0
* B4: Lap: Neu i <= n thi:
*			+tongLe = tongLe + i
*			+i++
*			+Neu i <= n
*			++tongChan = tongChan + i
*			++i++
* B5: Xuat tongLe, tongChan
Date: Nov-23, 2021*/
#include <iostream>
using namespace std;

int main()
{
	//B1:
	int n;
	cout << "Nhap so nguyen n > 1: ";
	//B2:
	do {
		cin >> n;
		if (n <= 1)
			cout << "Nhap gia tri sai. Xin nhap lai: ";
	} while (n <= 1);
	//B3:
	int tongLe = 0, tongChan = 0, i = 1;
	//B4:
	while (i <= n)
	{
		tongLe = tongLe + i;
		i++;
		if (i <= n)
		{
			tongChan += i;
			i++;
		}
	}
	//B5:
	cout << "Vay tong le cua " << n << " la " << tongLe << endl
		<< "Con tong chan cua " << n << " la " << tongChan << endl;
	return 0;
}