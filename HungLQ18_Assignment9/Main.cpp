#include <iostream>
#include "Electric.h"
using namespace std;

int main()
{
	int NumCus;
	cout << "Nhap so luong chu ho: ";
	cin >> NumCus;
	RECEIPT b;
	CUSTOMER* num = new CUSTOMER[NumCus];
	for (int i = 0; i < NumCus; i++)
	{
		cout << "-------------------------------------------------------------"<<endl;
		cout << "Nhap thong tin chu ho thu " << i + 1 << endl;
		num[i].input();
	}

	for (int i = 0; i < NumCus; i++)
	{
		cout << "-------------------------------------------------------------"<<endl;
		cout << "Bien lai chu ho thu " << i+1 << endl;
		num[i].output();
		cout << "\nSo tien phai dong: " << b.Payment(num[i])<<endl;
	}
	return 0;
}