#include <iostream>
using namespace std;
//

void xet(int &m, int &n)
{
	do {
		cout << "Nhap tu va mau: ";
		cin >> m >> n;
		if (n == 0)
			cout << "Loi chia 0. Nhap lai.\n";
	} while (n == 0);
}
int Euclid(int m, int n)
{
	while (n != 0)
	{
		int r = m % n;
		m = n;
		n = r;
	}
	return m;
}

int main()
{
	int tu, mau, tu2, mau2;
	xet(tu, mau);
	tu2 = tu / Euclid(tu, mau);
	mau2 = mau / Euclid(tu, mau);
	cout << "Phan so rut gon: " << tu2 << " / " << mau2 << endl;
	return 0;
}