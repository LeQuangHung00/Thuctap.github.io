#include <iostream>
#include "Matran.h"
using namespace std;

int main()
{
	int a, b;
	MaTran mt1;
	mt1.input();
	cout << "\nSo dong cua ma tran 2: ";
	cin >> a;
	cout << "So cot cua ma tran 2: ";
	cin >> b;
	MaTran mt2(a, b);
	mt2.input();
	cout << "\n+ Danh sach thao tac:\n";
	cout << "1. Cong hai ma tran"
		<< "\n2. Tru hai ma tran"
		<< "\n3. Nhan hai ma tran"
		<< "\n4. Chia hai ma tran" << endl;
	while (true) {
		int tt = 0;
		cout << "\n+ Chon thao tac ma ban muon thuc hien: ";
		cin >> tt;
		cout << endl;
		switch (tt) {
		case 1: mt1.CongMt(mt1,mt2); break;
		case 2: mt1.TruMt(mt1, mt2); break;
		case 3: mt1.NhanMt(mt1, mt2); break;
		case 4: mt1.ChiaMt(mt1, mt2); break;
		default: tt = 0; break;
		}
		if (tt == 0) break;
	}
	return 0;
}