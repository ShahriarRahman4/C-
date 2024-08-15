#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,sum=0;
cout<<"Enter Number of students :";
cin>>n;

int students[n];
cout<<"Enter the marks :"<<endl;
for(int i=0 ; i<n ; i++)
{
    cout<< "Marks of student no."<<i+1<<" = ";
    cin>> students[i];
    sum = sum +students[i];
}
float avg =(float) sum/n;
cout<<"TOTAL MARKS :" <<sum <<endl;
cout<<"AVERAGE :" <<avg<<endl;
//maximum and minimum
int max =students[0];
int min =students[0];
for(int i=1; i<n ;i++)
{
   if(max < students[i])
   {
    max = students[i];
   }
   if( min> students[i])
   {
    min = students[i];
   }
}
cout<< "Maximum mark = "<<max<<endl;
cout<< "Minimum mark = "<<min;


    return 0;
}