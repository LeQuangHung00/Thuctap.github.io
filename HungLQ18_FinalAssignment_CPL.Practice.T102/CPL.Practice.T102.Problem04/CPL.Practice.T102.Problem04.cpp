#include "Problem04.h"

int main()
{
	int n;       //n element
	Employees* arr;     
	cout << "Input employees'numbers: ";
	cin >> n;
	cin.ignore();
	arr = new Employees[n];       //creat a dynamic array Employees with n element
	for (int i = 0; i < n; i++)
	{
		Developer dev;             //creat Developer for each Employee
		Manager man;               //creat Manager for each Employee
		cout << "Input information for employee " << i + 1 << endl;
		arr[i].input();
		cout << "Information of emloyee " << i + 1 << endl;
		arr[i].showInformation();
		dev.input();
		cout << "------------------------------" << endl;
		dev.showInformation(arr[i]);
		dev.displayDailyWork(arr[i]);
		cout << "------------------------------" << endl;
		man.input();
		cout << "------------------------------" << endl;
		man.showInformation(arr[i]);
		man.displayDailyWork(arr[i]);
		cout << "------------------------------" << endl;
	}
	
	return 0;
}

