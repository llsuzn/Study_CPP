#include <iostream>

//// 1번째
//int main()
//{
//	int n1 = 10;
//	int n2 = 20;
//
//	printf("변경 전\nn1: %d\t n2: %d\n", n1, n2);
//
//	n1 = 20;
//	n2 = 10;
//
//	printf("변경 후\nn1: %d\t n2: %d\n", n1, n2);
//
//	return 0;
//}

//// 2번째 : call by value
//void swap(int n1, int n2)
//{
//	int A;
//	A = n1;
//	n1 = n2;
//	n2 = A;	
//
//	printf("함수 내\nn1: %d\t n2: %d\n", n1, n2);
//}
//
//int main()
//{
//	int n1 = 10, n2 = 20;
//	printf("호출 전\nn1: %d\t n2: %d\n", n1, n2);
//	swap(n1, n2);
//	printf("호출 후\nn1: %d\t n2: %d\n", n1, n2);
//
//	return 0;
//}

// 3번째 : call by reference
void swap(int *pn1, int *pn2)
{
	int A;
	A = *pn1;
	*pn1 = *pn2;
	*pn2 = A;	

	printf("함수 내\nn1: %d\t n2: %d\n", *pn1, *pn2);
}

int main()
{
	int n1 = 10, n2 = 20;
	printf("호출 전\nn1: %d\t n2: %d\n", n1, n2);
	swap(&n1, &n2);
	printf("호출 후\nn1: %d\t n2: %d\n", n1, n2);

	return 0;
}