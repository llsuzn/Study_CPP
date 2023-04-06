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
	~CTest() {										// ����Ŭ���� �Ҹ���
		cout <<num<<" CTest Destructor" << endl;
	}
};

class CTestSub : public CTest
{
private:
	int subn;
public:
	CTestSub(int sn, int n) : CTest(sn) {
		subn = n;
		cout << subn << " CTestSub Constructor" << endl;
	}
	~CTestSub() {									// ����Ŭ���� �Ҹ���
		cout <<subn<<" CTestSub Destructor" << endl;
	}

};

int main() {
	CTest c1(10);
	printf("----------------------------\n");
	CTestSub c2(1, 20);

	return 0;
}