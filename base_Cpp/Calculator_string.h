//ÀÌ¼öÁø
#pragma once
#ifndef __CALCULATOR_H_
#define __CALCULATOR_H_
#include <vector>
#include <string>

class Calculator
{
private:
	double x;
	char cper;
	double y;
public:
	double Calculate(double ax = 0, char acper = NULL, double ay = 0);
};

#endif // !__CALCULATOR_H_

