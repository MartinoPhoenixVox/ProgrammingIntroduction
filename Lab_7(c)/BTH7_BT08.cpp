#include <iostream>
using namespace std;

void input(int& n)
{
	do {
		cout << "Nhap mot so nguyen duong:\t";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai. Nhap lai.\n";
	} while (n <= 0);
}
int Fibonacci(int n)
{
	int a = 0, b = 1, so = 0;
	for (int i = 3; i <= n; i++)
	{
		so = a + b;
		a = b;
		b = so;
	}
	return so;
}

int main()
{
	int n;
	input(n);
	cout << Fibonacci(n);
	return 0;
}