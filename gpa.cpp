//MOHD AFSAN AHMAD
//CSB-3rd SEM
//ROLL.NO.56
#include<iostream>
using namespace std;

class Student
{
private: int s_id,mark[10];
	 string name;
	 int count;

public: int sem, credits;

       void read()
	{
	count = 0;
	cout<<"Input the student name: \n";
	cin>>name;
	cout<<"Input the student id: \n";
	cin>>s_id;
	cout<<"Input the semester: \n";
	while(count==0)
	{
	cin>>sem;
	if(sem>0 && sem <= 8)
	count =1;
	else
	cout<<"Enter a valid number\n\n";
	}
	cout<<"Input the marks for 6 theory subjects: \n";
	count = 1;
	while(count<=6)
	{
	int num;
	cin>>num;
	if(num<=100 && num>=0)					
	{	
	mark[count]=num;
	count = count + 1;
	}
	else
	{cout<<"Enter valid marks\n";
	continue;}
	}	
	credits = 0;
    creditCalc();
	}
	void display()
	{
	cout<<"Student Name: "<<name<<"\n";
	cout<<"Student ID: "<<s_id<<"\n";
	cout<<"Current Semester: "<<sem<<"\n";
	cout<<"Total credits: "<<credits<<"\n";
	}
	int creditCalc()
	{	credits = 0;
	for(int i=1;i<=6;i++)
	{
	if(mark[i]>=50)
	credits=credits+3;
	}
	}			
};

class Teacher
{
	public:
		void enrollStudent(Student &s1)
	   {
		s1.creditCalc();
				
	if(s1.credits >= 11)
		{
		if(s1.sem==8)
		cout<<"Graduated";
		else if(s1.sem<8)
		{	s1.sem = s1.sem + 1;
		s1.credits = 0;
		cout<<"Student enrolled to the higher semester!\n\n";
		}			
		}
		else
		cout<<"\nNot enough credits to pass\n";
	}
};

int main()
{
	int i=1,choice;
	Student s1;
	Teacher t1;

	while (i>0)
	{
cout<<"\nEnter your choice: \n[1] New student [2] Display details [3] Enroll Student [4] Exit\n\n";
cin>>choice;

switch(choice)
{
case 1:
	s1.read();
	break;
			
	case 2:
	s1.display();
	break;
			
	case 3:
	t1.enrollStudent(s1);
	break;

	case 4:
		i=0;
	break;

	default:
	cout<<"Enter a valid choice: ";
	break;
   }	
	}

	return 0;
}
/*
     							OUTPUT


 
Enter your choice: [1] New student [2] Display details [3] Enroll Student [4] Exit

1
Input the student name: 
manu
Input the student id: 
12
Input the semester: 
5
Input the marks for 6 theory subjects: 
40
60
80
90
30
40

Enter your choice: [1] New student [2] Display details [3] Enroll Student [4] Exit

3

Not enough credits to pass

Enter your choice: [1] New student [2] Display details [3] Enroll Student [4] Exit

1
Input the student name: 
mufnas
Input the student id: 
456
Input the semester: 
80
Enter a valid number

3
Input the marks for 6 theory subjects: 
90
80
90
60
70
90

Enter your choice: [1] New student [2] Display details [3] Enroll Student [4] Exit

3
Student enrolled to the higher semester!


Enter your choice: [1] New student [2] Display details [3] Enroll Student [4] Exit

4
*/

