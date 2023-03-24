/*
이니셜라이저 사용해서 초기화 시켜야하는 경우
	1. 상수(const)멤버 변수
	2. 객체멤버 변수
	3. 참조멤버 변수
	4. 멤버 변수
*/

#include <iostream>
using namespace std;

class ConstSome
{
public:
	const int val; // 상수멤버 변수
	ConstSome(int n) : val(n) {	}

	void printval() {
		cout << val << endl;
	}
};

class RefSome
{
public:
	int& ref; // 참조자 (&), 참조멤버 변수
	RefSome(int n): ref(n) { }
	void printval() {
		cout << ref << endl;
	}
};

class Position
{
public:
	int x, y;
	Position(int ax, int ay) {
		x = ax;
		y = ay;
	}
};

class ObjSome
{
public:
	Position pos;	// 객체멤버 변수
	ObjSome(int ax,int ay): pos(ax,ay) { }
	void printval() {
		cout << pos.x << " " << pos.y << endl;
	}
};

int main()
{
	ConstSome c(10);
	c.printval();

	int n = 20;
	RefSome r(n);
	r.printval();

	ObjSome o(30, 40);
	o.printval();

	return 0;
}

