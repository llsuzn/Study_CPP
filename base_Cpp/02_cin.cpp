#include <iostream>

using namespace std;

int main()
{
	int val1;
	cout << "ù ��° ���� �Է�: "; // ����ġ�� ���� �Էµ� ���� �Է¹��ۿ� �ö�(���� ��)
	cin >> val1; // �Է¹��ۿ� �ִ� ���� val1�� ����ȴ�

	int val2;
	cout << "�� ��° ���� �Է�: ";
	cin >> val2;

	int res = val1 + val2;
	cout << "���� ��� : " << res << endl;

	return 0;
}