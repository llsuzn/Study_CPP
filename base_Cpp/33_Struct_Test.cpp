// 사용자 정의 함수(구조체) : C언어
#include <iostream>
using namespace std;

struct human
{
	char name[20];
	int age;
};

int main()
{
	human sujin = { "leesujin",25 };
	cout << "이름: " << sujin.name << endl;
	cout << "나이: " << sujin.age << endl;

	human usuyg = { "leegyusu",27 };
	cout << "이름: " << usuyg.name << endl;
	cout << "나이: " << usuyg.age << endl;

	return 0;
}