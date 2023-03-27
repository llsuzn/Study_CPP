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
	cout << "���� �� �ʱ�ȭ ����" << endl;
	SoSimple sim2(sim1); // Sosimple sim2=sim1 �� ����,,,explicit Ű���带 ����ϸ� ���Կ����� ���Ұ�
	cout<< "���� �� �ʱ�ȭ ����" << endl;
	sim1.ShowSimpleData();
	printf("---------------\n");
	sim2.ShowSimpleData();

	return 0;
}