#include <iostream>

int main()
{	
	char ch[5] = "hong"; //�迭�� ����� ���ÿ� �ʱ�ȭ ���ִ� ���� ���ϴ�. >> ���߿� �迭�� �ʱ�ȭ ���شٸ� �ε��� �ϳ��ϳ� �����ؾ���
	ch[0] = 'h';
	ch[1] = 'o';
	ch[2] = 'n';
	ch[3] = 'g';
	ch[4] = '\0';

	for (int i = 0;i < 5;i++)
	{
		printf("%c", ch[i]);
	}

	printf("char ũ�� : %d\n", sizeof(char));
	printf("%s\n", ch); // �� ������ ������ ���� ���ڿ����� �ƴ��� �Ǵ���....�� ���ڰ� ���ٸ� ��� ����� �߻���
	printf("%c\n",ch[3]);

	printf("�迭 �̸� ch: %p\n", ch);
	printf("�迭 �ּ� ch: %p\n", &ch);
	// �迭�� �̸��� �� �迭�� �ּҸ� ���Ѵ�.

	return 0;
}