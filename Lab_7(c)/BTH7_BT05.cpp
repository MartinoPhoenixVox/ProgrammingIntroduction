#include <iostream>
using namespace std;
//

void xet(int &a, int &b)
{
	do {
		cout << "Nhap lan luot 2 so nguyen: ";
		cin >> a >> b;
		if (a != int(a) || b != int(b))
			cout << "Nhap gia tri sai. Nhap lai.\n";
	} while (a != int(a) || b != int(b));
}
void doi(int& a, int& b)
{
	int tam = a;
	a = b;
	b = tam;
}
void tang(int &a, int &b)
{
	if (a >= b)
		doi(a, b);
	cout << "Hai so duoc sap xep theo thu tu tang dan: " << a << ", " << b << endl;
}

int main()
{
	int a, b;
	xet(a, b);
	tang(a, b);
	return 0;
}