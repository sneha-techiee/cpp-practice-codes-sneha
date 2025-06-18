// Create a calculator using switch-case that performs +, -, *, /, %
#include<iostream>
using namespace std;
int main(){
    int num[5];
    char op[4];
   
    cout<<"Enter the first number :";
    cin>>num[0];
    cout<<num[0]<<endl;;
    cout<<"enter the operator :"<<endl;
    cin>>op[0];
    cout<<op[0];
    int result;
    if(op[0] == '=' ){
       cout<<"result"<<num[0];
return 0;
}


int i;
cout<<"enter all the numbers :"<<endl;

for(i=1; i<5; i++){
cin>>num[i];
cout<<num[i]<<endl;
}
cout<<"enter all the operators :"<<endl;

for(i=0; i<4; i++){
cin>>op[i];
cout<<op[i]<<endl;
}
result = num[0];
for(i=0; i<4; i++){
    switch(op[i]){
        case '+':
        result+=num[i+1];
        break;
        case '-':
        result-=num[i+1];
        break;
        case '*':
        result*=num[i+1];
        break;
    }
}
    cout<<result;
   





return 0;
}