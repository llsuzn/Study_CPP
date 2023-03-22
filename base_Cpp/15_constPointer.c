#include <stdio.h>  // C소스의 헤더파일

int main()
{
	int num;
	int* p = &num;
	*p = 20;
	printf("num : %d\n", num);
	printf("*p  : %d\n", *p);
	printf("num 주소  : %p\n", num);
	printf("*p  주소  : %p\n", *p);

	int num1 = 100;
	int num2 = 200;
	int num3 = 300;
	const int * parr1 = &num1;
	// 포인터 변수의 주소 값은 바뀔 수 있지만 포인터 변수가 따라가는 arr1에 담긴 데이터가 바뀌지 않음
	int * const parr2 = &num2;
	// 포인터 변수의 주소 값이 고정되어 있고, 포인터 변수가 따라가는 arr2에 담긴 데이터는 바뀔 수 있음

	parr1 = &num3;
	*parr2 = 400;
	printf("%d\n", * parr1);
	printf("%d\n", * parr2);

	return 0;
}