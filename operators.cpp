#include<iostream>
using namespace std;
int main(){
    //arithmetic operators
    int a;
    int b;
    cin>>a>>b;
    cout<<"the value of a+b :"<<a+b<<endl;
    cout<<"the value of a-b :"<<a-b<<endl;
    cout<<"the value of a*b :"<<a*b<<endl;
    cout<<"the value of a/b :"<<a/b<<endl;
cout<<"the value of a%b :"<<a%b<<endl;//You're using integers (int a, b), so C++ cuts off the decimal.
cout<<"the value of a++ :"<<a++<<endl;//Post-increment means: return the value first, then increase it.
cout<<"the value of a-- :"<<a--<<endl;
cout<<"the value of --a :"<<--a<<endl;//value of a is 54 from now 
cout<<"the value of a==b :"<<(a==b)<<endl;//0 cuz both are not equal otherwise 1
cout<<"the value of a!=b :"<<(a!=b)<<endl;
cout<<"the value of a>b :"<<(a>b)<<endl;
    return 0;
}
/*✅ Use brackets for a==b, a!=b, a<b, etc., when printing — because << takes precedence.

❌ You don’t need brackets for arithmetic (+, -, *, etc.) since they're already higher in precedence than <<*/