//#include <iostream>
//using namespace std;
//
//class Super {
//public:
//	virtual void func1() {	cout << "Super::func1()" << endl;	}
//	virtual void func2() {	cout << "Super::func2()" << endl;	}
//	void func3() {	cout << "Super::func3()" << endl;	}
//};
//
//class Sub : public Super
//{
//public:
//	void func1() { cout << "Sub::func1()" << endl; } // virtual �Լ��� ��ӹ޾ұ� ������ �ڵ����� virtual�� ������(������ص� �����ȴ�)
//	void func2() { cout << "Sub::func2()" << endl; }
//	void func3() { cout << "Sub::func3()" << endl; }
//	void func4() { cout << "Sub::func4()" << endl; }
//
//};
//
//int main()
//{
//	Super super;
//	Sub sub;
//
//	super.func3();
//	super.func2();
//	super.func1();
//	sub.func4();
//	sub.func3();		// Super Ŭ������(�θ�Ŭ����) �޼ҵ� ���
//	sub.func2();		// Sub Ŭ������ �޼ҵ忡 �������� �θ�Ŭ������ �޼ҵ�� ������
//	sub.func1();
//
//	cout << endl;
//
//	Super* ps = new Sub; // �ڽİ�ü�� �θ������ͷ� �����Ѵ�.
//	ps->func3(); // �����ͷ� �θ�Ŭ������ �����Ѵ�
//	ps->func2(); // ������ Ÿ��(Super)�������� ����
//	ps->func1();
//	// virtual ����ϸ� �ڽ�Ŭ���� ���� ���� ...
//
//	delete ps;
//
//	return 0;
//}