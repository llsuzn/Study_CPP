#include <iostream>

using namespace std;

namespace BestComImp1
{
	void SimpleFunc(void);
}
namespace BestComImp1
{
	void llsuzn(void);
}
namespace ProgComImp1
{
	void SimpleFunc(void);
}
int main()
{
	BestComImp1::SimpleFunc();

	return 0;
}

void BestComImp1::SimpleFunc(void)
{
	cout << "BestCom�� ������ �Լ�" << endl;
	llsuzn(); //���� �̸�����
	ProgComImp1::SimpleFunc(); // �ٸ� �̸�����
}
void BestComImp1::llsuzn(void)
{
	cout << "�̼����Դϴ�." << endl;
}
void ProgComImp1::SimpleFunc(void)
{
	cout << "ProgCom�� ������ �Լ�" << endl;
}