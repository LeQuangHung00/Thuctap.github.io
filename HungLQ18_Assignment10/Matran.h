#ifndef MATRAN_H
#define MATRAN_H

class MaTran
{
private:
	int Dong, Cot;
	float matrix[100][100];
public:
	MaTran();
	MaTran(int Dong, int Cot);
	~MaTran();
	void input();
	void output(float mt[][100], int a, int b);
	void CongMt(MaTran a, MaTran b);
	void TruMt(MaTran a, MaTran b);
	void NhanMt(MaTran a, MaTran b);
	void ChiaMt(MaTran a, MaTran b);

};
#endif
