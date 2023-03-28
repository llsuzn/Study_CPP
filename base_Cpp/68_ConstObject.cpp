#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData() const
	{
		cout << "num: " << num << endl;
	}
};

int main()
{
	const SoSimple obj(7);
	//obj.AddNum(); //const 가 아니라 호출 불가
	obj.ShowData();

	return 0;
}