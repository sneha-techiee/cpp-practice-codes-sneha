// Q1. Create a class Student with:

// Data members: name, roll, marks

// Member function to input details

// Member function to display details
#include <iostream>
using namespace std;
class student
{
    string name;
    int roll;
    float marks;
    public:
    void takeinput();
    void display(void);
}s1, s2;
void student :: takeinput(){
    cout<<"enter name : ";
    cin>>name;
   cout<<"enter roll : ";
    cin>>roll;
    cout<<"enter marks : ";
    cin>>marks;
}
void student :: display(void){
    cout<<name;
    cout<<roll;
    cout<<marks;
}
int main(){
cout<<"admission no. 1  and 2 is :"<<endl;;
s1.takeinput();
s2.takeinput();
s1.display();
s2.display();
    return 0;
}