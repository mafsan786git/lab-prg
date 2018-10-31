//MOHD AFSAN AHMAD
//CSB-3rd SEM
//ROLL.NO.56
#include<iostream>

using namespace std;

inline int large(int a,int b,int c)
{
return((a>b)?((a>c)?a:c):((b>c)?b:c));
}

int main()
{
int x,y,z;
cout<<"Enter the three numbers";
cin>>x>>y>>z;
int i=large(x,y,z);
cout<<i<<"\n";
return 0;
}
//OUTPUT
/*
Enter the three numbers
1 9 2
9
Enter the three numbers
6 58 5
58
Enter the three numbers
8 2 4
8
*/
