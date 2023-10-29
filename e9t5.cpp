#include <iostream>
using namespace std;
class Shapes{
 float area;
 public:
     void calArea(float l, float b)
     { cout<<"The area of the Rectangle is: "<<l*b<<endl;
     }
      void calArea(float s)
     { cout<<"The area of the Square is: "<<s*s<<endl;
     }

};
int main()
{ Shapes K;
  float L,B,S;
  cout<<"Enter the length and breadth of the rectangle: ";
  cin>>L>>B;
  K.calArea(L,B);
  cout<<"Enter the side of the square: ";
  cin>>S;
  K.calArea(S);
  return 0;
}
