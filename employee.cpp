//MOHD AFSAN AHMAD
//CSB 3rd SEM
//ROLL NO. 56
#include<iostream>
using namespace std;
class employee
{
    public:
    char name[30];
    int empno;
    float payrate;
    int wrkhrs;
    employee()
     {
       payrate=0;
     }
     void getemp()
     {
       cout<<" Enter the name : "<<endl;
       cin>>name;
       cout<<" Enter the employee number : "<<endl;
       cin>>empno;
       
     }
     void pay()
     {
        cout<<"Enter the payrate of employee : "<<endl;
        cin>>payrate;
        cout<<"Amount is : "<< payrate <<endl; 
     }
};


class manager : public employee
{
  public:
  manager()
  {
    getemp();
  }
  bool issalarised()
  {
    int ch;
    cout<<"Do you want payment on 1.salary basis 2. hourly basis : "<<endl;
    cin>>ch;
    if(ch==1)
    {
      cout<<"Enter the payrate per month of manager : "<<endl;
      cin>>payrate;
      return true;
    }
    else
    {
      cout<<"Enter the payrate per hour of manager : "<<endl;
      cin>>payrate;
      return false;
   }
  }
   void pay()
   {
     if(issalarised())
     {
      cout<<"The amount per year is : "<< 12*payrate <<endl;
     }
     else
     {
      cout<<"Enter the workhours : "<<endl;
      cin>>wrkhrs;
      cout<<"The amount per day is :  "<< wrkhrs*payrate<<endl;
     }
    }
    
};

class supervisor: public employee
{
  public:
  char dept[50];
  supervisor()
  {
    getemp();
    cout<<"Enter the department : "<<endl;
    cin>>dept;
  }
  void pay()
  {
    cout<<"Enter the payrate per month of supervisor : ";
    cin>>payrate;
    cout<<"The amount per year is"<< 12*payrate<<endl;
  }
};

int main()
{

  char ch;
  do
  {
  cout<<"For employee"<<endl;
  employee emp;
 
  emp.getemp();
  emp.pay();
  cout<<"For manager"<<endl;
  manager m;
  
  m.pay();
  m.employee::pay();
  cout<<"For supervisor"<<endl;
  supervisor s;
 
  s.pay();
  cout<<"Do you want to continue?(y/n)";
  cin>>ch;
  }while(ch=='y'||ch=='Y');
  return 0;
}
/* OUTPUT
For employee
 Enter the name : 
afsan
 Enter the employee number : 
123
Enter the payrate of employee : 
500
Amount is : 500
For manager
 Enter the name : 
mish
 Enter the employee number : 
321
Do you want payment on 1.salary basis 2. hourly basis : 
1
Enter the payrate per month of manager : 
10000
The amount per year is : 120000
Enter the payrate of employee : 
5000
Amount is : 5000
For supervisor
 Enter the name : 
anant
 Enter the employee number : 
256
Enter the department : 
cs
Enter the payrate per month of supervisor : 15000
The amount per year is180000
Do you want to continue?(y/n)n
*/






  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

