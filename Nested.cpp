#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int mark;
cout<<"Enter your marks :";
cin>>mark;


if(mark>100)
{
    cout<<"INVALID MARK";
}
else if(mark<0)
{
    cout<<"INVALID MARK";
}
if(mark>32)
{
if(mark>=80)
{
    cout<<"A+";
}
else if(mark>=70)
{
    cout<<"A";
}
else if(mark>=60)
{
    cout<<"A-";
}
else if(mark>=50)
{
    cout<<"B";
}
else if(mark>=40)
{
    cout<<"C";
} 
 else if(mark>=33)
{
    cout<<"D";
}
}
else
{
    cout<<"FAIL"<<endl;
    cout<<"BEST OF LUCK NEXT TIME";
}





    return 0;
}