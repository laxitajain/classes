#include <iostream>
using namespace std;
class Student{
    char name[20],branch[30];
    int roll_no;
    public:
    void getData()
    {
        cout<<"Enter the name: "<<endl;
        cin>>name;
        cout<<"Enter the roll no.: "<<endl;
        cin>>roll_no;
        cout<<"Enter the branch: "<<endl;
        cin>>branch;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no.: "<<roll_no<<endl;
        cout<<"Branch: "<<branch<<endl;
    }
};
int main()
{
    Student k;
    k.getData(); k.display();
    return 0;
}