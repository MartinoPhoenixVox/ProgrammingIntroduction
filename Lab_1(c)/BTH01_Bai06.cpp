/*Vo Huynh Thanh Phuong_ 2151013072
* DH21CS01
* Date: Nov-2, 2021
* Viet chuong trinh in ra man hinh dong chu "Xin chao, ten toi la Hoa!".
* Sau do xuong hang va in ra cau hoi "Ten ban la gi?".
* Nguoi su dung se nhap vao ten va chuong trinh in ra dong chu "Chao ban, ???!".
Thay the ??? bang ten do nguoi dung nhap.*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string username;
	cout << "Xin chao, ten toi la Hoa!\n"
		<< "Ten ban la gi?\n";
	getline(cin, username);
	cout << "Chao ban, " << username << "!\n";
	return 0;
}