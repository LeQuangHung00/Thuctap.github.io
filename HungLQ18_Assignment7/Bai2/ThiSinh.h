#ifndef _THISINH_H_
#define _THISINH_H_

class ThiSinh
{
public:
	struct HoTen 
	{
		char ho[10];
		char tendem[10];
		char ten[10];
	}Name;
	struct QueQuan
	{
		char xa[10];
		char huyen[10];
		char tinh[10];
	}Home;
	struct DiemThi
	{
		float toan, ly, hoa, tongdiem;
	}Point;
	char truong[20], sbd[5];
	int tuoi;
	void input();
	void ListThiSinh(ThiSinh* a, int n);
	void ListTongTren15(ThiSinh* a, int n);
	void ListGiamDan(ThiSinh* a, int n);
};

#endif 

