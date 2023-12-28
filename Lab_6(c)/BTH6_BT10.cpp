/*Input: so nguyen n
* Output: n co phai so hoan thien khong?
* Type: bool
* Algorithm:
*	S1: Neu n <= 0 thi no khong la so hoan thien. Nguoc lai thi ta co S2
*	S2:	Xet tu 1 toi n - 1. Neu co mot so ma n chia het thi do la uoc cua n	(ham tim tong uoc)
*	S3: Lay cac uoc cua n cong lai voi nhau									(ham tim tong uoc)
*	S4: Neu tong cac uoc bang n thi la so hoan hao. Nguoc lai, n khong la so hoan hao
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
int tongUocn(int n,int& tongUoc)
{
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			tongUoc += i;
	return tongUoc;
}
bool hoanHao(int n, int tongUoc)
{
	bool hoanHao = false;
	if (tongUoc == n)
		hoanHao = true;
	return hoanHao;
}

int main()
{
	double n; 
	int tongUoc = 0, m;
	input(n, m);
	tongUocn(m, tongUoc);
	if (hoanHao(m, tongUoc) == true)
		cout << m << " la so hoan hao.\n";
	else cout << m << " khong la so hoan hao.\n";
	return 0;
}