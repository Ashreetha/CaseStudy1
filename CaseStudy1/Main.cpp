//© KONINKLIJKE PHILIPS ELECTRONICS N.V. 2019
//(c)KONINKLIJKE PHILIPS ELECTRONICS N.V 2019
//COPYRIGHT KONINKLIJKE PHILIPS ELECTRONICS N.V 2019

#pragma once
#include<iostream>
#include <OutputPrinter.h>
#include <DataValidater.h>

using namespace std;

int main()
{
	OutputPrinter OP;
	OP.Print();

	DataValidater Dp;
	Dp.Result();


	return 0;

}