#include <stdio.h>  // C�ҽ��� �������

int main()
{
	int num;
	int* p = &num;
	*p = 20;
	printf("num : %d\n", num);
	printf("*p  : %d\n", *p);
	printf("num �ּ�  : %p\n", num);
	printf("*p  �ּ�  : %p\n", *p);

	int num1 = 100;
	int num2 = 200;
	int num3 = 300;
	const int * parr1 = &num1;
	// ������ ������ �ּ� ���� �ٲ� �� ������ ������ ������ ���󰡴� arr1�� ��� �����Ͱ� �ٲ��� ����
	int * const parr2 = &num2;
	// ������ ������ �ּ� ���� �����Ǿ� �ְ�, ������ ������ ���󰡴� arr2�� ��� �����ʹ� �ٲ� �� ����

	parr1 = &num3;
	*parr2 = 400;
	printf("%d\n", * parr1);
	printf("%d\n", * parr2);

	return 0;
}