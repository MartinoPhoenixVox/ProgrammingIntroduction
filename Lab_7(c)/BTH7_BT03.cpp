#include <iostream>
using namespace std;

void input1(int &n)
{
	do {
		cout << "Nhap mot so nguyen duong:\t";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai. Nhap lai.\n";
	} while (n <= 0);
}
void input2(int& n, int& k)
{
	do {
		cout << "Nhap hai so nguyen duong thu tu giam dan:\t";
		cin >> n >> k;
		if (k <= 0 || k > n)
			cout << "Nhap sai. Nhap lai.\n";
	} while (k <= 0 || k > n);
}
int giaiThua(int n)
//a)
//Output: tinh giai thua
//Input: mot so nguyen duong
//Type: int
//Algorithm:
//	Cho giai thua ban dau bang 1
//	Lap lai tu 2 toi n, moi lan lap nhan don voi bien dem cung duoc cong don qua moi lan lap
{
	int giaiThua = 1;
	for (int i = 2; i <= n; i++)
		giaiThua *= i;
	return giaiThua;
}
double toHop(int n, int k)
//b)
//Output: to hop n chap k
//Input: n, k
//Type: int
//Algorithm:
//	Tinh theo cong thuc: toHop = n! / (k!(n - k)!)
{
	int toHop = giaiThua(n) / (giaiThua(k) * giaiThua(n - k));
	return toHop;
}
void tamGiacPascal(int h)
//Output: tam giac Pascal
//input: chieu cao 
//Type: void
//Algorithm: 
//	2 vong lap long nhau, voi: tam giac Pascal la to hop cac so cua chieu cao tru di 1 
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << toHop(i, j) << "\t";
		cout << endl;
	}
}

int main()
{
	int n, k, h;
	input1(n);
	cout << "n! = " << giaiThua(n) << endl; //a
	input2(n, k);
	cout << "C(n, k) = " << toHop(n, k) << endl; //b
	input1(h);
	cout << "Tam giac Pascal chieu cao h:\n ";
	tamGiacPascal(h); //c
	cout << endl;
}