#include <iostream>

using namespace std;
int cakeCutting(int n);

int main()
{
	int a;
	do
	{
		cout << "Input lines number: ";
		cin >> a;
	} while (a < 0 || a>100);
	cout << "\nCakeCutting(" << a << ") = " << cakeCutting(a) << endl;
	return 0;
}

int cakeCutting(int n)  //algorithm to calculate
{
	return (n * (n + 1)) / 2 + 1;
}
