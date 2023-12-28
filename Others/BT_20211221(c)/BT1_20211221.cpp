#include <iostream>
#define MAXSIZE  100
using namespace std;
//

void input(int &n)
{
	do {
		cout << "Ban can bao nhieu phan tu?\t";
		cin >> n;
		if (n < 1)
			cout << "Nhap sai. Nhap lai.\n";
	} while (n < 1);
}
void inputA(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] =\t";
		cin >> a[i];
	}
}
int tonTai0(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] == 0)
			return 1;
	return 0;
}
int main()
{
	int a[MAXSIZE];
	int n, x;
	input(n);
	inputA(a, n);
	x = tonTai0(a, n);
	cout << "Gia tri tra ve la:\t" << x << endl;
	return 0;
}