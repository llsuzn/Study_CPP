#include <iostream>
// ���ø� �Լ��� ������ �ζ��� �Լ�
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