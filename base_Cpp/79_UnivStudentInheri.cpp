//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Person
//{
//private:
//	int age;
//	char name[50];
//public:
//	Person(int myage, char* myname) : age(myage)
//	{
//		strcpy(name, myname);
//	}
//	void WhatYourname() const
//	{
//		cout << "My name is " << name << endl;
//	}
//	void HowOldAreYou() const
//	{
//		cout << "I'm " << age << " Years old" << endl;
//	}
//};
//
//class UnivStudent : public Person // UnivStudentŬ������ PersonŬ������ ����� �޴µ� �������� �����ڰ� public�̴�.
//{
//private:
//	char major[50];
//public:
//	UnivStudent(char* myname, int myage, char* mymajor) : Person(myage, myname) // �ڽ�Ŭ������ �θ�Ŭ������ private�� ������ ������ �ȵǱ� ������ �θ�Ŭ������ ȣ���Ͽ� �ʱ�ȭ
//	{
//		strcpy(major, mymajor);
//	}
//	void WhoAreYou() const
//	{
//		WhatYourname();
//		HowOldAreYou();
//		cout << "My Major is " << major << endl << endl;
//	}
//};
//
//int main()
//{
//	UnivStudent ustd1("Lee", 22, "Computer eng.");
//	ustd1.WhoAreYou();
//	UnivStudent ustd2("Yoon", 25, "Electronic eng.");
//	ustd2.WhoAreYou();
//
//	return 0;
//}