#include <iostream>
using namespace std;

int main()
{
	int size;
	int* arr;
	cout << "배열의 개수를 입력하세요: " ;
	cin >> size;

	//동적 메모리 할당
	arr = new int[size];

	for (int i = 0;i < size;i++)
	{
		cout << i + 1 << "번째 숫자: ";
		cin >> *(arr + i);
	}
	for (int i = 0;i < size;i++)
	{
		cout << *(arr + i) << endl;
	}

	return 0;
}