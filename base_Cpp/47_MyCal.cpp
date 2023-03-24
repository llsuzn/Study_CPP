#include <iostream>
using namespace std;

class MyCal
{
private:
	int num1;
	int num2;
public:
	//»ý¼ºÀÚ·Î ÃÊ±âÈ­(ÄÝ·ÐÃÊ±âÈ­)	
	MyCal(int n1, int n2);
	void add();
	void sub();
	void mul();
	void div();
	void all();
};

MyCal::MyCal(int n1,int n2):num1(n1),num2(n2){}

void MyCal::add()
{
	int result = num1 + num2;
	cout << "µ¡¼À°á°ú: " << result << endl;
}
void MyCal::sub()
{
	int result = num1 - num2;
	cout << "»¬¼À°á°ú: " << result << endl;
}
void MyCal::mul()
{
	int result = num1 * num2;
	cout << "°ö¼À°á°ú: " << result << endl;
}
void MyCal::div()
{
	int result = num1 / num2;
	cout << "³ª´°¼À°á°ú: " << result << endl;
}
void MyCal::all()
{
	add();
	sub();
	mul();
	div();
}



int main()
{
	MyCal ex1(100, 10);
	MyCal ex2(200, 10);

	/*
	ex1.add();
	ex1.sub();
	ex1.mul();
	ex1.div();
	printf("\n");
	ex2.add();
	ex2.sub();
	ex2.mul();
	ex2.div();
	*/

	ex1.all();
	printf("\n");
	ex2.all();

	return 0;
}