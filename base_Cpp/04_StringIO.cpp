#include <iostream>

using namespace std;

int main()
{
	char name[100];
	char lang[200];

	cout << "�̸��� �����Դϱ�> ";
	cin >> name;

	cout << "�����ϴ� ���α׷��� ���� �����Դϱ�? ";
	cin >> lang;

	cout << "�� �̸��� " << name << "�Դϴ�" << endl;
	cout << "���� �����ϴ� ���� " << lang << "�Դϴ�." << endl;
	
	return 0;
}