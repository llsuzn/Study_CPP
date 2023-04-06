//�̼���
#include <iostream>
#include "Claculator.h"
#include <string>
#include <vector>
#include <sstream>
#pragma warning(disable:4996)

using namespace std;

vector<string> split(string str, char Delimiter) {
	istringstream iss(str);             // istringstream�� str�� ��´�.
	string buffer;                      // �����ڸ� �������� ����� ���ڿ��� ������� ����

	vector<string> result;

	// istringstream�� istream�� ��ӹ����Ƿ� getline�� ����� �� �ִ�.
	while (getline(iss, buffer, Delimiter)) {
		result.push_back(buffer);               // ����� ���ڿ��� vector�� ����
	}

	return result;
}

int main()
{
	Calculator cal;									// ��ü ����
	string str;										// ���ڿ� �Է¹��� ����
	char acper;										// ������ ����
	vector<string> result;							// ���� �Է¹��� ����

	printf("Calculator Console Application\n");
	printf("Please enter the operation to perform. Format: a+b | a-b | a*b | a/b\n");
	printf("Press \"ctrl + c\" to exit the program\n");

	while (true)
	{
		cout<<endl<< "input >>";
		getline(cin, str);							//  ���ڿ� �Է¹ޱ�

		for (int i = 0;i < str.length();i++) {		// ���ڿ����� ������ �ִٸ� �����ϱ�
			if (str[i] == ' ') str.erase(i, 1);
		}

		for (int i = 0;i < str.length();i++) {		// �Է¹��� ���ڰ� �ƽ�Ű�ڵ��� ���ڹ����� ����� ���ڷ� �ν�
			if (str[i]  < 48 || str[i]>57) { 
				acper = str[i];
				break;
			}
		}

		result = split(str, acper);					// ������ �������� ����(����)������

		try {										// 0���� ���� �� ����ó��
			if (acper == '/' && stod(result[1]) == 0)throw stod(result[1]);
		}
		catch (double ex) {
			cout << ex << "�� ���� �� �����ϴ�." << endl;
			continue;
		}

		cout << "= " << cal.Calculate(stod(result[0]), acper, stod(result[1])) << endl; // ������ֱ�
	}

	return 0;
}