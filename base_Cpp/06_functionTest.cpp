#include <iostream>

using namespace std;
void func1(); // 입력X, 출력X
void func2(int a, int b); // 입력O, 출력X
int func3(); // 입력X, 출력O
int func4(int a, int b); // 입력O, 출력O

int main()
{	
	int num1 = 10;
	int num2 = 20;

	func1();
	func2(num1, num2);
	cout << "res3 : " << func3() << endl;
	cout << "res4 : " << func4(num1, num2) << endl; // num1과 num2를 실인수라고 한다

	return 0;
}

void func1()
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	cout << "res1 : " << res << endl;
}
void func2(int a, int b) // a와 b를 매개변수라고 한다
{
	int res;
	res = a + b;
	cout << "res2 : " << res << endl;
}
int func3()
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;

	return res;
}
int func4(int a,int b)
{
	int res;
	res = a + b;

	return res;
}