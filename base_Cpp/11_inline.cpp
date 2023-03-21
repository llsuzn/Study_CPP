#include <iostream>
// 템플릿 함수로 보완한 인라인 함수
using namespace std;

template <typename T>
inline T SQUARE(T x)
{
	return x * x;
}

int main() {
	cout << SQUARE(6.6) << endl;

	return 0;
}