#include <iostream>
using namespace std;

void inputThangNam(int& thang, int& nam)
{
	do {
		cout << "Nhap thang, nam:\t";
		cin >> thang >> nam;
		if (nam != int(nam) || thang < 1 || thang > 12)
			cout << "Nhap sai. Nhap lai.\n";
	} while (nam != int(nam) || thang < 1 || thang > 12);
}
void inputNgay(int& ngay, int thang, int nam)
{
	do {
		cout << "Nhap ngay:\t";
		cin >> ngay;
		if (nam % 4 == 0 && nam % 100 != 0 && thang == 2)
			if (ngay > 29 || ngay < 1)
				cout << "Nhap sai. Nhap lai.\n";
		else if (ngay > 28 || ngay < 1)
				cout << "Nhap sai. Nhap lai.\n";
		break;
	} while (ngay < 1 || ngay > 31);
}
int soNgay(int ngay, int thang, int nam)
{
	int so = 0;
	for (int i = 1; i < thang; i++)
	{
		if (i < thang)
		{
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
				so += 31;
			if (i == 4 || i == 6 || i == 9 || i == 11)
				so += 30;
			if (i == 2)
				if (nam % 4 == 0 && nam % 100 != 0)
					so += 29;
				else so += 28;
		}
	}
	so += ngay;
	return so;
}

int main()
{
	int ngay, thang, nam;
	inputThangNam(thang, nam);
	inputNgay(ngay, thang, nam);
	cout << "3 gia tri ngay-thang-nam la " << ngay << "-" << thang << "-" << nam << " thi ket qua la " << soNgay(ngay, thang, nam) << endl;
	return 0;
}