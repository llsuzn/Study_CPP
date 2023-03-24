#include <iostream>
using namespace std;
#pragma warning(disable:4996)

class Myclass
{
private:
	int age;
	char id;
	char name[10];

	//멤버함수(=메소드): 기능
public:
	Myclass(char* mname);
	Myclass(int mage, char* mname);
	Myclass(int mage, char mid, char* mname); // 생성자 원형
	void getData(); // 메소드 원형(선언)
};

Myclass::Myclass(char* mname) // 생성자 정의
{
	age = 20;
	id = 'M';
	strcpy(name, mname);
}

Myclass::Myclass(int mage, char* mname)
{
	age = mage;
	id = 'M';
	strcpy(name, mname);
}

Myclass::Myclass(int mage, char mid, char* mname)
{
	age = mage;
	id = mid;
	strcpy(name, mname);
}

void Myclass::getData() // 메소드 정의
{
	cout << id << " " << name << " " << age << endl;
}

int main()
{
	Myclass sc1(25, 'W', "sujin");
	sc1.getData();
	Myclass sc2(27, "gyusu");
	sc2.getData();
	Myclass sc3("hyuk");
	sc3.getData();

	return 0;
}