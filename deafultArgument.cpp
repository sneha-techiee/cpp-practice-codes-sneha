#include<iostream>
using namespace std;

    int bankAccounts(int deposit, float interest = 1.04){//defaultArguments make the compiler 
        //  take the value given by default if we dont change 
        return (deposit*interest);//float value but return type is int so .. whole number 
    }
    int main(){
        int money;
        cout<<"Enter money to deposit :"<<endl;
        cin>>money;
        cout<<"YOur money after an year :"<<bankAccounts(money)<<endl;

    return 0;
}