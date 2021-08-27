#include <iostream>
#include "String.h"
using namespace std;

String::String() {
	for (int i = 0; i < 100; i++)
	{
		*(str + i) = NULL;
	}
}

String::String(const String*& str1)
{
	str = str1->str;
}


void String::input()
{
	cout << "Nhap chuoi: ";
	cin.getline(str, 100);
}

void String::output()
{
	cout << "\nChuoi vua nhap la: " << str << endl;
}

void String::deleteStr()
{
	for (int i = 0; i < length(); i++)
		*(str + i) = NULL;
}

int String::length()
{
	int i = 0;
	while (str[i] != NULL)
	{
		i++;
	}
	return i;
}

void String::reverse()
{
	for (int i = 0; i < length(); i++)
	{
		cout << (*(str + length() - i - 1));
	}
}
 
void String::compare(String& b)
{
	if (length() > b.length())
		cout << "\nChuoi ban dau dai hon" << endl;
	else if(length() < b.length())
		cout << "\nChuoi thu hai dai hon" << endl;
	else
		cout << "\nHai chuoi bang nhau" << endl;
}

