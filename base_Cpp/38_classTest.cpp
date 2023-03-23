#include <iostream>
using namespace std;

class MyClass
{
private: // �ܺ� ���� (95%)X
	// ���� ����Լ��� ���ؼ��� �ʱ�ȭ ����
	int private_val;

public: // �ܺ� ���� O
	int public_val;

protected: // ��ӿ����� ���� ����
	int protected_val;

public: // ��������� ������ public
	void get()
	{
		cout << "private_val: " << private_val << endl;
		cout << "public_val: " << public_val << endl;
	}
	void set(int an)
	{
		private_val = an;
	}
};

int main()
{
	MyClass o;
	// o.private_val;
	o.public_val = 10;
	// o.protected_val;
	o.set(1);
	o.get();

	MyClass m;
	m.public_val = 20;
	m.set(2);
	m.get();

	return 0;
}