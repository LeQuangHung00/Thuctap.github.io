#ifndef PROBLEM04_H
#define PROBLEM04_H
#include <iostream>
#include <string>
using namespace std;

class Employees
{
public:
	string account;
	string department;
	string job_title;

	virtual void input();
	virtual void showInformation();
	virtual void displayDailyWork();

};

class Developer : public Employees
{
public:
	string project_name;

	void input();
	void showInformation(Employees a);
	void displayDailyWork(Employees);
};

class Manager : public Employees
{
public:
	string customer_name;

	virtual void input();
	virtual void showInformation(Employees);
	virtual void displayDailyWork(Employees);
};

#endif // !PROBLEM04_H

