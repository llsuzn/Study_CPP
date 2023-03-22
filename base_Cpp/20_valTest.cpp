#include <iostream>
int binary(int num);

int main()
{
	int num = 10;		// �ʱ�ȭ
	int num1;		    // ��������
	num1 = 20;			// ����
	num = 30;

	printf("int�� ũ��: %d\n", sizeof(int));

	char ch;			// ����Ÿ��
	printf("ch�� ũ��: %d\n", sizeof(char));

	double d = 3.14;	// �Ǽ�Ÿ��
	printf("double�� ũ��: %d\n", sizeof(double));

	char ch1 = 0x7f;		// 16���� : 0  1  2  3  4  5  6  7  8  9  A(10) B(11) C(12) D(13) E(14) F(15)
	// 0b 0111 1111 = 0d 127	
	unsigned char uch1 = 0x7f;

	printf("ch1(16����) : %x\nch1(8����) : %o\nch1(10����) : %d\n", ch1, ch1, ch1);
	// 2���� �ڷ����� ǥ������ ����
	printf("ch2(16����) : %x\nch2(8����) : %o\nch2(10����) : %d\n", uch1, uch1, uch1);

	char ch2 = 0x9f; // 0b 1001 1111
	unsigned char uch2 = 0x9f; 
	printf("ch1(16����) : %x\nch1(8����) : %o\nch1(10����) : %d\n", ch2, ch2, ch2);
	printf("ch2(16����) : %x\nch2(8����) : %o\nch2(10����) : %d\n", uch2, uch2, uch2);

	ch2 = ch2 << 1;
	uch2 = uch2 << 1; // ��Ʈ������.uch2�� �������� 1bit��ŭ �̵���Ų��.
	// 0b 1 0011 1110 = 3e
	printf("uch2 << 1: %x\n", uch2);
	printf("ch2 << 1: %x\n", ch2);
	ch2 = 0x9f; // 0b 1001 1111
	uch2 = 0x9f;
	ch2 = ch2 >> 1;
	uch2 = uch2 >> 1;
	printf("uch2 >> 1: %x\n", uch2);
	printf("ch2 >> 1: %x\n", ch2);

	printf("2���� : %d\n", binary(48));

	return 0;
}

int binary(int num) // ������ ���ϴ� �Լ�(���� ����)
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