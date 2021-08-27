#include <iostream>
#include "Matran.h"
using namespace std;

MaTran::MaTran()
{
	Dong = Cot = 2;
	cout << "Nhap cac phan tu cua ma tran " << Dong << " x " << Cot << endl;
}

MaTran::MaTran(int a, int b)
{
	this->Dong = a;
	this->Cot = b;
	cout << "Nhap cac phan tu cua ma tran " << Dong << " x " << Cot << endl;
}

MaTran::~MaTran()
{
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			matrix[i][j] = 0;
	Dong = Cot = 0;
}

void MaTran::input()
{
	for (int i = 0; i < Dong; i++)
		for (int j = 0; j < Cot; j++)
			cin >> matrix[i][j];
	cout << "Ma tran da nhap: " << endl;
	output(matrix, Dong, Cot);
}

void MaTran::output(float mt[][100], int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << mt[i][j] << "\t";			
		}
		cout << "\n";
	}			
}

void MaTran::CongMt(MaTran a, MaTran b)
{
	if (a.Dong != b.Dong || a.Cot != b.Cot)
		cout << "Hai ma tran khong dong cap! " << endl;
	else
	{
		for (int i = 0; i < b.Dong; i++)
			for (int j = 0; j < b.Cot; j++)
				a.matrix[i][j] += b.matrix[i][j];
		cout << "Tong hai ma tran la: " << endl;
		output(a.matrix, Dong, Cot);
	}
}

void MaTran::TruMt(MaTran a, MaTran b)
{
	if (a.Dong != b.Dong || a.Cot != b.Cot)
		cout << "Hai ma tran khong dong cap! " << endl;
	else
	{
		for (int i = 0; i < b.Dong; i++)
			for (int j = 0; j < b.Cot; j++)
				a.matrix[i][j] -= b.matrix[i][j];
		cout << "Hieu hai ma tran la: " << endl;
		output(a.matrix, Dong, Cot);
	}
}

void MaTran::NhanMt(MaTran a, MaTran b)
{
	float Tong[100][100];
	for (int i = 0; i < a.Dong; i++)
	{
		for (int j = 0; j < b.Cot; j++)
			for (int k = 0; k < a.Cot; k++)
				Tong[i][j] += a.matrix[i][k] * b.matrix[k][j];
	}
	cout << "Tich hai ma tran la: "<<endl;
	output(Tong, a.Dong, b.Cot);
}

void MaTran::ChiaMt(MaTran a, MaTran b)
{

}

