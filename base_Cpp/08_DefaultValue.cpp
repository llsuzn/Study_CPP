#include <iostream>

using namespace std;
int Adder(int num1 = 1, int num2 = 2); // ����Ʈ ���� ����κп����� ǥ���ϸ� ��

int main()
{
	cout << Adder() << endl;
	cout << Adder(5) << endl; // ���� ������� ... 5�� num1�� ���޵�
	cout << Adder(3,5) << endl;

	return 0;
}

int Adder(int num1, int num2)
{
	return num1 + num2;
}