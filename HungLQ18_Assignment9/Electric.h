#ifndef ELECTRIC_H
#define ElECTRIC_H

class CUSTOMER
{
public:
	char CusName[25], ID[10];
	int HomeNum, OldNum, NewNum, ElecNum;
	void input();
	void output();
	friend class RECEIPT;
};
class RECEIPT
{
public:
	int Payment(const CUSTOMER& a);
};
#endif 

