/*
Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two 
number using different parameters and Function Overloading
*/

#include<iostream>
using namespace std;
float sum(float,float);
float sub(float,float);
float multi(float,float);
float div(float,float);
main()
{
        float a,b;
        cout<<"Enter the value of a and b :";
        cin>>a>>b;
        
        cout<<"\nSum of this two number is : "<<sum(a,b);
        cout<<"\nSub of this two number is : "<<sub(a,b);
        cout<<"\nMultiplication of this two number is : "<<multi(a,b);
        cout<<"\nDivition of this two number is : "<<div(a,b);
}
float sum(float a,float b)
{
    return(a+b);
}
float sub(float a,float b)
{
   return(a-b);
}
float multi(float a,float b)
{
    return(a*b);
    
}
float div(float a,float b)
{
    return(a/b);
}
