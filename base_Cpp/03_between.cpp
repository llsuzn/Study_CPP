#include <iostream>

using namespace std;

int main()
{
	int val1, val2;
	int res = 0;
	cout << "�� �� �Է� : ";
	cin >> val1 >> val2;

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2;i++)
		{
			res += i;
		}
	}
	else
	{
		for (int i = val2 + 1;i < val1;i++)
		{
			res += i;
		}
	}
	cout << "�� ���� ���� ��: " << res << endl;

	return 0;
}