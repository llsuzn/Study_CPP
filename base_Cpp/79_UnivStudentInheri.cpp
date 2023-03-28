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
//class UnivStudent : public Person // UnivStudent클래스는 Person클래스를 상속을 받는데 접근제한 지시자가 public이다.
//{
//private:
//	char major[50];
//public:
//	UnivStudent(char* myname, int myage, char* mymajor) : Person(myage, myname) // 자식클래스는 부모클래스의 private의 변수에 접근이 안되기 때문에 부모클래스에 호출하여 초기화
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