#include <iostream>

using namespace std;
int Adder(int num1 = 1, int num2 = 2); // 디폴트 값은 선언부분에서만 표현하면 됨

int main()
{
	cout << Adder() << endl;
	cout << Adder(5) << endl; // 값은 순서대로 ... 5는 num1에 전달됨
	cout << Adder(3,5) << endl;

	return 0;
}

int Adder(int num1, int num2)
{
	return num1 + num2;
}