#include <iostream>
using namespace std;

int add(int n1, int n2)
{
	return n1 + n2;
}
int sub(int n1, int n2)
{
	return n1 - n2;
}

int main()
{
	int res;
	int (*fp)(int, int); // ÇÔ¼öÆ÷ÀÎÅÍ ¼±¾ğ
	fp = add;
	res = fp(10, 20);
	printf("µ¡¼À °á°ú : %d\n", res);
	fp = sub;
	res = fp(30, 20);
	printf("»¬¼À °á°ú : %d\n", res);

	printf("%p\n", add);

	return 0;
}

