//#include <iostream>
//#include <cstring>
//using namespace std;
//#pragma warning(disable:4996)
//
//class Person
//{
//private:
//	char* name;
//	int age;
//public:
//	Person(char* name, int age)
//	{
//		cout << "������ ȣ��" << endl;
//		int len = (int)strlen(name) + 1;
//		this->name = new char[len];
//		strcpy(this->name, name);
//		this-> age = age;
//	}
//	explicit Person(const Person& copy)
//	{
//		cout << "��������� ȣ��" << endl;
//		this->name = new char[strlen(copy.name) + 1];
//		strcpy(this->name, copy.name);
//		this->age = copy.age;
//	}
//	void ShowPersonInfo() const
//	{
//		cout << "�̸�: " << this->name << endl;
//		cout << "����: " << this->age << endl;
//	}
//	~Person()
//	{
//		delete[] this->name;
//		cout << "Called destructor" << endl;
//	}
//};
//
//int main()
//{
//	Person man1("Lee su jin", 25);
//	Person man2(man1);
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//
//	return 0;
//}