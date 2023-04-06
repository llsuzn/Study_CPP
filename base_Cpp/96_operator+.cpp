#include <iostream>
using namespace std;

class MyClass {
	int num1, num2;
	const char* name;
public:
	MyClass(int anum1 = 0, int anum2 = 0, const char* aname = nullptr) : num1(anum1),num2(anum2),name(aname) { }
	void ShowData() {
		cout << num1 << ", " << num2 << ", " << name << endl;
	}
};

int main()
{
	MyClass m(1, 2, "Lee");
	m.ShowData();

	MyClass cm(m);		// cm = m�̶�� �ǹ�
	cm.ShowData();

	MyClass n;  // �Ű������� ������ ����Ʈ������ �ʱ�ȭ(0,0,nullptr)
	n = cm;		// ���Կ����ڰ� ��ü������ ������
	n.ShowData(); 

	return 0;
}