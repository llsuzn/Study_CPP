#include <iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numofApples;
	int myMoney;

public:
	void InitMenbers(int price, int num, int money)
	{
		APPLE_PRICE = price;
		numofApples = num;
		myMoney = money;
	}
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numofApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSalesResult()
	{
		cout << "남은 사과: " << numofApples << endl;
		cout << "판매 수익: " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;
	int numofApples;

public:
	void InitMenbers(int money)
	{
		numofApples = 0;
		myMoney = money;
	}
	void BuyApples(FruitSeller& seller, int money)
	{
		numofApples += seller.SaleApples(money);
		myMoney -= money;
	}
	void ShowSalesResult()
	{
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numofApples << endl << endl;
	}
};

int main()
{
	FruitSeller seller;
	seller.InitMenbers(1000, 20, 0);

	cout << "과일 판매자의 현황: " << endl;
	seller.ShowSalesResult();

	FruitBuyer buyer;
	buyer.InitMenbers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황: " << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황: " << endl;
	buyer.ShowSalesResult();

	return 0;
}