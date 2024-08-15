#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,total,value,pos=-1;

cout<<"Enter quantity of data :";
cin>>n;
int num[n];
for(int i=0 ; i<n ;i++)
{
cout<<"DATA no."<<i+1<<"=";
cin>>num[i];
}
cout<<"Enter the value you want to search :";
cin>>value;
for(int i=0;i<n;i++)
{
  if(value==num[i])
{
pos =i+1;
cout<<"position of the data ="<<pos;
}
}
if(pos==-1)
{
    cout<<"Data is not found";
}
    getch();
}