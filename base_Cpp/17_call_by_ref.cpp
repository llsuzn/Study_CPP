#include <iostream>

//// 1��°
//int main()
//{
//	int n1 = 10;
//	int n2 = 20;
//
//	printf("���� ��\nn1: %d\t n2: %d\n", n1, n2);
//
//	n1 = 20;
//	n2 = 10;
//
//	printf("���� ��\nn1: %d\t n2: %d\n", n1, n2);
//
//	return 0;
//}

//// 2��° : call by value
//void swap(int n1, int n2)
//{
//	int A;
//	A = n1;
//	n1 = n2;
//	n2 = A;	
//
//	printf("�Լ� ��\nn1: %d\t n2: %d\n", n1, n2);
//}
//
//int main()
//{
//	int n1 = 10, n2 = 20;
//	printf("ȣ�� ��\nn1: %d\t n2: %d\n", n1, n2);
//	swap(n1, n2);
//	printf("ȣ�� ��\nn1: %d\t n2: %d\n", n1, n2);
//
//	return 0;
//}

// 3��° : call by reference
void swap(int *pn1, int *pn2)
{
	int A;
	A = *pn1;
	*pn1 = *pn2;
	*pn2 = A;	

	printf("�Լ� ��\nn1: %d\t n2: %d\n", *pn1, *pn2);
}

int main()
{
	int n1 = 10, n2 = 20;
	printf("ȣ�� ��\nn1: %d\t n2: %d\n", n1, n2);
	swap(&n1, &n2);
	printf("ȣ�� ��\nn1: %d\t n2: %d\n", n1, n2);

	return 0;
}