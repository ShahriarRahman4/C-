#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int main()
{
while(1)
{
    int guessnumber,randomnumber;
cout<<"Enter your guess between 1 to 5 :";
 cin >> guessnumber;

randomnumber = rand()%5+1;

if(guessnumber==randomnumber)
{
    cout<<"You have won "<<endl;
}
else{
    cout<<"You have lost "<<endl;
    cout<<"Random number was :"<<randomnumber<<endl;
}


    getch ();
}

}