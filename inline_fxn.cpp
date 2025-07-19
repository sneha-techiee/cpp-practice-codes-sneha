#include<iostream>
using namespace std;
int temp=0;
inline void swap(int &a, int &b)//used to avoid call overhead 
//for eg: call swap(a,b)--> directly give b, a(swaped)
{
temp = a ;
a=b;
b=temp;
//return (a,b);//comma is an operator, will return only b if we use 
}
int main(){
    int num1, num2;
    cout<<"num1 :"<<endl;
    cin>>num1;
    cout<<"num2 :"<<endl;
    cin>>num2;
    cout<<"num1 :"<<num1<<" "<<"num2 :"<<num2<<endl;
swap(num1,num2);   
cout<<num1<<" "<<num2;
    return 0;
}