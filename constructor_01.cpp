// Constructor is a special member function with same name as of class
// used to initialize the objects of its class. It is automatically invoked(executed or called)
// whenever an object is created.
#include<iostream>
using namespace std;
class complex{
    int a,b,i;
    public:
    //creating a constructor
    complex(void);
   

};
 complex::complex(void){
        a=10;
        b=0;
        cout<<a<<"+"<<b<<"i"<<endl;
    }
int main(){
    complex c;
    
return 0;
}