#include <iostream>
using namespace std;
#pragma warning(disable:4996)

class Human {
private:
	char* name;
	char id[15];
	int age;
public:
	Human(const char *aname, char aid[15], int aage) {
		name = new char[strlen(aname) + 1];
		strcpy(name, aname);
		strcpy(id, aid);
		age = aage;
	}
	~Human() {
		delete[] name;
	}
	void getData();
};


void Human::getData() {
	cout << "�̸�: " << name << "\t" << "�ֹι�ȣ: " << id << "\t" << "����: " << age << endl;
}

int main() {
	Human sujin("�̼���", "991130-1112233", 25);
	sujin.getData();

	// ��ü �迭
	Human harr[3] = { Human("�迵��","2",23),Human("��ö��","3",25),Human("�̱Լ�","4",27) };
	harr[0].getData();
	harr[1].getData();
	harr[2].getData();

	return 0;
}