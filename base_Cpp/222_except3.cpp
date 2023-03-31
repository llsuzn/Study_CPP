#include <iostream>
using namespace std;

int divide(int a, int b)
{
	int c, d;
	try
	{
		if (b == 0) throw b;

		c = a / b;
		cout << "몫: " << c << endl;
		d = a % b;
		cout << "나머지: " << d << endl;
	}
	catch (int ex) {
		cout << ex << "로 나눌 수 없습니다. 예외발생!" << endl;
	}

}

int main()
{
	divide(10, 3);
	divide(100, 5);
	divide(3, 0);

	cout << "예외가 발생을 해도 정상종료!" << endl;
	return 0;
}