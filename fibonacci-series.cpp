#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a[100],n;
cout<<"How any fibonacci numbers :";
cin>>n;
a[0]=0;
a[1]=1;
for(int i=2;i<n;i++)
{
 a[i]= a[i-1] + a[i-2];
}
for(int i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}


    return 0;
}