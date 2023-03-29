#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
public:
	Person(char* myname)
	{
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}
	~Person()
	{
		cout << name << " ~Person" << endl;
		delete[] name;
	}
	void WhatYourName() const {
		cout << "My name is " << name << endl;
	}
};

class UnivStudent :public Person
{
private:
	char* major;
public: 
	UnivStudent(char* myname, char* mymajor) : Person(myname)
	{
		major = new char[strlen(mymajor) + 1];
		strcpy(major, mymajor);
	}
	~UnivStudent()
	{
		cout << major << " ~UnivStudent" << endl;
		delete[] major;
	}
	void WhoAreYou() const
	{
		WhatYourName();
		cout << "My major is " << major << endl << endl;
	}
};

int main()
{
	UnivStudent st1("leesujin", "Mathematics");
	st1.WhoAreYou();
	UnivStudent st2("leegyusu", "Physics");
	st2.WhoAreYou();

	return 0;
}