#include <iostream>
#include <cstring>
#include <cstdlib>
#pragma warning(disable:4996)
using namespace std;

char* MakeStrAdr(int len)
{
	char * str = (char*)malloc(sizeof(char) * len);
	return str;
}

int main()
{
	char * str = MakeStrAdr(30);
	strcpy(str, "I am so happy");
	cout << str << endl;
	free(str);

	return 0;
}