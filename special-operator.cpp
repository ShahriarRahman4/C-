#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a;
float f;
double d;
char ch;
char name[20];

int a1 = sizeof(a);
cout<<a1<<endl;

int f1 = sizeof(f);
cout<<f1<<endl;

int d1 = sizeof(d);
cout<<d1<<endl;

int c = sizeof(ch);
cout<<c<<endl;

int n = sizeof(name);
cout<<n<<endl;

    return 0;
}