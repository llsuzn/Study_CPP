#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	int num2;
public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2)
	{
		
	}
	explicit SoSimple(SoSimple& copy) :num1(copy.num1), num2(copy.num2)
	{
		cout << "Called SoSimple(SoSimple &copy)" << endl;
	}
	void ShowSimpleData()
	{
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main()
{
	SoSimple sim1(15, 30);
	cout << "생성 및 초기화 직전" << endl;
	SoSimple sim2(sim1); // Sosimple sim2=sim1 과 동일,,,explicit 키워드를 사용하면 대입연산자 사용불가
	cout<< "생성 및 초기화 직후" << endl;
	sim1.ShowSimpleData();
	printf("---------------\n");
	sim2.ShowSimpleData();

	return 0;
}