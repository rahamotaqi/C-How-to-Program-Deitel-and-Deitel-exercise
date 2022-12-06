// 20.MergeSort.test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include"Header1.h"
int main()
{
	MergeSort sortVector(10);
	cout<<"unSorted vector:"<<endl;
	sortVector.displayElemnts();
	cout<<endl<<endl;
	sortVector.sort();
	cout<<"sorted vector:"<<endl;
	sortVector.displayElemnts();
	cout<<endl;
	return 0;
}

