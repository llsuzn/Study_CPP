#include <iostream>
using namespace std;
#pragma warning(disable:4996)

// Ŭ���� ��������� ������ �� �ִ� ����� 3������ ǥ���ȴ�.(����)
class Myclass
{
private:
	int age;
	char id;
	char name[10];

	//����Լ�(=�޼ҵ�): ���
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