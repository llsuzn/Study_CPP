#include <iostream>
using namespace std;

enum week
{
	sun,
	mon = 3,
	tue, // ���� ���ڷκ��� 1�� �����Ǿ �ʱ�ȭ ��
	wed
};

int main()
{
	printf("%d\n", sun);
	printf("%d\n", mon);
	printf("%d\n", tue);
	printf("%d\n", wed);

	return 0;
}

