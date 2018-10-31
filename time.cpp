//MOHD AFSAN AHMAD
//CSB-3rd SEM
//ROLL.NO.56
#include<iostream>
using namespace std;
class time
  {
    int day,hrs,mts,sec;
      public:
    time()
      {
        day=0;
        hrs=0;
        mts=0;
        sec=0;
      }
    void read()
      {
	checktime:
        cout<<"\n\n  Enter the time  :";
	cout<<" \n\n\tHours  :";  
	cin>>hrs;
        cout<<"\n\n\tMinutes  :  ";
        cin>>mts;
        cout<<"\n\n\tSeconds  :  ";
        cin>>sec;
        if((hrs<0) || (mts<0) || (sec<0))
        {
          cout<<"Invalid"<<endl;
	cout<<"enter again : \n"; 
	goto checktime;
	}

        if(sec>59)
          {
            mts+=sec/60;
            sec%=60;
          }
        if(mts>59)
          {
            hrs+=mts/60;
            mts%=60;
          }
        if(hrs>11)
          {
            day+=hrs/12;
            hrs%=12;
          }
      }
    void add()
      {
        time t1,t2,t3;
        t1.read();
        t2.read();
        t3.day=t1.day+t2.day;
        t3.hrs=t1.hrs+t2.hrs;
        t3.mts=t1.mts+t2.mts;
        t3.sec=t1.sec+t2.sec;
        if(t3.sec>59)
          {
            t3.mts+=t3.sec/60;
            t3.sec%=60;
          }
        if(t3.mts>59)
          {
            t3.hrs+=t3.mts/60;
            t3.mts%=60;
          }
        if(t3.hrs>11)
          {
            t3.day+=t3.hrs/12;
            t3.hrs%=12;
          }
       t3.show();
      }
    void show()
      {
        cout<<"\n\n  The time is\n\n\t";
        cout<<hrs<<" hours "<<mts<<" minutes "<<sec<<" seconds\n\n";
      }
	
  }t;
int main()
  {
    t.add();
    return 0;
  }
//OUTPUT
/*  Enter the time  : 

	Hours  :-7


	Minutes  :  -5


	Seconds  :  -60
Invalid


  Enter the time  : 

	Hours  :08


	Minutes  :  07


	Seconds  :  30


  Enter the time  : 

	Hours  :1


	Minutes  :  25


	Seconds  :  20


  The time is

	9 hours 32 minutes 50 seconds

  Enter the time  : 

	Hours  :7


	Minutes  :  35


	Seconds  :  45


  Enter the time  : 

	Hours  :11


	Minutes  :  20


	Seconds  :  42


  The time is

	6 hours 56 minutes 27 seconds
*/

