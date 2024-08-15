#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,pos=-1,value;
cout<<"How many value you want to input :";
cin>>n; 
int num[n];
cout<<"Enter the values :";
for(int i=0;i<n;i++)
{
    cout<<"Value number."<<i+1 << " =";
    cin>>num[i];
}
cout<<"Enter the value you want to search :";
cin>>value;
for(int i=0;i<n;i++)
{
    if(value==num[i])
    {
        pos =i+1;
        break;
    }
}
if(pos==-1)
{
    cout<<"Value is not found";
}
else 
{
    cout<<"the value is found position no. "<<pos;
}


return 0;
}