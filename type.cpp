//MOHD AFSAN AHMAD
//CSB 3rd SEM
//ROLL NO. 56
#include<iostream>
using namespace std;
class type
{
 int f,i;
public:
 float m;
 type(){f=0;i=0;}
 type(float m)
{
 i=(m*12)/0.305;
 f=i/12;
 i=i%12;
}
void display1()
{ cout<<f<<" feet and "<<i<<" inches \n";
}
 operator float()
{
 float x;
 cout<<"enter the measurment in feet and inch :\n";
 cin>>f>>i;
 x=(f*0.305)+((i*0.305)/12);
return x;
}

};

int main()
{
 float m;
  cout<<"enter the measurment in meter :\n";
  cin>>m;
type A;
A=m;
A.display1();
type B;
m=B;
cout<<m<<" meter \n";
return 0;
}
/*OUTPUT
Enter the first distance in feet and inch:
5 6
Enter the second distance in feet and inch:
6 7
The total distance :
12 1
D1 is less than D2
Do you want to continue press Y else press N? y
Enter the first distance in feet and inch:
12 6
Enter the second distance in feet and inch:
2 3
The total distance :
14 9
D1 is greater than d2
Do you want to continue press Y else press N? y
Enter the first distance in feet and inch:
5 7
Enter the second distance in feet and inch:
5 5
The total distance :
11 0
D1 is greater than d2
Do you want to continue press Y else press N? y
Enter the first distance in feet and inch:
5 7
Enter the second distance in feet and inch:
7 3
The total distance :
12 10
D1 is less than D2
Do you want to continue press Y else press N? n
*/



