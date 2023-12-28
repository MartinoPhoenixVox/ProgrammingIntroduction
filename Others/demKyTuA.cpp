#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>
using namespace std;

int demKyTuA(char s[])
{
	int d = 0;
	int n = strlen(s);
	for (int i = 0; i < n; i++)
		if (s[i] == 'a' || s[i] == 'A')
			d++;
	return d;
}

int main()
{
	int d;
	char s[100];
	cout << "Nhap vao 1 chuoi ky tu bat ky: ";
	gets_s(s);
	d = demKyTuA(s);
	cout << "Co " << d << " chu A(a) trong chuoi.\n";
	_getch();
	return 0;
}