#include<iostream>
#include<conio.h>
#include<iomanip>//header for setprecision
using namespace std;

int main()
{

float num1,num2,sum,sub,mul,div;
 
cout<<"Enter two numbers :";
cin>>num1>>num2;

cout<<showpoint;//to show point integers
cout<<setprecision(10);

//Summation
sum=num1+num2;
cout<<setw(20)<<"Summation is = "<<sum;
cout<<endl;

//subtraction

sub=num1-num2;
cout<<setw(20)<<"subtraction is = "<<sub;
cout<<endl;

//Multiplication
mul=num1*num2;
cout<<setw(20)<<"Multiplication is = "<<mul;
cout<<endl;

//Division
div=(float)num1/num2;
cout<<setw(20)<<"Division is = "<<div;
cout<<endl;


    return 0;
}
