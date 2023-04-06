//이수진
#include <iostream>
#include "Claculator.h"
#include <string>
#include <vector>
#include <sstream>
#pragma warning(disable:4996)

using namespace std;

vector<string> split(string str, char Delimiter) {
	istringstream iss(str);             // istringstream에 str을 담는다.
	string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼

	vector<string> result;

	// istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
	while (getline(iss, buffer, Delimiter)) {
		result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
	}

	return result;
}

int main()
{
	Calculator cal;									// 객체 생성
	string str;										// 문자열 입력받을 변수
	char acper;										// 연산자 변수
	vector<string> result;							// 숫자 입력받을 벡터

	printf("Calculator Console Application\n");
	printf("Please enter the operation to perform. Format: a+b | a-b | a*b | a/b\n");
	printf("Press \"ctrl + c\" to exit the program\n");

	while (true)
	{
		cout<<endl<< "input >>";
		getline(cin, str);							//  문자열 입력받기

		for (int i = 0;i < str.length();i++) {		// 문자열에서 공백이 있다면 제거하기
			if (str[i] == ' ') str.erase(i, 1);
		}

		for (int i = 0;i < str.length();i++) {		// 입력받은 문자가 아스키코드의 숫자범위를 벗어나면 문자로 인식
			if (str[i]  < 48 || str[i]>57) { 
				acper = str[i];
				break;
			}
		}

		result = split(str, acper);					// 연산자 기준으로 문자(숫자)나누기

		try {										// 0으로 나눌 때 예외처리
			if (acper == '/' && stod(result[1]) == 0)throw stod(result[1]);
		}
		catch (double ex) {
			cout << ex << "로 나눌 수 없습니다." << endl;
			continue;
		}

		cout << "= " << cal.Calculate(stod(result[0]), acper, stod(result[1])) << endl; // 계산해주기
	}

	return 0;
}