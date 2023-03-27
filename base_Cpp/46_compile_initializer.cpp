#include <iostream>
using namespace std;
#pragma warning(disable:4996)

class Myclass
{
private:
	int age;
	char id;
	char * name;

	//멤버함수(=메소드): 기능
public:
	Myclass(int mage, char mid, char* mname); // 생성자 원형
	void getData(); // 메소드 원형(선언)	
	~Myclass();
};

Myclass::Myclass(int mage, char mid, char* mname) :age(mage), id(mid) // 생성자 정의, 멤버 이니셜라이저를 이용한 멤버 초기화
{
	name = new char[10]; // 메모리 동적 할당
	strcpy(name, mname);
}

Myclass::~Myclass()
{
	delete[]name; // heap영역 동적메모리 할당해줘서 소멸자 호출 시 delete를 사용하여 동적메모리 해제를 해줘야함
	cout << "객체 소멸 완료!" << endl;
}

void Myclass::getData() // 메소드 정의
{
	cout << id << " " << name << " " << age << endl; 
}

int main()
{
	Myclass sc1(25, 'W', "sujin");
	sc1.getData();

	return 0;
}