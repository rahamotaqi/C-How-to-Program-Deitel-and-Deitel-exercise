//7.final Credit program test.cpp 
//writing to a random access file
#include "stdafx.h"
#include"CreditData.h"
#include<iostream>//for cin,cout,cerr,fixed,showpointios,right,left
#include<cstdlib>//for exit
#include<string>//for string
#include<fstream>//for ifstream,ofstream,ostream
#include<iomanip>//for setw,setPRECISION
using namespace std;

void outPutLine(ostream& output,const ClientData& record){
	output<<left<<setw(10)<<record.getAccountNumber()
		<<setw(16)<<record.getLastName()
		<<setw(11)<<record.getFirstName()
		<<setw(10)<<setprecision(2)<<right<<fixed<<showpoint<<record.getBalance()<<endl;}
int ClientData::getAccountNumber()const{
	return accountNumber;}
void ClientData::setAccountNumber(int accountValue){
	//accountNumber=(accountValue>0&&accountValue<=100)?accountValue:-1;}
	accountNumber=accountValue;}
double ClientData::getBalance()const{
	return balance;}
void ClientData::setBalance(double balanceValue){
	balance=balanceValue;}
void ClientData::setFirstName(string first){
	const char* firstNameValue=first.data();
	int length=first.size();
	length=(length<15?length:14);
	strncpy(firstName,firstNameValue,length);
	firstName[length]='\0';}
void ClientData::setLastName(string last){
	const char* lastNameValue=last.data();
	int length=last.size();
	length=(length<10?length:9);
	strncpy(lastName,lastNameValue,length);
	lastName[length]='\0';}
string ClientData::getFirstName()const{
	return firstName;}
string ClientData::getLastName()const{
	return lastName;}
ClientData::ClientData(int ac,string f,string l,double bal){
	setAccountNumber(ac);
	setLastName(l);
	setBalance(bal);
	setFirstName(f);}