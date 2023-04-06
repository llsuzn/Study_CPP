#include <iostream>
using namespace std;

class MyClass {
	int num1, num2;
	const char* name;
public:
	MyClass(int anum1 = 0, int anum2 = 0, const char* aname = nullptr) : num1(anum1),num2(anum2),name(aname) { }
	void ShowData() {
		cout << num1 << ", " << num2 << ", " << name << endl;
	}
};

int main()
{
	MyClass m(1, 2, "Lee");
	m.ShowData();

	MyClass cm(m);		// cm = m이라는 의미
	cm.ShowData();

	MyClass n;  // 매개변수가 없으니 디폴트값으로 초기화(0,0,nullptr)
	n = cm;		// 대입연산자가 객체끼리도 가능함
	n.ShowData(); 

	return 0;
}