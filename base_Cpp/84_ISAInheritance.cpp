#include <iostream>
#include <cstring>
using namespace std;

class computer
{
private:
	char owner[50];
public:
	computer(char* name)
	{
		strcpy(owner, name);
	}
	void calculate()
	{
		cout << "��û ������ ����մϴ�." << endl;
	}
};

class notebookcomp : public computer
{
private:
	int battery;
public:
	notebookcomp(char * name , int initchag) : computer(name), battery(initchag)
	{ }
	void charging() { battery += 5; }
	void usebattery() { battery -= 5; }
	void movingcal()
	{
		if (getbatteryinfo() < 1)
		{
			cout << "������ �ʿ��մϴ�." << endl;
			return;
		}
		cout << "�̵��ϸ鼭 ";
		calculate();
		usebattery();
	}
	int getbatteryinfo() { return battery; }
};

class tabletnotebook : public notebookcomp
{
private:
	char regstpenmodel[50];
public:
	tabletnotebook(char* name, int initchag, char* pen) :notebookcomp(name, initchag)
	{
		strcpy(regstpenmodel, pen);
	}
	void write(char* peninfo)
	{
		if (getbatteryinfo() < 1)
		{
			cout << "������ �ʿ��մϴ�. " << endl;
			return;
		}
		if (strcmp(regstpenmodel, peninfo) != 0)
		{
			cout << "��ϵ� ���� �ƴմϴ�.";
			return;
		}
		cout << "�ʱ� ������ ó���մϴ�." << endl;
		usebattery();
	}
};

int main()
{
	notebookcomp nc("�̼���", 5);
	tabletnotebook tn("�̱Լ�", 5, "ise-241-242");
	nc.movingcal();
	tn.write("ise-241-242");
	

	return 0;
}