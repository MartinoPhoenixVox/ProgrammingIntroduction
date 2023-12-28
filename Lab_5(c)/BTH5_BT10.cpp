/*Input: so nguyen duong n1 < n2
* Output: bao nhieu so chan, so le, so la uoc cua 10
* Algorithm:
*	B1: Khai bao
*	B2: Nhap n1 va n2. Lap va bao loi neu 0 >= n1 hoac n1 >= n2
*	B3: Lap tu n1 toi n2. Neu so dang xet chia het cho 2 thi la so chan, neu khong thi la so le, neu 10 chia het cho no thi no la uoc cua 10
*	B4: Thoa cau hoi
*/
#include <iostream>
using namespace std;

int main()
{
	//B1:
	int n1, n2, soLe = 0, soChan = 0, uoc10 = 0;
	//B2:
	cout << "Nhap lan luot n1 va n2: ";
	do {
		cin >> n1 >> n2;
		if (0 >= n1 || n1 >= n2)
			cout << "Nhap sai. Nhap lai: ";
	} while (0 >= n1 || n1 >= n2);
	//B3:
	for (int i = n1; i <= n2; i++)
	{
		if (i % 2 == 0)
			soChan++;
		else soLe++;
		if (10 % i == 0)
			uoc10++;
	}
	//B4:
	cout << "Vay tu " << n1 << " toi " << n2 << " co " << soChan << " so chan; " << soLe << " so le; " << uoc10 << " so la uoc cua 10.\n";
	return 0;
}