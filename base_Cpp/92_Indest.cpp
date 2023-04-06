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
	~CTest() {										// ½´ÆÛÅ¬·¡½º ¼Ò¸êÀÚ
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
	~CTestSub() {									// ¼­ºêÅ¬·¡½º ¼Ò¸êÀÚ
		cout <<subn<<" CTestSub Destructor" << endl;
	}

};

int main() {
	CTest c1(10);
	printf("----------------------------\n");
	CTestSub c2(1, 20);

	return 0;
}