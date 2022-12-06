// 16.test.autp_ptr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<exception>
#include<memory>
#include<new>
#include<cstdlib>
class Error:public exception
{
public:
	Error()
		:exception("error occured.",110){
	}//end constructor
};//end class error
void getValue()
{
	auto_ptr<int>test(new int[5]);
	int arrayname[2];
	cout<<"enter 7 enteger to input;";
	for(int i=0;i<7;i++)
		if
	

int _tmain(int argc, _TCHAR* argv[])
{
	

	return 0;
}

