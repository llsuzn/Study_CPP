#include <iostream>

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	printf("arr ��üũ�� : %d\n", sizeof(arr));
	int* parr = arr;

	printf("arr�ּ� : %p\n", arr);
	printf("arr[0]�ּ� : %p\n", &arr[0]);
	printf("arr + 1 : %p\n", arr + 1);
	printf("arr[1]�ּ� : %p\n", &arr[1]);

	printf("parr�� �ּ� : %p\n", &parr);
	printf("parr�� �� : %p\n", parr);

	printf("parr[0]�� ����Ű�� �� : %d\n", parr[0]);
	printf("parr�� ����Ű�� �� : %d\n", *parr);
	// �迭�� ù��°�� 1�� ����Ų��

	return 0;
}