#include <iostream>
using namespace std;
#pragma warning(disable:4996)

class Human {
	// �Ӽ�
private:
	char name[20];
	char id[15];
	int age;

	// �Լ�(���)
public:
	Human(const char aname[20], char aid[15], int aage) {
		strcpy(name, aname);
		strcpy(id, aid);
		age = aage;
	}
	//void setData(const char aname[20],char aid[15], int aage);
	void getData();
};

//
//void Human::setData(const char aname[20], char aid[15], int aage) {
//	strcpy(name, aname);
//	/*�迭�� ����� ���ÿ� �ʱ�ȭ�� ����
//	 name = "ȫ�浿"�� �Ұ���
//	 ��� ���� ������?
//	 ! strcpy ! ��� */
//	strcpy(id, aid);
//	age = aage;
//}

void Human::getData() {
	cout << "�̸�: " << name << "\t" << "�ֹι�ȣ: " << id << "\t" << "����: " << age << endl;
}

int main() {
	//Human sujin;
	//sujin.setData("�̼���", "991130-1112233", 25);
	Human sujin("�̼���", "991130-1112233", 25);
	sujin.getData();

	return 0;
}