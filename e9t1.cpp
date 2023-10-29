#include <iostream>
using namespace std;
#include <string.h>
class Student{
    public:
    char name[20];
    int roll_no;
};
int main()
{
    Student k;
    strcpy(k.name,"John");
    k.roll_no=2;
    cout<<"The name is "<<k.name<<endl;
    cout<<"The roll no. is "<<k.roll_no<<endl;
    return 0;
}