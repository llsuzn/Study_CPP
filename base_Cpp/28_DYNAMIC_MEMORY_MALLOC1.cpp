// �޸� �����Ҵ�
#include <iostream>

int main()
{
	int* arr;
	int size;

	printf("�迭���� ����:");
	scanf_s("%d", &size);
	
	arr = (int*)malloc(sizeof(int)); // �޸� �����Ҵ�(heap����)

	printf("������� �迭 ũ��: %d\n", sizeof(int) * size);

	free(arr); // �޸� ����

	return 0;
}