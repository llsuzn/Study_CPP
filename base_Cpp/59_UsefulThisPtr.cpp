#include <iostream>
using namespace std;

class TwoNumber
{
private:
	// 멤버변수
	int num1;
	int num2;
public:
	TwoNumber(int num1, int num2) // 매개변수
	{
		this->num1 = num1; // num1(멤버변수) = num1(매개변수)
		this->num2 = num2;
	}
	void ShowTwoNumber()
	{
		cout << this->num1 << endl; // this -> num1 : 멤버변수
		cout << this->num2 << endl;
	}
};

int main()
{
	TwoNumber two(2, 4);
	two.ShowTwoNumber();
	return 0;
}