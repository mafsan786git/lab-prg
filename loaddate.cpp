//MOHD AFSAN AHMAD
//CSB 3rd SEM
//ROLL NO. 56
#include<iostream>
using namespace std;
class Date
{
private:
int day,month,year;
public:

void read()
{
cout<<"Enter date :\n";
cin>>day>>month>>year;
}

bool isLeap()
{
if(year%4==0)
{
	if(year%100==0)
	{
		if(year%400==0)
		{
		return true;
		}
		else
		return false;
	}
	else
	return true;
}
else
return false;
}
void operator +(int d)
{
int days_pm[]={31,28,31,30,31,30,31,31,30,31,30,31};

if(isLeap())
days_pm[1]=29;
	while(d>0)
	{
	if(day==days_pm[month-1])
	{
		if(month==12)
		{
		year++;
		month=1;
		day=1;
		d--;
		}
		else
		{
		month++;
		day=1;
		d--;
		}
	}
	else
	{
	day++;
	d--;
	}
	}
 cout<<"date:"<<day<<" / "<<month<<" / "<<year<<"\n";
}

};

int main()
{
int d;
Date obj;
char choice;
do
{
obj.read();
cout<<"Enter number of days:\n";
cin>>d;
obj+d;
cout<<"Do you want to continue press Y else press N? ";
cin>>choice;
}while(choice=='y'||choice=='Y');
return 0;
}
/*
Output:

Enter date (dd mm yyyy):15 10 2008
Enter number of days:4
date:19/10/2008
Do you want to continue (y/n)? y 
Enter date (dd mm yyyy):15 10 2008
Enter number of days:15
date:30/10/2008
Do you want to continue (y/n)? y
Enter date (dd mm yyyy):15 10 2008 
Enter number of days:16
date:31/10/2008
Do you want to continue (y/n)? y
Enter date (dd mm yyyy):15 10 2008
Enter number of days:18
date:2/11/2008
Do you want to continue (y/n)? y
Enter date (dd mm yyyy):15 9 2008
Enter number of days:16
date:1/10/2008
Do you want to continue (y/n)? y
Enter date (dd mm yyyy):15 9 2008
Enter number of days:15
date:30/9/2008
Do you want to continue (y/n)? y
Enter date (dd mm yyyy):15 2 2004 
Enter number of days:14
date:29/2/2004
Do you want to continue (y/n)? y
Enter date (dd mm yyyy):15 2 2001
Enter number of days:14
date:1/3/2001
Do you want to continue (y/n)? y
Enter date (dd mm yyyy):15 2 1900
Enter number of days:14
date:1/3/1900
Do you want to continue (y/n)? n
*/
