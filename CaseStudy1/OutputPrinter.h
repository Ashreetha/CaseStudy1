//© KONINKLIJKE PHILIPS ELECTRONICS N.V. 2019
//(c)KONINKLIJKE PHILIPS ELECTRONICS N.V 2019
//COPYRIGHT KONINKLIJKE PHILIPS ELECTRONICS N.V 2019

#pragma once
#include<string.h>
#include<iostream>


class OutputPrinter
{
private:
	//m_DataToPrint stores the message which should get displayed on the console.
	const std::string m_DataToPrint = "Hello World"; 
public:	
	void Print();
	std::string GetPrintData();
};
