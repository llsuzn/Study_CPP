#include <iostream>
using namespace std;
#pragma warning(disable:4996)

class Myclass
{
private:
	int age;
	char id;
	char name[10];

	//����Լ�(=�޼ҵ�): ���
public:
	Myclass(char* mname);
	Myclass(int mage, char* mname);
	Myclass(int mage, char mid, char* mname); // ������ ����
	void getData(); // �޼ҵ� ����(����)
};

Myclass::Myclass(char* mname) // ������ ����
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

void Myclass::getData() // �޼ҵ� ����
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