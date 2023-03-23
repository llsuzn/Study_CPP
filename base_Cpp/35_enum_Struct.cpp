#include <iostream>
using namespace std;

enum week
{
	sun,
	mon = 3,
	tue, // 전에 숫자로부터 1씩 증가되어서 초기화 됨
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

