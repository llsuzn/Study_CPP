#include <iostream>

using namespace std;

int main()
{
	int val1;
	cout << "첫 번째 숫자 입력: "; // 엔터치는 순간 입력된 값이 입력버퍼에 올라감(저장 됨)
	cin >> val1; // 입력버퍼에 있는 값이 val1에 저장된다

	int val2;
	cout << "두 번째 숫자 입력: ";
	cin >> val2;

	int res = val1 + val2;
	cout << "덧셈 결과 : " << res << endl;

	return 0;
}