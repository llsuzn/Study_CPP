//#include <iostream>
//using namespace std;
//
//class StaticTest {
//private:
//	static int a;				  // ��������� static
//	int b;
//public:
//	StaticTest();
//	static void setData(int aa);  // ����Լ��� static
//	void printData();
//};
//int StaticTest::a = 10;		      // static ������� �ʱ�ȭ
//
//StaticTest::StaticTest() {
//	this->b = 20;
//}
//void StaticTest::setData(int aa) {
//	// this->a = 30; �����߻� ...  this�� ��ü�� ����Ŵ ���� static �������(class �Ҽ�...��üX) ���� �Ұ���
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
//	StaticTest::setData(100); // static���� ������ �Ǿ Ŭ������ ������ �����ϴ�
//	s1.printData();
//	s2.printData();
//
//	return 0;
//}