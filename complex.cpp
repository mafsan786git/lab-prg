//MOHD AFSAN AHMAD
//CSB 3rd SEM
//ROLL NO. 56
#include<iostream>
using namespace std;
 class complex
 {
 private:
 	int real,img;
 public:


 	friend istream& operator>>(istream&,complex&);
 	friend ostream& operator<<(ostream&,complex);	
 };
 istream& operator>>(istream &din,complex &c)
 {
        cout<<"enter real number:\n";
 	din>>c.real;
        cout<<"enter imaginary number:\n";
        din>>c.img;
 	return(din);
 }
 ostream& operator<<(ostream &dout,complex c)
 {
 	dout<<c.real<<"+"<<c.img<<"i"<<"\n" ;
 	return(dout);
 }
int main()
{
	complex c1;
	cin>>c1;
	cout<<"you entered :\n";
	cout<<c1;
	return(0);
}

/*       OUTPUT
enter real number:
5 
enter imaginary number:
3
you entered :
5+3i

enter real number:
7
enter imaginary number:
3
you entered :
7+3i
*/
