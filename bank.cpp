//MOHD AFSAN AHMAD
//CSB-3rd SEM
//ROLL.NO.56
#include<iostream>
using namespace std;

class Account
{
private:
       string name;
	int accno,balance;
	static int interest;
	static int temp;
public:
     void read()
     {
	cout<<"provide Account No: ";
	cin>>accno;
	cout<<"provide Account holder name: ";
	cin>>name;
      
do
{
   cout<<"provide Account Balance greater than minimum balance 1000 :\n";
cin>>balance;
}
	while(balance<1000);
									
     cout<<"provide Account Interest : ";
cin>>Account::interest;
					
Account::temp = balance;
}
static float interest1()
{
return(Account::interest/100.00)*Account::temp;
}
void trial()
{
balance=balance+Account::interest1();
cout<<"The Interest for "<<name<<"\t"<< "is "<<Account::interest1()<<"\n";
temp=balance;
}
void print() const
{ cout<<"The balance of account No. "<<accno<<"\t"<<"is"<<"\t"<<balance<<"\n\n";
}
};
	int Account::interest=7;
  int Account::temp=0;
int main()
{
Account  a1;
a1.read();
a1.trial();
a1.print();
return 0;
} 
/*         output
provide Account No: 123
provide Account holder name: afsan
provide Account Balance greater than minimum balance 1000 :
500
provide Account Balance greater than minimum balance 1000 :
2000
provide Account Interest : 10
The Interest for afsan	is 200
The balance of account No. 123	is	2200

provide Account No: 321
provide Account holder name: raushan 
provide Account Balance greater than minimum balance 1000 :
1000000
provide Account Interest : 30
The Interest for raushan	is 300000
The balance of account No. 321	is	1300000
*/




