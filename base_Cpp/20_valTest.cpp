#include <iostream>
int binary(int num);

int main()
{
	int num = 10;		// 초기화
	int num1;		    // 변수선언
	num1 = 20;			// 대입
	num = 30;

	printf("int의 크기: %d\n", sizeof(int));

	char ch;			// 문자타입
	printf("ch의 크기: %d\n", sizeof(char));

	double d = 3.14;	// 실수타입
	printf("double의 크기: %d\n", sizeof(double));

	char ch1 = 0x7f;		// 16진법 : 0  1  2  3  4  5  6  7  8  9  A(10) B(11) C(12) D(13) E(14) F(15)
	// 0b 0111 1111 = 0d 127	
	unsigned char uch1 = 0x7f;

	printf("ch1(16진수) : %x\nch1(8진수) : %o\nch1(10진수) : %d\n", ch1, ch1, ch1);
	// 2진수 자료형은 표현법이 없음
	printf("ch2(16진수) : %x\nch2(8진수) : %o\nch2(10진수) : %d\n", uch1, uch1, uch1);

	char ch2 = 0x9f; // 0b 1001 1111
	unsigned char uch2 = 0x9f; 
	printf("ch1(16진수) : %x\nch1(8진수) : %o\nch1(10진수) : %d\n", ch2, ch2, ch2);
	printf("ch2(16진수) : %x\nch2(8진수) : %o\nch2(10진수) : %d\n", uch2, uch2, uch2);

	ch2 = ch2 << 1;
	uch2 = uch2 << 1; // 비트연산자.uch2를 왼쪽으로 1bit만큼 이동시킨다.
	// 0b 1 0011 1110 = 3e
	printf("uch2 << 1: %x\n", uch2);
	printf("ch2 << 1: %x\n", ch2);
	ch2 = 0x9f; // 0b 1001 1111
	uch2 = 0x9f;
	ch2 = ch2 >> 1;
	uch2 = uch2 >> 1;
	printf("uch2 >> 1: %x\n", uch2);
	printf("ch2 >> 1: %x\n", ch2);

	printf("2진수 : %d\n", binary(48));

	return 0;
}

int binary(int num) // 이진수 구하는 함수(직접 만듦)
{
	int sqten = 1;
	int result = 0;
	while (true)
	{
		int i = 0;
		result += (num % 2) * sqten;
		num = num / 2;
		i++;
		sqten = 10 * sqten;
		if (num == 0)
			break;
	}
	return result;
}