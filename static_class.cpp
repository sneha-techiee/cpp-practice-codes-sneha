#include <iostream>
using namespace std;
class employee
{
    int rollNumber;
    static int count;//by default intialized from 0, better to do explicitly

public:
    void setRollNumber(void)
    {
        cin >> rollNumber;//can write rollNumber == count; to avoid taking roll numbers manually 
        count++;
        }
        void displaydata(){
            cout<<rollNumber<<endl;
            
        }
        static void totalcount(){
            cout<<"TOTAL NUMBER OF STUDENTS :"<<count<<endl;
        }
    };
int employee::count;
int main(){
    employee s1, s2, s3, student;
    s1.setRollNumber();
    s2.setRollNumber();
    s3.setRollNumber();
    s1.displaydata();
    s2.displaydata();
    s3.displaydata();
    student.totalcount();
   
return 0;
}

