// basic calculator using loop
#include<iostream>
using namespace std;
int main(){
    int numbers[100];
    char op[100];
    // string op; switch cant take string 
    int i;
    cout<<"Enter the numbers "<<endl;
    for(i=0; i<100; i++){
    cin>>numbers[i];
}
cout<<"Enter operators"<<endl;
for(i=0; i<5; i++){
    cin>>op[i];
}
cout<<op<<endl;
switch(op[i]){
    case '+':
break;
}
cout<<op<<endl;
switch(op[i]){
    case '+':
break;
}
int result =0;
cout<<op<<endl;
switch(op[i]){
    case '+':
    result+=numbers[i];
break;
}
cout<<op<<endl;
switch(op[i]){
    case '-':
    result-=numbers[i];
break;
}
cout<<op<<endl;
switch(op[i]){
    case '*':
    result-=numbers[i];
break;
}
cout<<"result is :"<<result;
return 0;
}
