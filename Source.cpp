#include<iostream>
#include<conio.h>

/* Created by Rizky Khapidsyah */

using namespace std;

int main()
{
	int data[10] = { 4, 1, 0, -9, 8, 5, -1, 2, 3, -7 };
	int elemen, ketemu, x;

	cout << "Data yang dicari : ";
	cin >> x;
	
	ketemu = 0;
	
	for (elemen = 0; elemen <= 9; elemen++)
	{
		if (data[elemen] == x)
		{
			ketemu = !ketemu;
			break;
		}
	}
	if (ketemu == 0) cout << "Data tidak ditemukan ";
	else cout << "Data ada di elemen : " << elemen;

	_getch();
	return 0;
}