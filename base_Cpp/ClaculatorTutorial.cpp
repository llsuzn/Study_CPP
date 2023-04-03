//이수진
//메인
#include <iostream>
#include "Claculator.h"
#include <conio.h>//_getch()사용하기 위한 헤더파일


using namespace std;

int main()
{
	printf("Calculator Console Application\n");
	printf("Please enter the operation to perform. Format: a+b | a-b | a*b | a/b\n");
	printf("Press \"ctrl + c\" to exit the program\n");

	while (true)
	{
		cout << endl;
		cout << "input >> ";
		if (_getch() == 3) { // ctrl+c 입력시 종료
			break;
		}

		double ax;
		double ay;
		char acper;

		cin >> ax >> acper >> ay;

		try {
			if (acper == '/' && ay == 0)throw ay;
		}
		catch (double ex) {
			cout << ex << "로 나눌 수 없습니다." << endl;
			continue;
		}


		Calculator result;

		cout <<"= " << result.Calculate(ax, acper, ay) << endl;
	}

	return 0;
}