#include <iostream>

using namespace std;

bool friendNumber(int a, int b);

int main()
{
	int num1, num2;   //creat 2 number
	do
	{
		cout << "Input 2 numbers: ";
		cin >> num1 >> num2;
		if (num1, num2 < 1 || num1, num2>10000)
			cout << "False!!! Input again" << endl;
	} while (num1, num2 < 1 || num1, num2>10000);
	cout << boolalpha;     //change 1 0 to true false
	cout << friendNumber(num1,num2);
}

bool friendNumber(int a, int b)
{
	int c = 0, d = 0;     //creat 2 intermediary number
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0)      
			c += i;          //add all a's divisor to c 
	}
	
	for (int i = 1; i < b; i++)
	{
		if (b % i == 0)
			d += i;        //add all b's divisor to d 
	}

	if ((c == b) && (d == a))     
		return true;
	else
		return false;
}
