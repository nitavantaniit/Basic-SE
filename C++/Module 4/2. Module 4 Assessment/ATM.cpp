// Working of ATM Management System

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
	float balance = 1000;
class ATM
{
	public:
		void option();
		void check_balance();
		void withdrawal();
		void deposit();
};
void ATM :: option()
{
label:
	int a;
	cout<<"1.Check Balance "<<endl;
	cout<<"2.Withdrawal "<<endl;
	cout<<"3.Deposit "<<endl;
	cout<<"4.Cancel "<<endl;
	cout<<"Enter your choice : "<<endl;
	cin>>a;
	switch(a)
	{
		case 1:
			check_balance();
			break;
			
		case 2:
			withdrawal();
			break;
			
		case 3:
			deposit();
			break;
			
		case 4:
			exit(0);
			break;
			
		default:
			cout<<"Please Enter correct choice : "<<endl;
	}
	goto label;
	getch();
}
 
void ATM :: check_balance()
{
	cout<<"Your available Balance is : "<<balance<<endl;
}

void ATM :: withdrawal()
{
	float amount;
	cout << "Enter the amount you want to withdraw : "<<endl;
	cin>>amount;
	balance = balance - amount;
	cout << "Your Remaining Balance is : "<<balance<<endl;
}

void ATM :: deposit()
{
	float dp;
	cout<<"Enter the amount you want to deposit : "<<endl;
	cin>>dp;
	balance = balance + dp;
	cout<<"Your new account balance is : "<<balance<<endl;
}

int main()
{
	cout<<"****************************************\n";
	cout<<"\t\t\t\n|  ATM MANAGEMENT SYSTEM  |  \n";
	cout<<"\t\n****************************************\n";
	//PIN management
	char PIN[15] = "12345";
		char pn[15];
		cout<<"Enter your PIN : "<<endl;
		cin>>pn;
		if(strcmp(PIN,pn)==0)
		{
			cout<<"Welcome to ATM Management System"<<endl;
		}
		else
		{
			cout<<"Wrong PIN"<<endl;
			exit(0);
		}
		char type;
		cout<<"1. Saving"<<endl;
		cout<<"2. Current"<<endl;
		cout<<"Enter the type of Your Account : "<<endl;
		cin>>type;
		if(type = 1)
		{
			cout<<"Welcome"<<endl;
		}
		else
		{
			cout<<"Invalid Choice"<<endl;
		}
		
		ATM atm;
		atm.option();
		
		return 0;
}
