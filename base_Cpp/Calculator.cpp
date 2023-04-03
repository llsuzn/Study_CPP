// 이수진
// 메서드 만들기
#include <iostream>
#include "Claculator.h"
using namespace std;


double Calculator::Calculate(double ax, char acper, double ay)
{
	x = ax;
	y = ay;
	cper = acper;
	if (cper == '+')
		return x + y;
	else if (cper == '-')
		return x - y;
	else if (cper == '*')
		return x * y;
	else if (cper == '/')
		return x / y;
	else
		return 0;

}
