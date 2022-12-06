//clientdata.h
#include<string>
using namespace std;
#ifndef CLIENTDATA_H
#define CLIENTDATA_H
class ClientData{
public:
	ClientData(int=0,string=" ",string=" ",double=0.0);//default constructor
	void setAccountNumber(int);
	int getAccountNumber()const;
	void setFirstName(string);
	string getFirstName()const;
	void setLastName(string);
	string getLastName()const;
	void setBalance(double);
	double getBalance()const;
	friend void outPutLine(ostream&,const ClientData&);
private:
	int accountNumber;
	char lastName[15];
	char firstName[10];
	double balance;
};
#endif
