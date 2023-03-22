#include <iostream>
using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}

int main()
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC;
	// AAA::BBB::CCC를 ABC라고 별칭을 지정해 줌
	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;
	return 0;
}