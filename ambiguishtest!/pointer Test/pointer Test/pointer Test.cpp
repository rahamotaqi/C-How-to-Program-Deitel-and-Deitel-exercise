// pointer Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using std::cout;
using std::endl;

int cubeByValue(int);
int cubeByReference(int*);

int _tmain(int argc, _TCHAR* argv[])
{
	cout<<"calling function with value:";
	int number=5;
	cout<<"\nthe original number is:"<<number;
	cubeByValue(number);
	cout<<"\nthe new value is:"<<number;
	number=7;
	cout<<"calling function with refrence:";
	cout<<"\nthe original value of number is:"<<number<<endl;
	cubeByReference(& number);
	cout<<"the new vaue of number is:"<<number;
	return 0;
}
int cubeByValue(int a)
{
	int result=a=a*a*a;
	cout<<"the cube is:"<<result<<endl;

	int *resultPtr=0;
	resultPtr=&result;
	cout<<"the pointer to result variables value is:"<<static_cast<void*>(resultPtr)<<endl;//in tabdil be void zamani ke esharegar be char* eshare konad lazeme,chon amalgare
	//sarbargozari shodeye cout uno ba hode jomleii ke dare behesh eshare mikone tahvil mide na adresesho
	cout<<"resultPtr is a pointer which is pointing to:"<<*resultPtr<<endl;
	cout<<"&result is:"<<&result<<endl;
	return result;
}
int cubeByReference(int *a)
{
	*a=*a * *a * *a;
	cout<<"result is:"<<*a<<endl;
	return 0;
}
