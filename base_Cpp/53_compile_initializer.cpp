#include <iostream>
using namespace std;
#pragma warning(disable:4996)

class Human {
	// 속성
private:
	char name[20];
	char id[15];
	int age;

	// 함수(기능)
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
//	/*배열을 선언과 동시에 초기화는 가능
//	 name = "홍길동"은 불가능
//	 어떻게 값을 넣을까?
//	 ! strcpy ! 사용 */
//	strcpy(id, aid);
//	age = aage;
//}

void Human::getData() {
	cout << "이름: " << name << "\t" << "주민번호: " << id << "\t" << "나이: " << age << endl;
}

int main() {
	//Human sujin;
	//sujin.setData("이수진", "991130-1112233", 25);
	Human sujin("이수진", "991130-1112233", 25);
	sujin.getData();

	return 0;
}