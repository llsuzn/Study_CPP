#include <iostream>
using namespace std;

class MyClass
{
private: // 외부 접근 (95%)X
	// 값은 멤버함수를 통해서만 초기화 가능
	int private_val;

public: // 외부 접근 O
	int public_val;

protected: // 상속에서만 접근 가능
	int protected_val;

public: // 멤버변수는 무조건 public
	void get()
	{
		cout << "private_val: " << private_val << endl;
		cout << "public_val: " << public_val << endl;
	}
	void set(int an)
	{
		private_val = an;
	}
};

int main()
{
	MyClass o;
	// o.private_val;
	o.public_val = 10;
	// o.protected_val;
	o.set(1);
	o.get();

	MyClass m;
	m.public_val = 20;
	m.set(2);
	m.get();

	return 0;
}