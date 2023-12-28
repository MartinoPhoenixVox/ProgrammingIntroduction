#include <iostream>
#include <string>
using namespace std;

bool kiemSo(char so)
{
	bool kiemSo;
	if (so >= '0' && so <= '9')
		return kiemSo = true;
	return kiemSo = false;
}
bool kiemChu(char chu)
{
	bool kiemChu;
	if (chu >= 'a' && chu <= 'z' || chu >= 'A' && chu <= 'Z')
		return kiemChu = true;
	return kiemChu = false;
}

int main()
{
	string s;
	int demSo = 0, demChu = 0;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (kiemSo(s.at(i)) == true)
			demSo++;
		else if (kiemChu(s.at(i)) == true)
			demChu++;
	}
	cout << "Chuoi vua nhap co " << demSo << " so va " << demChu << " chu.\n";
	return 0;
}