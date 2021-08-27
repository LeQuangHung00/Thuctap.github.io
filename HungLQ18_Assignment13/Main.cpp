#include <iostream>
#include "String.h"
using namespace std;

int main()
{
	String hi;
	hi.input();
	hi.output();
	hi.deleteStr();
	cout << "\nChuoi sau khi xoa: ";
	hi.output();
	hi.input();
	String bye;
	bye.input();
	String say = hi + bye;
	cout << "\nSau khi ghep chuoi: ";
	say.output();
	cout << "\nDao chuoi: ";
	say.reverse();
	cout << "\nChieu dai chuoi 1 la: " << hi.length();
	hi.compare(bye);
	return 0;
}