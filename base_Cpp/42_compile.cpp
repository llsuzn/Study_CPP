#include <iostream>
using namespace std;
#pragma warning(disable:4996)

// 클래스 멤버변수에 접근할 수 있는 방법은 3가지로 표현된다.(은닉)
class Myclass
{
private:
	int age;
	char id;
	char name[10];

	//멤버함수(=메소드): 기능
public:
	void set(int mage, char mid, char *mname);
	void get();
};

void Myclass::set(int mage,  char mid, char* mname)
{
	age = mage;
	id = mid;
	strcpy(name , mname);
}
void Myclass::get()
{
	cout << id << name << age << endl;
}

int main()
{
	Myclass sujin;
	sujin.set(25, 'W', "sujin");
	sujin.get();

	return 0;
}