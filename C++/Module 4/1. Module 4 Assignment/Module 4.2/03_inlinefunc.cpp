//Write a program to find the multiplication values and the cubic values using inline function

#include<iostream>
#include<conio.h>
using namespace std;
  
class line
{
   public:
        inline float mul(float x,float y)
        {
            return(x*y);
        }
        inline float cube(float x)
        {
            return(x*x*x);
        }
};
 
main()
{
    line obj;
    float val1,val2;
    cout<<"Enter two values:";
    cin>>val1>>val2;
    cout<<"\nMultiplication value is:"<<obj.mul(val1,val2);
    cout<<"\n\nCube value is          :"<<obj.cube(val1)<<"\t"<<obj.cube(val2);
}
