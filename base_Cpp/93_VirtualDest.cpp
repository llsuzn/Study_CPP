#include <iostream>
using namespace std;

class CTest {
private:
	int num;
public:
	CTest(int n) {
		num = n;
		cout << num << " CTest Constructor" << endl;
	}
	virtual ~CTest() {										// 수퍼클래스 소멸자 , 가상 소멸자
		cout <<num<<" CTest Destructor" << endl;
	}
	void func() {
		cout << "CTest func()" << endl;
	}
	virtual void vfunc() {							// 가상함수(컴파일때 호출 X, 런타임에서 호출)
		cout << "CTest vfunc()" << endl;
	}
};

class CTestSub : public CTest
{
private:
	int snum;
public:
	CTestSub(int sn, int n) : CTest(sn) {
		snum = n;
		cout << snum << " CTestSub Constructor" << endl;
	}
	~CTestSub() {									// 서브클래스 소멸자
		cout << snum <<" CTestSub Destructor" << endl;
	}
	virtual void vfunc() {
		cout << "CTestSub vfunc()" << endl;
	}

};

int main() {
	CTest c1(10);
	printf("----------------------------\n");
	CTestSub c2(1, 20);
	printf("----------------------------\n");
	CTest* ps = new CTestSub(3, 33);
	printf("----------------------------\n");
	delete ps; // 가상함수 사용하면 소멸될때 자식클래스 소멸자 사라짐(기초클래스의 소멸자에 가려짐) -> 가상소멸자로 해결 가능

	return 0;
}