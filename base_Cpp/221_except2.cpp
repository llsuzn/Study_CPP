#include <iostream>
using namespace std;

int divide(int a,int b)
{
	int c, d;

	if (b == 0) throw b;

	c = a / b;
	cout << "��: " << c << endl;
	d = a % b;
	cout << "������: " << d << endl;

}

int main()
{
	try {
		divide(10, 3);
		divide(100, 5);
		divide(3, 0);
	}
	catch (int ex) {
		cout << ex << "�� ���� �� �����ϴ�. ���ܹ߻�!" << endl;
		cout << "���ܰ� �߻��� �ص� ��������!" << endl;
	}
	return 0;
}