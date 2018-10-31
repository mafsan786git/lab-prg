//MOHD AFSAN AHMAD
//CSB 3rd SEM
//ROLL NO. 56
#include<iostream>
using namespace std;
class student
{
 int d,m,y,roll;
 char name[50];
public:
 void getdata()
 {
 cout<<"enter name of student : ";
 cin>>name;
 cout<<"enter roll number of student :";
 cin>>roll;
 cout<<"enter date of birth of student :\n";
 cin>>d>>m>>y;
 }
 virtual void displayresult(){cout<<"WE ARE IN STUDENT CLASS\n";cout<< "_____________________________________\n";}
 
 };
class UG : public student
{
 private:int m[5],sum;
public:
 void getmark()
 {
  cout<<"enter marks of five subject :\n";
  for(int i=0;i<5;i++)
     {
	cin>>m[i];
     }
 }
 void displayresult()
 {sum=0;
  for(int i=0;i<5;i++)
     {
	sum=sum+m[i];
     }
   cout<<"Total marks obtained by under graduate student: "<<sum<<endl;
      if(sum>=300)
         cout<<"the UG student is pass .\n";
       else
          cout<<"you are failed\n";
 }
};

class PG : public student
{
 private:int mark[5],total;
public:
 void getmark()
 {
  cout<<"enter marks of five subject :\n";
  for(int i=0;i<5;i++)
     {
	cin>>mark[i];
     }
 }
 void displayresult()
 { total=0;
  for(int i=0;i<5;i++)
     {
	total=total+mark[i];
     }
   cout<<"Total marks obtained by post graduate student: "<<total<<endl;
      if(total>=300)
         cout<<"the PG student is pass .\n";
       else
          cout<<"you are failed\n";
 }

};

int main()
{
student s;
student *p;
cout<<"----display result from base class-----\n";
p=&s;
p-> displayresult();
cout<<"------input the data for derived ug class :\n";
UG u;
u.getdata();
u.getmark();
cout<<"-----display result from derived ug class------\n";
p=&u;
p -> displayresult();
cout<<"------input the data for derived pg class :\n";
PG b;
b.getdata();
b.getmark();
cout<<"-----display result from derived pg class------ \n";
p=&b;
p -> displayresult();
return 0;
}
/* OUTPUT
----display result from base class-----
WE ARE IN STUDENT CLASS
_____________________________________
------input the data for derived ug class :
enter name of student : afsan
enter roll number of student :123
enter date of birth of student :
1 7 1996
enter marks of five subject :
55
66
44
55
99
-----display result from derived ug class------
Total marks obtained by under graduate student: 319
the UG student is pass .
------input the data for derived pg class :
enter name of student : mish
enter roll number of student :321
enter date of birth of student :
1 7 1998
enter marks of five subject :
66
88
55
65
56
-----display result from derived pg class------ 
Total marks obtained by post graduate student: 330
the PG student is pass .
*/





