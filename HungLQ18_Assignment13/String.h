#ifndef STRING_H
#define STRING_H

class String
{
private:
	char* str = new char[100];
public:
	String();
	String(const String*& str1);
	String operator + (const String& a)
	{
		String text;
		for (int i = 0; i < length(); i++) {

			*(text.str + i) = *(str + i);
		}
		for (int i = length(); i < 100; i++) {
			*(text.str + i) = (char)*(a.str + i - length());
		}
		return text;
	}
	void input();
	void output();
	void deleteStr();
	int length();
	void reverse();
	void compare(String& b);
};

#endif // !STRING_H

