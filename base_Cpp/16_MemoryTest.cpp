#include <iostream>
#include <stdio.h>

int g = 0;		// ��������

void func()
{
	printf("func()    : %p\n",func);
}

int main()
{
	int n = 10;		// ��������
	static int c = 10;		// ���� ����
	const int d = 10;
	char arr[10] = "hi";
	
	printf("�ּ�Ȯ��\n");
	printf("local   n : %p\n", &n);
	printf("global  g : %p\n", &g);
	printf("static  c : %p\n", &c);
	printf("const   d : %p\n", &d);
	printf("array     : %p\n", arr);
	func();

	return 0;
}