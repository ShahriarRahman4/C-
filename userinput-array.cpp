#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
int marks[5];
int i;
cout<<"Enter marks of students :";
for(i=0;i<5;i++)
{
    cout<<"Marks for student "<<i+1<<" = ";
    cin>>marks[i];
}
cout<<"Marks are :";
for(i=0;i<5;i++)
{
    cout<<marks[i]<<" ";
}

    return 0;
}