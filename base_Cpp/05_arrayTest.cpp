#include <iostream>

int main()
{	
	char ch[5] = "hong"; //배열은 만듦과 동시에 초기화 해주는 것이 편리하다. >> 나중에 배열을 초기화 해준다면 인덱스 하나하나 접근해야함
	ch[0] = 'h';
	ch[1] = 'o';
	ch[2] = 'n';
	ch[3] = 'g';
	ch[4] = '\0';

	for (int i = 0;i < 5;i++)
	{
		printf("%c", ch[i]);
	}

	printf("char 크기 : %d\n", sizeof(char));
	printf("%s\n", ch); // 널 문자의 유무에 따라 문자열인지 아닌지 판단함....널 문자가 없다면 계속 출력이 발생함
	printf("%c\n",ch[3]);

	printf("배열 이름 ch: %p\n", ch);
	printf("배열 주소 ch: %p\n", &ch);
	// 배열의 이름이 곧 배열의 주소를 뜻한다.

	return 0;
}