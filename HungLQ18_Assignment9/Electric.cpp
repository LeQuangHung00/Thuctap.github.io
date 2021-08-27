#include <iostream>
#include "Electric.h"
using namespace std;

void CUSTOMER::input()
{
	cin.ignore();
	cout << "Ten chu ho: ";
	cin.getline(CusName, 25);
	cout << "Ma cong to: ";
	cin.getline(ID, 10);
	cout << "So nha: ";
	cin >> HomeNum;
	cout << "Chi so dien cu: ";
	cin >> OldNum;
	cout << "Chi so dien moi: ";
	cin >> NewNum;
	while (OldNum > NewNum || OldNum < 0 || NewNum < 0)
	{
		cout << "Ban da nhap sai! Vui long nhap lai! "<<endl;
		cout << "Chi so dien cu: ";
		cin >> OldNum;
		cout << "Chi so dien moi: ";
		cin >> NewNum;
	}
	ElecNum = NewNum - OldNum;
}

void CUSTOMER::output()
{
	cout << "Ten chu ho: "<< CusName;
	cout << "\nMa cong to: "<<ID;
	cout << "\nSo nha: "<< HomeNum;
	cout << "\nChi so dien cu: "<< OldNum;
	cout << "\nChi so dien moi: "<< NewNum;
}

int RECEIPT::Payment(const CUSTOMER& a)
{
	int Paid;
	if (a.ElecNum < 50)
		Paid = a.ElecNum * 1250;
	else if ((a.ElecNum > 50) && (a.ElecNum < 100))
		Paid = a.ElecNum * 1500;
	else
		Paid = a.ElecNum * 2000;
	return Paid;
}