/*
Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance) 
*/

#include<iostream>
using namespace std;
class cricketer
{
	public:
	int r1,r2,r3,r4,r5,n_o;
	
		
		void cric()
		{
			cout<<"\n Runs in 1st Match : ";
			cin>>r1;
			cout<<"\n Runs in 2nd Match : ";
			cin>>r2;
			cout<<"\n Runs in 3rd Match : ";
			cin>>r3;
			cout<<"\n Runs in 4th Match : ";
			cin>>r4;
			cout<<"\n Runs in 5th Match : ";
			cin>>r5;
			cout<<"\n Total not out innings : ";
			cin>>n_o;
		}
};
 class Batsman : public cricketer
 {
 	public:
 		int to_run,best_per,o_i;
 		double aveg;
 		
		void bats()
		{
           to_run = r1+r2+r3+r4+r5;
		   o_i = 5-n_o;	
		   aveg = to_run/o_i;	   		
		}
		void display()
		{
			cout<<"\n total run of batsman : "<<to_run;
			cout<<"\n Average score of batsman : "<<aveg;			
		}
 }; 

main()
{
       Batsman obj;
       obj.cric();
       obj.bats();
       obj.display();
}
