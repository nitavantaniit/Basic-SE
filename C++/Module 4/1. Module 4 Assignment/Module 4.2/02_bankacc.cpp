/*
Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance 
*/

#include<iostream>
#include<stdio.h>
#include<process.h>
using namespace std;

class Bank
{
	public:
		char name[20];
		char account_type[20];
		int account_number;
		int balance;


	void initialize()
	{
		cout<<"\nEnter Account Holders Name:";
		gets(name);
		cout<<"\nEnter Account type:";
		gets(account_type);
		cout<<"\nEnter account number:";
		cin>>account_number;
		cout<<"\Enter balance to deposit:";
		cin>>balance;
	}

	void deposit()
	{
		int bal;
		cout<<"\nEnter the amout to deposit:";
		cin>>bal;
		balance+=bal;
		cout<<"\nAmount deposited successfuly\nYour New Balance:"<<balance;
	}

	void check()
	{
		int bal;
		cout<<"\nYour balance :"<<balance<<"\nEnter amount to withdraw:";
		cin>>bal;
		if(bal<=balance)
		{
			balance-=bal;
			cout<<"\nRemaining Balance:"<<balance;
		}
		else
		{
			exit(0);
		}
	}


	void display()
	{
		cout<<"\nName :";
		puts(name);
		cout<<"\nBalance :"<<balance;
	}
	
};

main()
{
	int i;

	Bank bk;
	bk.initialize();
	cout<<"\n1. Your Information\n2. Deposit\n3. Withdraw\nEnter your choice\n";
	cin>>i;
	if(i==1)
	{
		bk.display();
	}
	else if(i==2)
	{
		bk.deposit();
	}
	else if(i==3)
	{
		bk.check();
	}
}
