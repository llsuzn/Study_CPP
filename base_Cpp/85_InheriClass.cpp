#include <iostream>
using namespace std;

class Person
{
private:
	char name[30];
	int age;
public:
	Person(const char* pname, int page);
	void getData();
};

class Student : public Person {
private:
	int studentID;
public:
	Student(const char* sname, int sage, int sstudentID);
	void ShowData(); // 함수 오버라이딩(상속받은 부모의 함수와 이름이 같은 경우)
};

Person::Person(const char* pname, int page) {
	strcpy(name, pname);
	age = page;
}
void Person::getData()
{
	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
}

Student::Student(const char* sname, int sage, int sstudentID) :Person(sname, sage)
{
	studentID = sstudentID;
}
void Student::ShowData()
{
	getData();
	cout << "ID: " << studentID << endl;
}

int main()
{
	printf("부모 클래스 함수\n");
	Student sujin("LEE", 25, 1822966);
	sujin.getData();
	printf("-----------------------\n");
	printf("자식 클래스 함수\n");
	sujin.ShowData();


	return 0;
}