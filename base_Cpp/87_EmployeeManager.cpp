#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
	char name[100];
public:
	Employee(const char* name)
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const // 함수 상수화(name값 즉, 함수안에 내용이 변경되지 않음)
	{
		cout << "name: " << name << endl;
	}
};

class PermanentWorker :public Employee
{
private:
	int salary;
public:
	PermanentWorker(char*name,int money):Employee(name),salary(money)
	{ }
	int GetPay() const // 함수 오버라이딩 ... 자식 클래스의 오버라이딩 된 메소드에 의해 가려짐
	{
		return salary;
	}
	void ShowSalaryInfo() const // 함수 오버라이딩
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class TemporaryWorker : public Employee
{
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(char * name, int pay):Employee(name),workTime(0),payPerHour(pay)
	{ }
	void AddWorkTime(int time)
	{
		workTime += time;
	}
	int GetPay() const 
	{
		return workTime * payPerHour;
	}
	void ShowSalaryInfo() const 
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl; // GetPay()는 저장되지 않고 호출만 되니 임시객체이다
	}
};

class SaleWorker : public PermanentWorker
{
private:
	int saleResult;
	double bonusRatio;
public:
	SaleWorker(char * name,int money,double ratio):PermanentWorker(name,money),saleResult(0),bonusRatio(ratio)
	{ }
	void AddSalesResult(int value)
	{
		saleResult += value;
	}
	int GetPay() const // 함수 오버라이딩
	{
		return PermanentWorker::GetPay() + (int)(saleResult * bonusRatio);
	}
	void ShowsalaryInfo() const // 함수 오버라이딩
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class EmployeeHandler
{
private:
	Employee* empList[50]; // 포인터 배열 : 포인터를 저장한다
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{ }
	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{
		
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		cout << "salary sum : " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0;i < empNum;i++)
		{
			delete empList[i];
		}
	}
};

int main()
{
	// 직원관리를 목적으로 설계된 컨트롤 클래스의 객체생성
	EmployeeHandler handler;

	// 정규직 등록
	handler.AddEmployee(new PermanentWorker("Lee", 1000));
	handler.AddEmployee(new PermanentWorker("Kim", 1500));

	//임시직 등록
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	//영업직 등록
	SaleWorker* seller = new SaleWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000); // '->' 포인터로 접근하는 경우
	handler.AddEmployee(seller);  // '.'  객체를 통해 접근하는 경우

	// 이번 달에 지불해야 할 급여
	handler.ShowAllSalaryInfo();

	// 이번 달에 지불해야 할 급여의 총합
	handler.ShowTotalSalary();
	return 0;
}