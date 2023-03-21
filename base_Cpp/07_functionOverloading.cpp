#include <iostream>

using namespace std;
void MyFunc();
void MyFunc(char c);
void MyFunc(int a, int b);

int main()
{
	MyFunc();
	MyFunc('A');
	MyFunc(12,13);

	return 0;
}

void MyFunc()
{
	cout << "MyFunc() called" << endl;
}
void MyFunc(char c)
{
	cout << "MyFunc(char c) called\n" << "C = " << c << endl;
}
void MyFunc(int a, int b)
{
	cout << "MyFunc(int a,int b) called" << endl;
	cout << "a = " << a << "\nb = " << b << endl;
}
