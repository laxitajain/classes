#include <iostream>
using namespace std;
class student{
 char name[20];
 int rollno;
 int sub1;
 int sub2;
 int sub3;
 float score;
 public:
 void read()
 { cout<<"Name: ";
   cin>>name;
   cout<<"Roll no. ";
   cin>>rollno;
   cout<<"Marks of subject 1: ";
   cin>>sub1;
   cout<<"Marks of subject 2: ";
   cin>>sub2;
   cout<<"Marks of subject 3: ";
   cin>>sub3;
   score=(sub1+sub2+sub3)/3;
 }

 void display()
 { 
      cout<<"Name: "<<name<<endl;
      cout<<"Roll No.:"<<rollno<<endl;
      cout<<"Subject 1 Marks: "<<sub1<<endl;
      cout<<"Subject 2 Marks: "<<sub2<<endl;
      cout<<"Subject 3 Marks: "<<sub3<<endl;
      cout<<"Score: "<<score<<endl;
      if(score>40)
       cout<<"Result: PASS!"<<endl;
      else
       cout<<"Result: FAIL"<<endl;
    }
};
int main()
{ int i;
  student s[3];
  for(i=0;i<3;i++)
  { cout<<"Enter the details of student "<<i+1<<":"<<endl;
    s[i].read(); 
  }
 for(i=0;i<3;i++)
  { cout<<"The details of student "<<i+1<<":"<<endl;
    s[i].display(); 
  }
  return 0;
}