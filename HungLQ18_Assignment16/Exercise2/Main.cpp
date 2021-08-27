#include<vector>
#include<limits>
#include"Hotel.h"
#include"Human1.h"

void menu() {
	cout << "===================================================" << "\n";
	cout << "                         MENU                      " << "\n";

	cout << "Tim kiem theo ho ten	va tinh tien phong: 1" << "\n";
	cout << "Tim kiem theo so CMT	va tinh tien phong: 2" << "\n";
}

int main() {
	vector <HOTEL> hotel;
	int m;
	cout << "Nhap so luong khach thue phong: "; cin >> m;
	for (int i = 0; i < m; i++) {
		HOTEL cus;
		cout << "Nhap khach thue thu " << i + 1 << ":" << endl;
		cus.getIn();
		hotel.push_back(cus);
	}
	cout << "---------------------------" << endl;
	cout << "Thong tin khach thue phong: " << endl;
	for (int i = 0; i < m; i++) {
		cout << " - Thong tin khach thue phong thu " << i + 1 << ":" << endl;
		hotel[i].getOut();
	}

	menu();
	int yourSelect;
	cout << " Nhap lua chon: "; cin >> yourSelect;

	switch (yourSelect) {
	case 1: {
		string a;
		cin.ignore();
		cout << " Nhap ho ten khach thue can tim: "; getline(cin, a);
		int k = 0;
		for (int i = 0; hotel.size(); i++) {
			if (hotel[i].getFullName().compare(a) == 0) {
				cout << "Thong tin khach thue can tim la: " << endl;
				hotel[i].getOut();
				cout << "So tien can thanh toan la: " << hotel[i].payment() << "VND" << endl;
				break;
			}
		}
		if (k == 0) {
			cout << "Khong co khach nao thoa man!" << endl;
		}
		break;
	}
	case 2:
	{
		long a;
		cout << "Nhap so CMND cua khach hang tra phong :"; cin >> a;
		int t = 0;
		for (int i = 0; i < hotel.size(); i++) {
			if (hotel[i].getID() == a) {
				t++;
				cout << "So tien can thanh toan la:" << hotel[i].payment() << "VND" << endl;
				break;
			}
		}
		if (t == 0) {
			cout << "So CMND khong dung!" << endl;
		}
		break;
	}
	}
	return 0;
}
