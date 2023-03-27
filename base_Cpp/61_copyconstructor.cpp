#include <iostream>
using namespace std;

class Myclass
{
	int num; //stack영역
public:
	Myclass(int n) : num(n) { //콜론 초기화
		cout << "생성자 호출" << endl;
	}
	Myclass(Myclass& copy) { // 객체를 매개변수(Myclass copy)로 받으면 무한루프 ,,, !매개변수는 무조건 참조형으로!
		cout << "복사생성자 호출" << endl;
		num = copy.num*2;
	}
	void getData();
};

void Myclass::getData()
{
	cout << num << endl;
}

int main()
{
	Myclass m1(10);  //객체 생성
	Myclass m2 = m1; // 복사생성자 호출 ... int num1 = num2
	Myclass m3(m2);  // 복사생성자 호출 ... int num3 = num2(num1)
	// 복사생성자도 만들어주지 않아도 default(얕은 복사)로 만들어지기 때문에 위 코드가 실행됨
	//stack영역은 얕은 복사
	//heap 영역의 깊은 복사는 문제가 발생

	m1.getData();
	m2.getData();
	m3.getData();

	return 0;
}