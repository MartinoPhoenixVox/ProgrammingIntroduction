/*B1: Xac dinh muc dich: tim so lon nhat giua 2 so nguyen
* B2: Du lieu se nhan: 2 so nguyen x va y
* B3: Du lieu tra ve: max
* B4: Thuat giai:
*					Neu x >= y thi max = x, nguoc lai max = y
*/
#include <iostream>
using namespace std;

int timSoNguyenMax(int x, int y); //27

int main()
{
	int a, b, c, so1, so2, Max;
	cout << "Nhap lan luot 3 so nguyen: ";
	cin >> a >> b >> c;
	so1 = timSoNguyenMax(a, b);
	so2 = timSoNguyenMax(a, c);
	if (so1 >= so2)
		Max = so1;
	else
		Max = so2;
	cout << "So lon nhat la: " << Max << endl;
	return 0;
}

int timSoNguyenMax(int x, int y)
{
	int max;
	x >= y ? max = x : max = y;
	return max;
}