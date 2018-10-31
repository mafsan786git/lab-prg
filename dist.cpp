//MOHD AFSAN AHMAD
//CSB 3rd SEM
//ROLL NO. 56
#include<iostream>
using namespace std;
class dist
{
int feet;
float inch;
public:
void getdata(int f,int i)
{
feet =f;
inch=i;
}
friend bool operator>(dist d1,dist d2 );
friend void operator+(dist d1,dist d2); 
};

bool operator>(dist d1,dist d2)
 {
 float y1=d1.feet+d1.inch/12;
 float y2=d2.feet+d2.inch/12;
 
 return y1>y2?true:false; 
 }
 void operator+(dist d1,dist d2)
 {
  int y1=d1.inch+d2.inch;
  d1.inch=y1%12;
  d1.feet=d1.feet+d2.feet+y1/12;
  cout<<"The total distance :\n"<< d1.feet<<" "<<d1.inch<<endl;
 }
int main()
{
dist d1,d2;
int i;
float f;
char choice;
do
{
cout<<"Enter the first distance in feet and inch:\n";
cin>>f>>i;
d1.getdata(f,i);
cout<<"Enter the second distance in feet and inch:\n";
cin>>f>>i;
d2.getdata(f,i);  
d1+d2;
if(d1>d2)
cout<<"D1 is greater than d2\n";
else
cout<<"D1 is less than D2\n";
cout<<"Do you want to continue press Y else press N? ";
cin>>choice;
}while(choice=='y'||choice=='Y');
return 0;
}
/*OUTPUT

Enter the first distance in feet and inch:
6 3
Enter the second distance in feet and inch:
7 10
The total distance :
14 1
D1 is less than D2
Do you want to continue press Y else press N? y
Enter the first distance in feet and inch:
6 3
Enter the second distance in feet and inch:
5 6
The total distance :
11 9
D1 is greater than d2
Do you want to continue press Y else press N? y
Enter the first distance in feet and inch:
16 5
Enter the second distance in feet and inch:
20 7
The total distance :
37 0
D1 is less than D2
Do you want to continue press Y else press N? n
*/

