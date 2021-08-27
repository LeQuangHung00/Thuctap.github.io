#ifndef _HOTEL_H_
#define _HOTEL_H_
#include<string>
#include"Human1.h"

class HOTEL : public HUMAN1
{
private:
	int soNgay;
	string loaiPhong;
	long giaPhong;

public:
	HOTEL() {}
	HOTEL(int soNgay, string loaiPhong, long giaPhong) {
		this->soNgay = soNgay;
		this->loaiPhong = loaiPhong;
		this->giaPhong = giaPhong;
	}
	void getIn() {
		cin.ignore();
		cout << "\tNhap ho ten khach hang	: "; getline(cin, fullName);
		cout << "\tNhap nam sinh		: "; cin >> yearBirth;
		cout << "\tNhap so CMT		: "; cin >> ID;
		cout << "\tNhap so ngay thue	: "; cin >> soNgay;
		cin.ignore();
		cout << "\tNhap loai phong		: "; getline(cin, loaiPhong);
		cout << "\tNhap gia phong		: "; cin >> giaPhong;
	}
	long payment() {
		return soNgay * giaPhong;

	}

	void getOut() {
		cout << "\tHo ten khach	: " << fullName << endl;
		cout << "\tNam sinh	: " << yearBirth << endl;
		cout << "\tSo CMT		: " << ID << endl;
		cout << "\tSo ngay thue	: " << soNgay << endl;
		cout << "\tLoai phong	: " << loaiPhong << endl;
		cout << "\tGia phong	: " << giaPhong << endl;
	}
};
#endif // !_HOTEL_H_

