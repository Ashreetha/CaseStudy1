//© KONINKLIJKE PHILIPS ELECTRONICS N.V. 2019
//(c)KONINKLIJKE PHILIPS ELECTRONICS N.V 2019
//COPYRIGHT KONINKLIJKE PHILIPS ELECTRONICS N.V 2019

#pragma once
#include<iostream>
#include <string>
#include <OutputPrinter.h>
using namespace std;	
		
//This function prints the message on the console
 void OutputPrinter:: print()
{
	cout << m_dataToPrint << endl;
}

 //This function returns the message displayed on the console
string OutputPrinter::getPrintData()
{
	return m_dataToPrint;
}


