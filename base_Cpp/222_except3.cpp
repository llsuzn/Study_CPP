#include <iostream>
using namespace std;

int divide(int a, int b)
{
	int c, d;
	try
	{
		if (b == 0) throw b;

		c = a / b;
		cout << "��: " << c << endl;
		d = a % b;
		cout << "������: " << d << endl;
	}
	catch (int ex) {
		cout << ex << "�� ���� �� �����ϴ�. ���ܹ߻�!" << endl;
	}

}

int main()
{
	divide(10, 3);
	divide(100, 5);
	divide(3, 0);

	cout << "���ܰ� �߻��� �ص� ��������!" << endl;
	return 0;
}