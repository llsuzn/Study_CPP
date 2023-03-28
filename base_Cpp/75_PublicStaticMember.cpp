//#include <iostream>
//using namespace std;
//
//class SoSimple
//{
//public:
//	static int simObjCnt; // 외부접근 가능
//public:
//	SoSimple()
//	{
//		simObjCnt++;
//	}
//};
//int SoSimple::simObjCnt = 0;
//
//int main()
//{
//	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl; // 클래스 멤버이기 때문에 :: 사용해서도 접근이 가능하다
//	SoSimple sim1;
//	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
//	SoSimple sim2;
//
//	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
//	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;
//
//	return 0;
//}