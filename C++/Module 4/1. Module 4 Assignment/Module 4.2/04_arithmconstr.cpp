//Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;

class Test 
{
	int sum, diff, multiply, div;
	public:


   		Test(int a, int b) 
   		{
       		sum = a + b;
       		diff = a - b;
       		multiply = a * b;
       		div = a / b;
   		}

   		void display() 
		{
       		cout << "sum is : "<<sum << endl;
       		cout << "Difference is :" << diff << endl;
       		cout << "Multiplication is :" << multiply << endl;
       		cout << "Division is :" << div << endl;
   		}
};

main() 
{

   int a, b;

   cout << "Enter two numbers:";
   cin >> a>>b;

   Test tt(a, b);
   tt.display();

}
