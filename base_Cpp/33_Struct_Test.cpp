// ����� ���� �Լ�(����ü) : C���
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
	cout << "�̸�: " << sujin.name << endl;
	cout << "����: " << sujin.age << endl;

	human usuyg = { "leegyusu",27 };
	cout << "�̸�: " << usuyg.name << endl;
	cout << "����: " << usuyg.age << endl;

	return 0;
}