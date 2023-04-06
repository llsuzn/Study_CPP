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
	virtual ~CTest() {										// ����Ŭ���� �Ҹ��� , ���� �Ҹ���
		cout <<num<<" CTest Destructor" << endl;
	}
	void func() {
		cout << "CTest func()" << endl;
	}
	virtual void vfunc() {							// �����Լ�(�����϶� ȣ�� X, ��Ÿ�ӿ��� ȣ��)
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
	~CTestSub() {									// ����Ŭ���� �Ҹ���
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
	delete ps; // �����Լ� ����ϸ� �Ҹ�ɶ� �ڽ�Ŭ���� �Ҹ��� �����(����Ŭ������ �Ҹ��ڿ� ������) -> ����Ҹ��ڷ� �ذ� ����

	return 0;
}