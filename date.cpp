//MOHD AFSAN AHMAD
//CSB-3rd SEM
//ROLL.NO.56
#include<iostream>
using namespace std;
class date
{
  private: int d,m,y,flag;
  public :
void read() //read the date
{
  cout<<"enter the date\n";
  cin>>d>>m>>y;
}

void valid() //valid date
{
	flag=0;
 if(m>12 || d==0 || m==0 || y<=0 || m<1)
{
flag=1;
cout<<"date is not valid\n";
}
     else if(m==4 || m==6 ||m==9 ||m==11)
{
if(d>30 || d<0 || m<1 || m>12)
	{
   flag=1;
   cout<<"Date is not valid\n";
        }
else
{
 cout<<"Date is valid\n";
}
}
 else if(m==2 && ((y%100!=0 && y%4==0) || y%400==0))
{
if(d>29 || d<0 || m<1 || m>12)
{
 flag=1;
 cout<<"Date is not valid\n";
}
else
{
 cout<<"Date is valid\n";
}
}
  else if(m==2 )
 {
if(d>28 || d<0 || m<1 || m>12)
{
flag=1;
  cout<<"Date is not valid\n";
}
else
{
 cout<<"Date is valid\n";
}
}
else if(m==1 || m==3 ||m==5 ||m==7 || m==8 ||m==10 ||m==12)
{
if(d>31 || d<0 || m<1 || m>12)
flag=1;
cout<<"Date is not valid\n";
}
else
{
cout<<"Date is valid\n";
}
}	
	
}
void lpyr() //for leap year
{ 
 if((y%100!=0 && y%4==0) || y%400==0)
{
cout<<"leap year\n";
}
else
{
cout<<"Not a leap year\n";
 }
}
void next() //for showing next date
{
 if(flag!=1)
{
if(m==4 || m==6 ||m==9 ||m==11)
{
if(d<30)
{
 cout<<"\n"<<d+1<<"/"<<m<<"/"<<y<<"\n";
	}
else
{
	cout<<"\n"<<1<<"/"<<m+1<<"/"<<y<<"\n";
	}
	     }
 else if(m==1 || m==3 ||m==5 ||m==7 || m==8 || m==10 || m==12)
{
if(d<31)
{
  cout<<"\n"<<d+1<<"/"<<m<<"/"<<y<<"\n";
}
else if(m==12 && d==31)
{
cout<<"\n"<<1<<"/"<<1<<"/"<<y+1<<"\n";
}
   else
{
cout<<"\n"<<1<<"/"<<m+1<<"/"<<y<<"\n";
}
}
     else if(m==2 && ((y%100!=0 && y%4==0) || y%400==0))
{
if(d<29)
{
cout<<"\n"<<d+1<<"/"<<m<<"/"<<y<<"\n";
			}
                        else
			{
			cout<<"\n"<<1<<"/"<<m+1<<"/"<<y<<"\n";
			}
	         }
              else if(m==2)
		{
			if(d<28)
			{
			    cout<<"\n"<<d+1<<"/"<<m<<"/"<<y<<"\n";
			}
                        else
			{
			cout<<"\n"<<1<<"/"<<m+1<<"/"<<y<<"\n";
			}
	         }
	}
        else
	{
         cout<<"\nenter valid date for next date.\n";
	}
		
	}

};

int main()
{
	 date x;
        int a,c;

do
{


cout<<"\n1 for leap year";
cout<<"\n2 for next";
cout<<"\n3 for valid\n";
cin>>a;
x.read();
 	switch(a)
	{
	  case 1:x.lpyr();
	  break;
	  case 2:x.next();
	  break;
          case 3:x.valid();
	  break;
	  default:
	  break;
        }
cout<<"do you want to check again press 0 or press any key\n";
cin>>c;
}

while(c==0);
	 

return 0;
}







