//#include <iostream>
//using namespace std;
//
//class SoSimple
//{
//private:
//	static int simObjCnt;
//public:
//	SoSimple()
//	{
//		simObjCnt++;
//		cout << simObjCnt << "��° SoSimple ��ü" << endl;
//	}
//};
//// static ��������� ��ü �Ҽ�(���)��/�� �ƴ϶� class �Ҽ��̱� ������ class �ۿ��� �ʱ�ȭ�� �̷������Ѵ�.
//int SoSimple::simObjCnt = 0; // Ŭ���� �������� �ʱ�ȭ ���
//
//class SoComplex
//{
//private:
//	static int cmxObjCnt;
//public:
//	SoComplex()
//	{
//		cmxObjCnt++;
//		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
//	}
//	SoComplex(SoComplex &copy)
//	{
//		cmxObjCnt++;
//		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
//	}
//};
//int SoComplex::cmxObjCnt = 0;
//
//int main()
//{
//	SoSimple sim1;
//	SoSimple sim2;
//	
//	SoComplex com1;
//	SoComplex com2 = com1;
//	SoComplex();
//	
//	return 0;
//}