/*Input: so do canh
* Output: hinh vuong gom cac dau *
* Type: void
* Algorithm: lap lai viec xuat dau sao tu 1 toi vi tri "so so canh", sau do xuong dong. Lap lai dieu nay tu vi tri 1 toi vi tri "so do canh" thi dung
*/
#include <iostream>
using namespace std;

void input(int& n)
{
	cout << "Nhap vao so do canh cua hinh vuong: ";
	do {
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai. Nhap lai: ";
	} while (n <= 0);
}
void Vuong(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << "*";
		cout << endl;
	}
}

int main()
{
	int n;
	input(n);
	Vuong(n);
	return 0;
}