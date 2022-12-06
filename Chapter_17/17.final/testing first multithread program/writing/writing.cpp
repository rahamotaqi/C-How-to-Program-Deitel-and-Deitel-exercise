// writing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"CreditData.h"
#include<iostream>//for cin,cout,cerr,fixed,showpointios,right,left
#include<cstdlib>//for exit
#include<string>//for string
#include<fstream>//for ifstream,ofstream,ostream
#include<iomanip>//for setw,setPRECISION
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	ofstream outCredit("creditFile.dat",ios::out);
	if(!outCredit){
		cerr<<"file could not be created"<<endl;
		exit(1);}
	ClientData Client;//create a record
	cout<<"\nenter account number(1 to 100 and 0 to end input)\n?";
	int account;
	cin>>account;
	Client.setAccountNumber(account);
	while(account>0&&account<100){
		cout<<"enter last name and first name and balance\n?";
		char lastName[15];
		char firstName[10];
		double balance;
		cin>>setw(15)>>lastName;
		cin>>setw(10)>>firstName;
		cin>>balance;
		Client.setBalance(balance);
		Client.setFirstName(firstName);
		Client.setLastName(lastName);

		outCredit.seekp((Client.getAccountNumber()-1)*sizeof(ClientData));
		outCredit.write(reinterpret_cast<const char*>(&Client),sizeof(ClientData));
		cout<<"enter account number\n?";
		cin>>account;
		Client.setAccountNumber(account);}
	return 0;
}