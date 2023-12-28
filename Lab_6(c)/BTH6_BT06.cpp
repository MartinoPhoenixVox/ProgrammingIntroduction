/*Input: so nguyen duong n
* Output: so dao nguoc cua n
* Type: int
* Algorithm:
*	S1: Lay n chia du cho 10. Lay ket qua vua ra gan vao cho bien tam
*	S2: Lay bien dau ra nhan cho 10 va cong cho tam
*	S3: Lay n chia nguyen cho 10
*	S4: Lap lai qua trinh den khi n = 0
*/
#include <iostream>
using namespace std;

void input(int& n)
{
	cout << "Nhap 1 so nguyen duong: ";
	do {
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai. Nhap lai: ";
	} while (n <= 0);
}
int daoSo(int n)
{
	int tam = 0, daoSo = 0;
	while (n > 0)
	{
		tam = n % 10;
		daoSo = daoSo * 10 + tam;
		n /= 10;
	}
	return daoSo;
}

int main()
{
	int n;
	input(n);
	cout << "So dao nguoc cua " << n << " la " << daoSo(n) << endl;
	return 0;
}