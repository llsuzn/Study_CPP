//#include <iostream>
//using namespace std;
//
//class StaticTest {
//private:
//	static int a;				  // 멤버변수의 static
//	int b;
//public:
//	StaticTest();
//	static void setData(int aa);  // 멤버함수의 static
//	void printData();
//};
//int StaticTest::a = 10;		      // static 멤버변수 초기화
//
//StaticTest::StaticTest() {
//	this->b = 20;
//}
//void StaticTest::setData(int aa) {
//	// this->a = 30; 에러발생 ...  this는 객체를 가리킴 따라서 static 멤버변수(class 소속...객체X) 접근 불가능
//	a = aa;
//}
//void StaticTest::printData() {
//	cout << "a: " << a << ", " << "b: " << b << endl;
//}
//
//int main()
//{
//	StaticTest s1, s2;
//	s1.printData();
//	s2.printData();
//
//	s1.setData(30);
//	s1.printData();
//	s2.printData();
//
//	StaticTest::setData(100); // static으로 선언이 되어서 클래스로 접근이 가능하다
//	s1.printData();
//	s2.printData();
//
//	return 0;
//}