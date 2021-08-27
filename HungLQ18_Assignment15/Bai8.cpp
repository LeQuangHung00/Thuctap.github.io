#include<iostream>
#include<string>

using namespace std;

class employee
{
protected:
	string m_name;
	string cap;
	double tien;
	employee(string m_name, string cap, double tien)
	{
		this->m_name = m_name;
		this->tien = tien;
		this->cap = cap;
	}
public:
	std::string getName() { return m_name; }
	string level() { return cap; }
	double coin() { return tien; }
};

class dev1 : public employee
{
public:
	dev1(string m_name, string cap, double tien) :employee(m_name, cap, tien) {

	}
	void output() {
		cout << "Account:" << getName() << " || Level:" << level() << " || Coin:" << coin() << endl;
	}
};

class dev2 : public employee
{
public:
	dev2(string m_name, string cap, double tien) : employee(m_name, cap, tien) {
	}
	void output() {
		cout << "Account:" << getName() << "|| Level:" << level() << " || Coin:" << coin() << endl;
	}
};

class projectManager : public employee
{
public:
	projectManager(string m_name, string cap) : employee(m_name, cap, tien) {}
	void output(dev1 arr1[], dev2 arr2[], int m, int n) {
		double t1 = 0;
		double t2 = 0;
		for (int i = 0; i < m; i++) {
			t1 += arr1[i].coin();
		}
		for (int i = 0; i < m; i++) {
			t2 += arr2[i].coin();
		}
		double t = 0.5 * t1 + 0.25 * (t1 + t2);
		cout << "Account:" << getName() << " || Level:" << level() << " || Coin:" << t << endl;
	}
};

int main() {
	dev1 arr1[4] = { {"AnLN","1.3", 7.5},{"BinhTT2","1.5", 6.3}, {"ChungCH","1.3", 9.0}, {" DucNV2","1.8", 5.8} };
	dev2 arr2[3] = { {"HaLN","2.3", 10.5},{"LinhTT2","2.5", 9.3 }, {"HinhTT2","2.9", 12.3 } };
	projectManager a("MinhTT2", "pm3");
	cout << "Dev 1:" << endl;
	for (int i = 0; i < 4; i++) {
		arr1[i].output();
	}
	cout << "Dev 2:" << endl;
	for (int i = 0; i < 3; i++) {
		arr2[i].output();
	}
	cout << "Dev 3:" << endl;
	a.output(arr1, arr2, 4, 3);
	return 0;
}
