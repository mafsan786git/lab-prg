//MOHD AFSAN AHMAD
//CSB 3rd SEM
//ROLL NO. 56
#include <iostream>
#include <cmath>
using namespace std;
class shape
{
  protected: float height,width;
  public: void read()
           {
             cout<<"Enter the height\n";
             cin>> height;
             cout<<"Enter the width\n";
             cin>> width;
           }
           virtual void perimeter()=0;
           virtual void area()=0;
};
class triangle: public shape
{
 public: void perimeter()
          {
            float c=sqrt((4*height*height)+(width*width));
            cout<<"The perimeter of triangle is: "<<width+c<<endl;
           } 
          void area()
           {
             cout<<"The area of the triangle is: "<<0.5*width*height<<endl;
            }
};
class square:public shape
{
 public: void perimeter()
          {
            cout<<"The perimeter of square is: "<<4*width<<endl;
           } 
          void area()
           {
             cout<<"The area of the square is: "<<width*height<<endl;
            }
};

class rectangle:public shape
{
 public: void perimeter()
          {
            cout<<"The perimeter of rectangle is: "<<(2*width)+(2*height)<<endl;
           } 
          void area()
           {
             cout<<"The area of the rectangle is: "<<width*height<<endl;
            }
};

int main()
{
int sides;
bool k;
             cout<<"Enter the no. of sides\n";
             cin>> sides; 
             cout<<"Are the sides equal? if YES press 1, else 0 :";
             cin>> k;
shape *p;
 if(sides==3)
{
 triangle T;
 T.read();
 p=&T;
 p -> perimeter();
 p -> area();
}
if(sides==4 && k!=0)
{ 
 square S;
 S.read();
 p=&S;
 p -> perimeter();
 p -> area();
}
if(sides==4 && k==0)
{
 rectangle R;
 R.read();
 p=&R;
 p -> perimeter();
 p -> area();
}
}
/*SAMPLE OUTPUT

Enter the no. of sides
3
Are the sides equal? if YES press 1, else 0 :0
Enter the height
3
Enter the width
4
The perimeter of triangle is: 11.2111
The area of the triangle is: 6

Enter the no. of sides
4
Are the sides equal? if YES press 1, else 0 :0
Enter the height
4
Enter the width
5
The perimeter of rectangle is: 18
The area of the rectangle is: 20

Enter the no. of sides
4
Are the sides equal? if YES press 1, else 0 :1
Enter the height
3
Enter the width
3
The perimeter of square is: 12
The area of the square is: 9
         
*/







