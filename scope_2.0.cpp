#include<iostream>
using namespace std;
int c= 45;//global variable 
int main(){
    int a, b, c;
    cout<<"enter the values of a, b :";
    cin>>a>>b;
    c=a+b;
    cout<<"sum is :"<<c;//local variable 
    cout<<"sum is in global variable  :"<<::c;//global variable using ::-->scope resolution operator
    return 0;
}