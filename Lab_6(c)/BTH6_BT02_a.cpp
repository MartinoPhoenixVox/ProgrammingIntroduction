/*B1: Xac dinh muc dich: tim so lon nhat giua 2 so nguyen
* B2: Du lieu se nhan: 2 so nguyen x va y
* B3: Du lieu tra ve: max
* B4: Thuat giai:
*					Neu x >= y thi max = x, nguoc lai max = y
*/
#include <iostream>
using namespace std;

int timSoNguyenMax(int x, int y); //21

int main()
{
	int a, b;
	cout << "Nhap lan luot 2 so nguyen: ";
	cin >> a >> b;
	cout << "So nguyen lon nhat la: " << timSoNguyenMax(a, b) << endl;
	return 0;
}

int timSoNguyenMax(int x, int y)
{
	int max;
	x >= y ? max = x : max = y;
	return max;
}