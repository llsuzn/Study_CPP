//이수진
#pragma once
// 클래스 정의
#ifndef __CALCULATOR_H_
#define __CALCULATOR_H_

class Calculator
{
private:
	double x;
	char cper;
	double y;
public:
	double Calculate(double ax=0, char acper=NULL, double ay=0);
};

#endif // !__CALCULATOR_H_

