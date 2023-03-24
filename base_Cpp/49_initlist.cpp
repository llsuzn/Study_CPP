/*
�̴ϼȶ����� ����ؼ� �ʱ�ȭ ���Ѿ��ϴ� ���
	1. ���(const)��� ����
	2. ��ü��� ����
	3. ������� ����
	4. ��� ����
*/

#include <iostream>
using namespace std;

class ConstSome
{
public:
	const int val; // ������ ����
	ConstSome(int n) : val(n) {	}

	void printval() {
		cout << val << endl;
	}
};

class RefSome
{
public:
	int& ref; // ������ (&), ������� ����
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
	Position pos;	// ��ü��� ����
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

