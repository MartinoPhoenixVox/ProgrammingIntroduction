#include <iostream>
using namespace std;

void xet2(int& a, int& b)
{
	do {
		cout << "Nhap lan luot 2 so nguyen: ";
		cin >> a >> b;
		if (a != int(a) || b != int(b))
			cout << "Nhap gia tri sai. Nhap lai.\n";
	} while (a != int(a) || b != int(b));
}
void xet3(int& a, int& b, int& c)
{
	do {
		cout << "Nhap lan luot 3 so nguyen: ";
		cin >> a >> b >> c;
		if (a != int(a) || b != int(b) || c != int(c))
			cout << "Nhap gia tri sai. Nhap lai.\n";
	} while (a != int(a) || b != int(b) || c != int(c));
}
void doi(int& a, int& b)
{
	int tam = a;
	a = b;
	b = tam;
}
void giam2(int& a, int& b)
{
	if (a <= b)
		doi(a, b);
	cout << "Hai so duoc sap xep theo thu tu giam dan: " << a << ", " << b << endl;
}
void tang3(int& a, int& b, int &c)
{
	if (a >= b)
		doi(a, b);
	if (b >= c)
		doi(b, c);

	cout << "Ba so duoc sap xep theo thu tu tang dan: " << a << ", " << b << ", " << c << endl;
}
void giam3(int& a, int& b, int& c)
{
	if (a <= b)
		doi(a, b);
	if (b <= c)
		doi(b, c);
	if (a <= b)
		doi(a, b);
	cout << "Ba so duoc sap xep theo thu tu giam dan: " << a << ", " << b << ", " << c << endl;
}

int main()
{
	int a, b, c;
	xet2(a, b);
	giam2(a, b);
	xet3(a, b, c);
	tang3(a, b, c);
	giam3(a, b, c);
	return 0;
}