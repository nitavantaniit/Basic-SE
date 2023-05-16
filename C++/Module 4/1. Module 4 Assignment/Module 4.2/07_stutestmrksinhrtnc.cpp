/*
Assume that the test results of a batch of students are stored in three different classes. 
Class Students are storing the roll number. Class Test stores the marks obtained in two subjects 
and class result contains the total marks obtained in the test. The class result can inherit the 
details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)
*/

#include<iostream>
using namespace std;
class student
{
	protected:
		int rollno;
	public:
		void set_value()
		{
			cout<<"\n rollno :";
			cin>>rollno;
			
		}
};

class test
{
	protected:
		int m1,m2;
	public:
		void set_sub_value()
		{
			cout<<"\n Marks of first subject:";
			cin>>m1;
			
			cout<<"\n Marks of second subject:";
			cin>>m2;
		}
};

class result:public student, public test
{
	public:
		int total;
		void printData()
		{
			total=m1+m2;
			cout<<"\n total :"<<total;
		}
};

main()
{
	result obj;
	obj.set_value();
	obj.set_sub_value();
	obj.printData();
}

