// 메모리 동적할당
#include <iostream>

int main()
{
	int* arr;
	int size;

	printf("배열방의 개수:");
	scanf_s("%d", &size);
	
	arr = (int*)malloc(sizeof(int)); // 메모리 동적할당(heap영역)

	printf("만들어진 배열 크기: %d\n", sizeof(int) * size);

	free(arr); // 메모리 해제

	return 0;
}