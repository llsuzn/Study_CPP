#include <iostream>
using namespace std;

int main()
{
	int size;
	int* arr;
	cout << "�迭�� ������ �Է��ϼ���: " ;
	cin >> size;

	//���� �޸� �Ҵ�
	arr = new int[size];

	for (int i = 0;i < size;i++)
	{
		cout << i + 1 << "��° ����: ";
		cin >> *(arr + i);
	}
	for (int i = 0;i < size;i++)
	{
		cout << *(arr + i) << endl;
	}

	return 0;
}