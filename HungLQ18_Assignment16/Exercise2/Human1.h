#ifndef _HUMAN1_H_
#define _HUMAN1_H_

#include<iostream>
#include<string>
using namespace std;

class HUMAN1 {
protected:
	string fullName;
	int  yearBirth;
	long ID;
public:
	HUMAN1() {}
	HUMAN1(string fullName, int yearBirth, long ID) {
		this->fullName = fullName;
		this->yearBirth = yearBirth;
		this->ID = ID;
	}

	string getFullName() {
		return fullName;
	}
	void setFullName(string fullName) {
		this->fullName = fullName;
	}

	long getID() {
		return ID;
	}
	void setID(long ID) {
		this->ID = ID;
	}

	virtual void getIn() = 0;
	virtual void getOut() = 0;
	virtual long payment() = 0;
};
#endif // !_HUMAN1_H_

