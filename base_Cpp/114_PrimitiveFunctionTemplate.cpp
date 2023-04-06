#include <iostream>
using namespace std;

template <class T1,class T2>
void ShowData(double num)
{
	cout << (T1)num << ", " << (T2)num << endl;
}

int main()
{
	ShowData<char, int>(65);
	ShowData<char, int>(67);
	ShowData<char, double>(68.7);
	ShowData<short, double>(69.2);
	ShowData<short, double>(65);

	return 0;
}