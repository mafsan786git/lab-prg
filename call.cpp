//MOHD AFSAN AHMAD
//CSB-3rd SEM
//ROLL.NO.56
#include<iostream>
using namespace std;
void swapv(int x,int y);
void swapa(int *x,int *y);
void swapr(int& x,int& y);

int main()
{
int x=100,a,b;
int y=200;
a=x;
b=y;
cout<<"Numbers before swapping call by value :->"<<x<<" "<<y;
swapv(x,y);
cout<<"\nNumbers after swapping call by value :->"<<x<<" "<<y;
cout<<"\nNumbers before swapping call by address :->"<<x<<" "<<y;
swapa(&x,&y);
cout<<"\nNumbers after swapping call by address :->"<<x<<" "<<y;
cout<<"\nNumbers before swapping call by refrence :->"<<a<<" "<<b;
swapr(a,b);
cout<<"\nNumbers after swapping call by refrence :->"<<a<<" "<<b<<"\n";
return 0;
}
void swapv(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
}
void swapa(int *x,int *y)
{
int temp;
temp= *x;
*x = *y;
 *y = temp;
}
void swapr(int& x,int& y)
{
int temp;
temp=x;
x=y;
y=temp;
}
//OUTPUT
/*
Numbers before swapping call by value :->100 200
Numbers after swapping call by value :->100 200
Numbers before swapping call by address :->100 200
Numbers after swapping call by address :->200 100
Numbers before swapping call by refrence :->100 200
Numbers after swapping call by refrence :->200 100
*/

