#include<iostream>
#include<string>
#include<limits>

using namespace std;

class HUMAN {
protected:
	string name;
	int age;
	int  yearBirth;
	long ID;
	string job;
public:
	HUMAN() {}
	HUMAN(string name, int age, int  yearBirth, long long ID, string job) {
		this->name = name;
		this->age = age;
		this->yearBirth = yearBirth;
		this->ID = ID;
		this->job = job;
	}
	virtual void input() {
		cin.ignore();
		cout << "\t+Nhap ho va ten	: "; getline(cin, name);
		cout << "\t+Nhap nghe nghiep: "; getline(cin, job);
		cout << "\t+Nhap tuoi	: "; cin >> age;
		cout << "\t+Nhap nam sinh	: "; cin >> yearBirth;
		cout << "\t+Nhap so CMND	: "; cin >> ID;
		
	}
	virtual void output() {
		cout << "\t+Ho va ten	: " << name << endl;
		cout << "\t+Nghe nghiep	: " << job << endl;
		cout << "\t+Tuoi		: " << age << endl;
		cout << "\t+Nam sinh	: " << yearBirth << endl;
		cout << "\t+So CMND	: " << ID << endl;
		
	}
	bool timKiemHT(string str) {
		if (str.compare(name) == 0) {
			return true;
		}
		else {
			return false;
		}
	}
};
class TOWN : public HUMAN {
private:
	int manNum;
	int homeNum;
	HUMAN* info = new HUMAN[20];
public:
	TOWN() {}
	void input() {
		cout << "Nhap so nguoi	: "; cin >> manNum;
		cout << "Nhap so nha	: "; cin >> homeNum;
		cout << "----------------" << endl;
		cout << "Nhap thong tin cac thanh vien trong gia dinh:" << endl;
		for (int i = 0; i < manNum; i++) {
			cout << " \n- Nhap thanh vien thu " << i + 1 << ": " << endl;
			info[i].HUMAN::input();
		}
	}
	void output() {
		cout << "---------------" << endl;
		cout << "Gia dinh co " << manNum << " nguoi." << endl;
		cout << "So nha: " << homeNum << endl;
		cout << "Cac thanh vien trong gia dinh la: " << endl;
		for (int i = 0; i < manNum; i++) {

			cout << "Thanh vien thu " << i + 1 << " la:" << endl;
			info[i].output();
			cout << "\n" << endl;
		}
	}
	bool timKiemSN(int at) {
		if (at == homeNum) {
			return true;
		}
		else {
			return false;
		}
	}
	bool timKiemHT(string str) {
		for (int i = 0; i < manNum; i++) {
			if (info[i].timKiemHT(str) == true) {
				return true;
			}
		}
		return false;
	}
};

void displaymenu() {
	cout << "===================================================" << "\n";
	cout << "                         MENU                      " << "\n";

	cout << "     1. So nha" << "\n";
	cout << "     2. Ho ten" << "\n";
}

int main() {
	int n;
	cout << "Nhap so ho dan:"; cin >> n;
	TOWN* arr = new TOWN[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap ho thu " << i + 1 << " : " << endl;
		arr[i].input();
		arr[i].output();
	}
	displaymenu();
	int luaChon;
	int at;
	string str;
	int t = 0;

	cout << "Nhap lua chon cua ban:";
	cin >> luaChon;

	switch (luaChon) {

	case 1:
		cout << "Nhap so nha can tim:"; cin >> at;
		for (int i = 0; i < n; i++) {
			if (arr[i].timKiemSN(at) == true) {
				cout << "Ban da tim dc ho dan thoa man vs so nha!!!" << endl;
				arr[i].output();
				t++;
				break;
			}
		}
		if (t == 0) {
			cout << "Khong co so nha nao thoa man tron khu pho !!!" << endl;
		} break;
	case 2:
		cin.ignore();
		cout << "Nhap ten ho dan can tim: "; getline(cin, str);
		for (int i = 0; i < n; i++) {
			if (arr[i].timKiemHT(str) == true) {
				cout << "Ban da tim dc ho dan thoa man vs so nha!!!" << endl;
				arr[i].output();
				t++;
				break;
			}
		}
		if (t == 0) {
			cout << "Khong co so nha nao thoa man tron khu pho !!!" << endl;
		} break;
	}
	return 0;
}