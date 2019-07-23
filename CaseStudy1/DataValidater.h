//© KONINKLIJKE PHILIPS ELECTRONICS N.V. 2019
//(c)KONINKLIJKE PHILIPS ELECTRONICS N.V 2019
//COPYRIGHT KONINKLIJKE PHILIPS ELECTRONICS N.V 2019

#pragma once
#include<string.h>
#include<iostream>

class DataValidater
{
private:
	//validates the message displayed on the console with the string stored in m_DataToValidate.
	const std::string m_dataToValidate = "Hello World";
public:		
	void result();
};

