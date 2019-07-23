//© KONINKLIJKE PHILIPS ELECTRONICS N.V. 2019
//(c)KONINKLIJKE PHILIPS ELECTRONICS N.V 2019
//COPYRIGHT KONINKLIJKE PHILIPS ELECTRONICS N.V 2019

#pragma once
#include<string.h>
#include<iostream>


class OutputPrinter
{
private:
	//m_dataToPrint stores the message which should get displayed on the console.
	const std::string m_dataToPrint = "Hello World"; 
public:	
	void print();
	std::string getPrintData();
};
