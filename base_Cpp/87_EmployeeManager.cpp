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
	void ShowYourName() const // �Լ� ���ȭ(name�� ��, �Լ��ȿ� ������ ������� ����)
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
	int GetPay() const // �Լ� �������̵� ... �ڽ� Ŭ������ �������̵� �� �޼ҵ忡 ���� ������
	{
		return salary;
	}
	void ShowSalaryInfo() const // �Լ� �������̵�
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
		cout << "salary: " << GetPay() << endl << endl; // GetPay()�� ������� �ʰ� ȣ�⸸ �Ǵ� �ӽð�ü�̴�
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
	int GetPay() const // �Լ� �������̵�
	{
		return PermanentWorker::GetPay() + (int)(saleResult * bonusRatio);
	}
	void ShowsalaryInfo() const // �Լ� �������̵�
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class EmployeeHandler
{
private:
	Employee* empList[50]; // ������ �迭 : �����͸� �����Ѵ�
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
	// ���������� �������� ����� ��Ʈ�� Ŭ������ ��ü����
	EmployeeHandler handler;

	// ������ ���
	handler.AddEmployee(new PermanentWorker("Lee", 1000));
	handler.AddEmployee(new PermanentWorker("Kim", 1500));

	//�ӽ��� ���
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	//������ ���
	SaleWorker* seller = new SaleWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000); // '->' �����ͷ� �����ϴ� ���
	handler.AddEmployee(seller);  // '.'  ��ü�� ���� �����ϴ� ���

	// �̹� �޿� �����ؾ� �� �޿�
	handler.ShowAllSalaryInfo();

	// �̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowTotalSalary();
	return 0;
}