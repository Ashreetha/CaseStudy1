/*© KONINKLIJKE PHILIPS ELECTRONICS N.V. 2019
(c)KONINKLIJKE PHILIPS ELECTRONICS N.V 2019
COPYRIGHT KONINKLIJKE PHILIPS ELECTRONICS N.V 2019*/

#pragma once
#include <iostream>
#include <string.h>
#include <conio.h>
#include <OutputPrinter.h>
#include <DataValidater.h>
using namespace std;

//This function compares the message displayed on the console and gives the output accordingly
void DataValidater::result()
{	
	OutputPrinter Op;
	string m_printData = Op.getPrintData();		
		
	if (strcmp(m_printData.c_str(), m_dataToValidate.c_str()) == 0)
	{	
		cout << "Result: Passed" << endl;
	}
	else
	{
		cout << "Result: Failed" << endl;
	}
}
