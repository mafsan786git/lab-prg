//MOHD AFSAN AHMAD
//CSB 3rd SEM
//ROLL NO. 56
#include<iostream>
using namespace std;

class person
{
 public:
 char name[20];
 int age;
 char adr[50];
 
 void perdet()
 {
 cout<<"Enter the name"<<endl;
 cin>>name;
 cout<<"Enter the age of person"<<endl;
 cin>>age;
 cout<<"Enter the adress"<<endl;
 cin>>adr;
 }
};

class prof : virtual public person
{
public:
 int hour;
 void profdet()
 {
 cout<<"Enter the professor's working hours PER DAY"<<endl;
 cin>>hour;
 }
};

class student : virtual public person
{
public:
 int shour;
 void studdet()
 {
 cout<<"Enter the class hours per day"<<endl;
 cin>>shour;
 } 
};

class assistant : public prof,public student
{
 public:
 int thour;
 float salary;
 
 int twh()
 {
  thour = shour + (0.2*hour);
  salary = 500*(.2*hour);
  cout<<"STIPPENT WEEKLY="<<salary*5<<endl<<"Total HOURS attended(Load) WEEKLY="<<thour*5<<endl;
  }
};
 
 
int main()
{
 assistant A;
 A.perdet();
 A.profdet();
 A.studdet();
 A.twh();
 return 0;
 
}
 /*SAMPLE OUTPUT
Enter the name
afsan
Enter the age of person
19
Enter the adress
23/233
Enter the professor's working hours
10
Enter the class hours per day
6
STIPPENT=5000
TOT HOURS attended(Load)=40
*/
