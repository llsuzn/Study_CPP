#include <iostream>

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	printf("arr 전체크기 : %d\n", sizeof(arr));
	int* parr = arr;

	printf("arr주소 : %p\n", arr);
	printf("arr[0]주소 : %p\n", &arr[0]);
	printf("arr + 1 : %p\n", arr + 1);
	printf("arr[1]주소 : %p\n", &arr[1]);

	printf("parr의 주소 : %p\n", &parr);
	printf("parr의 값 : %p\n", parr);

	printf("parr[0]이 가리키는 값 : %d\n", parr[0]);
	printf("parr이 가리키는 값 : %d\n", *parr);
	// 배열의 첫번째인 1을 가리킨다

	return 0;
}