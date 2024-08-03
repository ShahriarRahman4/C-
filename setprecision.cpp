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
cout<<"Summation is = "<<sum;
cout<<endl;

//subtraction

sub=num1-num2;
cout<<"subtraction is = "<<sub;
cout<<endl;

//Multiplication
mul=num1*num2;
cout<<"Multiplication is = "<<mul;
cout<<endl;

//Division
div=(float)num1/num2;
cout<<"Division is = "<<div;
cout<<endl;


    return 0;
}
