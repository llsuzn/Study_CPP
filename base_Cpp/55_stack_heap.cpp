#include <iostream>

using namespace std;

class Orange
{
private:
	int price;

public:
	Orange(int price)
	{
		this->price = price;
		cout << "[������] ������ ���� : " << price << endl;
	}

	~Orange()
	{
		cout << "[�Ҹ���]" << endl;
	}

	void ShowPrice()
	{
		cout << "[����] ������ : " << price << endl;
	}
};

void stack()
{
	cout << "*** stack Orange orange(500); ***" << endl;
	Orange orange(500); // stack����
	orange.ShowPrice();
}

void heap()
{
	cout << "*** heap Orange *orange = new Orange(1000); ***" << endl;
	Orange* orange = new Orange(1000); // heap ����
	orange->ShowPrice();

	delete orange;
}

int main(void)
{
	stack();

	heap();

	return 0;
}