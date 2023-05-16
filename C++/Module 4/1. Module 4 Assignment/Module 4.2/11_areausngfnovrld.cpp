//Write a program to calculate the area of circle, rectangle and triangle using Function Overloading 

#include<iostream>
using namespace std;

float area(float);
int area(int,int);
float area(float,float);
main()
{
        int l,b;
        float r,bs,ht;
        cout<<"Enter radius of circle:";
        cin>>r;
        cout<<"Enter length and breadth of rectangle:";
        cin>>l>>b;
        cout<<"Enter base and height of triangle:";
        cin>>bs>>ht;
        cout<<"\nArea of circle is "<<area(r);
        cout<<"\nArea of rectangle is "<<area(l,b);
    	cout<<"\nArea of triangle is "<<area(bs,ht);
}

float area(float r)
{
    return(3.14*r*r);
}

int area(int l,int b)
{
    return(l*b);
}

float area(float bs,float ht)
{
   return((bs*ht)/2);
}
