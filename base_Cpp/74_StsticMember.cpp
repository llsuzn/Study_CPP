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
//		cout << simObjCnt << "번째 SoSimple 객체" << endl;
//	}
//};
//// static 멤버변수는 객체 소속(멤버)이/가 아니라 class 소속이기 때문에 class 밖에서 초기화가 이뤄져야한다.
//int SoSimple::simObjCnt = 0; // 클래스 정적변수 초기화 방법
//
//class SoComplex
//{
//private:
//	static int cmxObjCnt;
//public:
//	SoComplex()
//	{
//		cmxObjCnt++;
//		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
//	}
//	SoComplex(SoComplex &copy)
//	{
//		cmxObjCnt++;
//		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
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