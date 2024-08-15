#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n;
cout<<"How many numbers :";
cin>>n;
int array1[n];
int array2[n];
cout<<"Enter the numbers :";
for(int i=0 ; i<n ; i++)
{
    cin >> array1[i];
}
for(int i=0 ; i<n ; i++)
{
    cout << array1[i] <<" ";
}
for(int i=0 ; i<n ; i++)
{
    array2[i]=array1[i];
}
for(int i=0 ; i<n ; i++)
{
    cout << array2[i]<<" ";
}







    getch();
}