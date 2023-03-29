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
//	void func1() { cout << "Sub::func1()" << endl; } // virtual 함수를 상속받았기 때문에 자동으로 virtual이 생성됨(선언안해도 생성된다)
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
//	sub.func3();		// Super 클래스의(부모클래스) 메소드 상속
//	sub.func2();		// Sub 클래스의 메소드에 가려져서 부모클래스의 메소드는 가려짐
//	sub.func1();
//
//	cout << endl;
//
//	Super* ps = new Sub; // 자식객체를 부모포인터로 연결한다.
//	ps->func3(); // 포인터로 부모클래스에 접근한다
//	ps->func2(); // 포인터 타입(Super)기준으로 접근
//	ps->func1();
//	// virtual 사용하면 자식클래스 접근 가능 ...
//
//	delete ps;
//
//	return 0;
//}