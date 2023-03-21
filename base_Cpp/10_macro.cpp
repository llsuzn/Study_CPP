#include <iostream>
#define SQUARE(x) ((x)*(x)) // 매크로 함수 선언

using namespace std;

int main() {
	cout << SQUARE(5) << endl;
	// cout << ((5)*(5)) << endl; 와 같은 구문
	return 0;
}
