/*Input: so nguyen n
* Output: n co phai so doi xung khong?
* Type: 1) int; 2) bool
* Algorithm 1:
*	S1: Lap toi khi n <= 0:
*	S2: Cho bien tam = n chia du 10
*	S3: Cho bien so dao nguoc = so dao nguoc * 10 + tam
*	S4: Cho n chia nguyen cho 10
* Algorithm 2:
*	S1: Neu so dao nguoc cua n bang n thi do la so doi xung. Nguoc lai, n khong la so doi xung
*/
#include <iostream>
using namespace std;

void input(double& n, int& m)
{
	cout << "Nhap mot so nguyen: ";
	do {
		cin >> n;
		if (n != int(n))
			cout << "Nhap sai. Nhap lai: ";
		else m = int(n);
	} while (n != int(n));
}
int soDao(int n, int& daoSo)
{
	int tam;
	while (n > 0)
	{
		tam = n % 10;
		daoSo = daoSo * 10 + tam;
		n /= 10;
	}

	return daoSo;
}
bool doiXung(int n, int daoSo)
{
	bool doiXung = false;
	if (daoSo == n)
		doiXung = true;
	return doiXung;
}

int main()
{
	double n;
	int daoSo = 0, m;
	input(n, m);
	soDao(m, daoSo);
	if (doiXung(m, daoSo))
		cout << m << " la so doi xung.\n";
	else cout << m << " khong la so doi xung.\n";
	return 0;
}