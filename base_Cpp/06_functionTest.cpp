#include <iostream>

using namespace std;
void func1(); // �Է�X, ���X
void func2(int a, int b); // �Է�O, ���X
int func3(); // �Է�X, ���O
int func4(int a, int b); // �Է�O, ���O

int main()
{	
	int num1 = 10;
	int num2 = 20;

	func1();
	func2(num1, num2);
	cout << "res3 : " << func3() << endl;
	cout << "res4 : " << func4(num1, num2) << endl; // num1�� num2�� ���μ���� �Ѵ�

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
void func2(int a, int b) // a�� b�� �Ű�������� �Ѵ�
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