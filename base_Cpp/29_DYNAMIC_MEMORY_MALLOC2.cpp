#include <iostream>

int main()
{
	int size;
	int* arr;

	printf("�迭����: ");
	scanf_s("%d", &size);

	arr = (int*)malloc(sizeof(int) * size); // �޸� �����Ҵ�

	printf("%d���� ���ڸ� �Է��ϼ���.\n", size);
	printf("������� �迭 ũ��: %d\n", sizeof(int) * size);

	for (int i = 0;i < size;i++)
	{
		printf("%d��° ����: ", i + 1);
		scanf_s("%d", arr + i);
	}
	for (int i = 0;i < size;i++)
	{
		printf("%d\n", arr[i]);
		printf("%d\n", *(arr + i));
	}

	free(arr);

	return 0;
}