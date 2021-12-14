#include "Problem04.h"

void Employees::input()            //input for class Employees
{
	cout << "Account: ";
	getline(cin, account);
	cout << "Department: ";
	getline(cin, department);
	cout << "Job title: ";
	getline(cin, job_title);
	cout << "------------------------------" << endl;
}

void Employees::displayDailyWork(){}          

void Employees::showInformation()            //showInformation for Employees
{
	cout << "Account: "<< account << endl;
	cout << "Department: " << department << endl;
	cout << "Job title: " << job_title << endl;
}

void Developer::input()           //input for class Developer
{
	cout << "Project name: ";
	getline(cin, project_name);
}

void Developer::displayDailyWork(Employees)     //displayDailyWork for Developer
{
	cout << "Coding up with project: " << project_name << endl;
}

void Developer::showInformation(Employees a)            //showInformation for Developer
{
	a.showInformation();
	cout << "Project's name: " << project_name << endl;
}

void Manager::input()                     //input for class Manager
{
	cout << "Customer's name: ";
	getline(cin, customer_name);
}

void Manager::displayDailyWork(Employees a)         //displayDailyWork for Manager
{
	cout << "Working with customer: " << customer_name << endl;
}

void Manager::showInformation(Employees a)             //showInformation for Manager
{ 
	a.showInformation();
	cout << "Customer's name: " << customer_name << endl;
}