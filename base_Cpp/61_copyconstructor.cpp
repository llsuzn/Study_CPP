#include <iostream>
using namespace std;

class Myclass
{
	int num; //stack����
public:
	Myclass(int n) : num(n) { //�ݷ� �ʱ�ȭ
		cout << "������ ȣ��" << endl;
	}
	Myclass(Myclass& copy) { // ��ü�� �Ű�����(Myclass copy)�� ������ ���ѷ��� ,,, !�Ű������� ������ ����������!
		cout << "��������� ȣ��" << endl;
		num = copy.num*2;
	}
	void getData();
};

void Myclass::getData()
{
	cout << num << endl;
}

int main()
{
	Myclass m1(10);  //��ü ����
	Myclass m2 = m1; // ��������� ȣ�� ... int num1 = num2
	Myclass m3(m2);  // ��������� ȣ�� ... int num3 = num2(num1)
	// ��������ڵ� ��������� �ʾƵ� default(���� ����)�� ��������� ������ �� �ڵ尡 �����
	//stack������ ���� ����
	//heap ������ ���� ����� ������ �߻�

	m1.getData();
	m2.getData();
	m3.getData();

	return 0;
}