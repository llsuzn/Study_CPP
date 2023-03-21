#include <iostream>

using namespace std;

inline int SQUARE(int x)
{
	return x * x;
}

int main() {
	cout << SQUARE(6) << endl;

	return 0;
}