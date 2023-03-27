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
	cout << "ÀÌ¸§: " << name << "\t" << "ÁÖ¹Î¹øÈ£: " << id << "\t" << "³ªÀÌ: " << age << endl;
}

int main() {
	Human sujin("ÀÌ¼öÁø", "991130-1112233", 25);
	sujin.getData();

	// °´Ã¼ ¹è¿­
	Human harr[3] = { Human("±è¿µÈñ","2",23),Human("±èÃ¶¼ö","3",25),Human("ÀÌ±Ô¼ö","4",27) };
	harr[0].getData();
	harr[1].getData();
	harr[2].getData();

	return 0;
}