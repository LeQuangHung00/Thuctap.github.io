#include "ThiSinh.h"
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	
	int numberstd;
	cout << "Nhap so thi sinh trong danh sach: ";
	cin >> numberstd;
	ThiSinh* arrstd = new ThiSinh[numberstd];
	arrstd->ListThiSinh(&*arrstd, numberstd);
	arrstd->ListTongTren15(&*arrstd, numberstd);
	arrstd->ListGiamDan(&*arrstd, numberstd);
	return 0;
}