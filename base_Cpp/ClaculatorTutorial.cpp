//�̼���
//����
#include <iostream>
#include "Claculator.h"
#include <conio.h>//_getch()����ϱ� ���� �������


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
		if (_getch() == 3) { // ctrl+c �Է½� ����
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
			cout << ex << "�� ���� �� �����ϴ�." << endl;
			continue;
		}


		Calculator result;

		cout <<"= " << result.Calculate(ax, acper, ay) << endl;
	}

	return 0;
}