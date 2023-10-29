#include <iostream>
using namespace std;
class sum1{
 public:
 void sum(int a, int b)
 { cout<<"The sum of the entered numbers is "<<a+b<<endl;
 }
 void sum(int a, int b, int c)
 { cout<<"The sum of the entered numbers is "<<a+b+c<<endl;
 }
  void sum(float a, float b)
 { cout<<"The sum of the entered numbers is "<<a+b<<endl;
 }
 };
 int main()
 { sum1 k; float h,i;
   k.sum(2,3);
   k.sum(45,6,2);
   cin>>h>>i;
   k.sum(h,i);
   return 0;
 }
