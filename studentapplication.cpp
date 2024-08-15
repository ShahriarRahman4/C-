#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,sum=0;
cout<<"Enter Number of students : ";
cin>>n;

int student[n];

for(int i=0 ; i<n ; i++)
{
    cin >> student[i];
    sum= sum + student[i];
}
float avg = (float)sum / n;
cout<<"Total marks :" << sum<<endl;
cout<<"Average :"<<avg;

return 0;
}