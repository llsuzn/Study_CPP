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
		cout << "[생성자] 오렌지 가격 : " << price << endl;
	}

	~Orange()
	{
		cout << "[소멸자]" << endl;
	}

	void ShowPrice()
	{
		cout << "[가격] 오렌지 : " << price << endl;
	}
};

void stack()
{
	cout << "*** stack Orange orange(500); ***" << endl;
	Orange orange(500); // stack영역
	orange.ShowPrice();
}

void heap()
{
	cout << "*** heap Orange *orange = new Orange(1000); ***" << endl;
	Orange* orange = new Orange(1000); // heap 영역
	orange->ShowPrice();

	delete orange;
}

int main(void)
{
	stack();

	heap();

	return 0;
}