#include <iostream>
#include <string>
using namespace std;

bool kiemInHoa(char chu)
{
	bool kiemInHoa;
	if (chu >= 'A' && chu <= 'Z')
		return kiemInHoa = true;
	return kiemInHoa = false;
}
bool kiemInThuong(char chu)
{
	bool kiemInThuong;
	if (chu >= 'a' && chu <= 'z')
		return kiemInThuong = true;
	return kiemInThuong = false;
}

int main()
{
	string s;
	int demInHoa = 0, demInThuong = 0;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (kiemInHoa(s.at(i)) == true)
			demInHoa++;
		else if (kiemInThuong(s.at(i)) == true)
			demInThuong++;
	}
	cout << "Chuoi vua nhap co " << demInHoa << " chu in hoa va " << demInThuong << " chu in thuong.\n";
	return 0;
}