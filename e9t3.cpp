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
 { cout<<"Enter the name: ";
   cin>>name;
   cout<<"Enter the Roll no. ";
   cin>>rollno;
   cout<<"Enter the marks of subject 1: ";
   cin>>sub1;
   cout<<"Enter the marks of subject 2: ";
   cin>>sub2;
   cout<<"Enter the marks of subject 3: ";
   cin>>sub3;
   score=(sub1+sub2+sub3)/3;

 }

 void display()
 { if(score<40)
    { cout<<"FAIL!"<<endl;
      cout<<"Name: "<<name<<endl;
      cout<<"Roll No.:"<<rollno<<endl;
      cout<<"Subject 1 Marks: "<<sub1<<endl;
      cout<<"Subject 2 Marks: "<<sub2<<endl;
      cout<<"Subject 3 Marks: "<<sub3<<endl;
      cout<<"Score: "<<score<<endl;
    }
    else
    { cout<<"PASS!"<<endl;
      cout<<"Name: "<<name<<endl;
      cout<<"Roll No.:"<<rollno<<endl;
      cout<<"Subject 1 Marks: "<<sub1<<endl;
      cout<<"Subject 2 Marks: "<<sub2<<endl;
      cout<<"Subject 3 Marks: "<<sub3<<endl;
      cout<<"Score: "<<score<<endl;
    }
}
 };
int main()
{ int i;
  student s;
  for(i=1;i<=10;i++)
  { cout<<"Enter the details of student "<<i<<":"<<endl;
    s.read(); s.display();
  }
  return 0;
}
