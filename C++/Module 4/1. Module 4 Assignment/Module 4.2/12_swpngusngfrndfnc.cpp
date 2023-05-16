//Write a program to swap the two numbers using friend function without using third variable

#include <iostream>
using namespace std;
class Swap
{
	int a, b;
    public:
    Swap(int a, int b)
	{
		this->a = a;
		this->b = b;
	}

	friend void swap(Swap&);
};

void swap(Swap& s1)
{
	int a,b;
	cout<<"Before swap a= "<<a<<" b= "<<b<<endl; 
	     
	a=a+b; //a=15 (5+10)    
	b=a-b; //b=5 (15-10)    
	a=a-b; //a=10 (15-5)  
	  
	cout<<"After swap a= "<<a<<" b= "<<b<<endl;
}

main()
{
	Swap s(5, 10);
	swap(s);
}
