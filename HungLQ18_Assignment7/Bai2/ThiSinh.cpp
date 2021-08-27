#include <iostream>
#include "ThiSinh.h"
#include <iomanip>
#include <algorithm>
using namespace std;

void ThiSinh::input()
{
	cout << "\nSo bao danh: ";
	cin >> sbd;
	cout << "Ho va ten: ";
	cin >> Name.ho >> Name.tendem >> Name.ten;
	cout << "Tuoi: ";
	cin >> tuoi;
	cin.ignore();
	cout << "Que quan: ";
	cout << "\n\tXa: ";
	cin.getline(Home.xa, 10);
	cout << "\tHuyen: ";
	cin.getline(Home.huyen, 10);
	cout << "\tTinh: ";
	cin.getline(Home.tinh, 10);
	cout << "Truong: ";
	cin.getline(truong, 20);
	cout << "Diem thi: ";
	cout << "\n\tDiem Toan: "; cin >> Point.toan;
	cout << "\tDiem Ly "; cin >> Point.ly;
	cout << "\tDiem Hoa: "; cin >> Point.hoa;
	Point.tongdiem = Point.toan + Point.ly + Point.hoa;
}


void ThiSinh::ListThiSinh(ThiSinh *a, int n)
{
	cout << "\n\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin thi sinh thu " << i + 1;
		a[i].input();
	}
	cout << "\n\n";
	cout << "Danh sach thi sinh: " << endl;
	cout << setw(5) << left << "SBD";
	cout << setw(30) << left << "Ho va ten";
	cout << setw(6) << left << "Tuoi";
	cout << setw(30) << left << "Que quan";
	cout << setw(20) << left << "Truong";
	cout << setw(5) << left << "Toan";
	cout << setw(5) << left << "Ly";
	cout << setw(5) << left << "Hoa";
	cout << setw(10) << left << "Tong diem" << endl;
	cout << setfill('-');
	cout << setw(116) << "-" << endl;
	cout << setfill(' ');
	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << left << a[i].sbd
			 << setw(10) << left << a[i].Name.ho
			 << setw(10) << left << a[i].Name.tendem
			 << setw(10) << left << a[i].Name.ten
			 << setw(6) << left << a[i].tuoi
			 << setw(10) << left << a[i].Home.xa   
			 << setw(10) << left << a[i].Home.huyen
			 << setw(10) << left << a[i].Home.tinh
			 << setw(20) << left << a[i].truong
			 << setw(5) << left << a[i].Point.toan
			 << setw(5) << left << a[i].Point.ly
			 << setw(5) << left << a[i].Point.hoa
			 << setw(10) << left << a[i].Point.tongdiem << endl;
	}
		
}

void ThiSinh::ListTongTren15(ThiSinh* a, int n)
{
	cout << "\n\n";
	cout << "\nDanh sach thi sinh co tong diem 3 mon tren 15: " << endl;
	cout << setw(5) << left << "SBD";
	cout << setw(30) << left << "Ho va ten";
	cout << setw(6) << left << "Tuoi";
	cout << setw(30) << left << "Que quan";
	cout << setw(20) << left << "Truong";
	cout << setw(5) << left << "Toan";
	cout << setw(5) << left << "Ly";
	cout << setw(5) << left << "Hoa";
	cout << setw(10) << left << "Tong diem" << endl;
	cout << setfill('-');
	cout << setw(116) << "-" << endl;
	cout << setfill(' ');
	for (int i = 0; i < n; i++)
	{
		if (a[i].Point.tongdiem > 15)
		{
			cout << setw(5) << left << a[i].sbd
				<< setw(10) << left << a[i].Name.ho
				<< setw(10) << left << a[i].Name.tendem
				<< setw(10) << left << a[i].Name.ten
				<< setw(6) << left << a[i].tuoi
				<< setw(10) << left << a[i].Home.xa
				<< setw(10) << left << a[i].Home.huyen
				<< setw(10) << left << a[i].Home.tinh
				<< setw(20) << left << a[i].truong
				<< setw(5) << left << a[i].Point.toan
				<< setw(5) << left << a[i].Point.ly
				<< setw(5) << left << a[i].Point.hoa
				<< setw(10) << left << a[i].Point.tongdiem << endl;
		}
	}
}

void ThiSinh::ListGiamDan(ThiSinh* a, int n)
{
	cout << "\n\n";
	cout << "Danh sach cac thi sinh co tong 3 mon duoc xep theo thu tu giam dan:" << endl;
	cout << setw(5) << left << "SBD";
	cout << setw(30) << left << "Ho va ten";
	cout << setw(6) << left << "Tuoi";
	cout << setw(30) << left << "Que quan";
	cout << setw(20) << left << "Truong";
	cout << setw(5) << left << "Toan";
	cout << setw(5) << left << "Ly";
	cout << setw(5) << left << "Hoa";
	cout << setw(10) << left << "Tong diem" << endl;
	cout << setfill('-');
	cout << setw(116) << "-" << endl;
	cout << setfill(' ');
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i].Point.tongdiem < a[j].Point.tongdiem) {
				swap(a[i], a[j]);
			}
		}
		cout << setw(5) << left << a[i].sbd
			<< setw(10) << left << a[i].Name.ho
			<< setw(10) << left << a[i].Name.tendem
			<< setw(10) << left << a[i].Name.ten
			<< setw(6) << left << a[i].tuoi
			<< setw(10) << left << a[i].Home.xa
			<< setw(10) << left << a[i].Home.huyen
			<< setw(10) << left << a[i].Home.tinh
			<< setw(20) << left << a[i].truong
			<< setw(5) << left << a[i].Point.toan
			<< setw(5) << left << a[i].Point.ly
			<< setw(5) << left << a[i].Point.hoa
			<< setw(10) << left << a[i].Point.tongdiem << endl;
	}

}