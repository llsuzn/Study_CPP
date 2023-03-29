#include <iostream>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class Student :public Person
{
public: 
	void Study() { cout << "Study" << endl; }
};

class PartTimeStudent :public Student
{
public:
	void Work() { cout << "Work" << endl; }
};

int main()
{
	Person* ptr1 = new Student(); // Person type�� ��ü ������			// super -> sub
	Person* ptr2 = new PartTimeStudent();								// super -> sub
	Student* ptr3 = new PartTimeStudent(); //Student type�� ��ü ������ // super -> sub
	PartTimeStudent* ptr4 = new PartTimeStudent();						// super -> sub

	//PartTimeStudent* ptr5 = new Student();								// sub -> super �Ұ���!!

	printf("Person Ÿ���� ��ü ������\n-----------------------------------\n");
	ptr1->Sleep();
	//ptr1->Study(); type�� �޶� �����߻�
	ptr2->Sleep();
	
	printf("\n\nStudent Ÿ���� ��ü ������\n-----------------------------------\n");
	ptr3->Study();
	ptr3->Sleep();

	printf("\n\nPartTimeStudent Ÿ���� ��ü ������\n-----------------------------------\n");
	ptr4->Sleep();
	ptr4->Study();
	ptr4->Work();

	delete ptr1;delete ptr2;delete ptr3;

	return 0;
}