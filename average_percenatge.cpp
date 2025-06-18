// Take marks of 5 subjects and print average and percentage
#include<iostream>
using namespace std;
int main(){
    int marks[5];
    int i;
      int sum =0;
    cout<<"enter marks of 5 subjects :"<<endl;
    for(i=0;i<5;i++){
         cin>>marks[i];
sum+=marks[i];
    }
    cout<<"average is :"<<(sum/5);//(sum/5.0) works well 
    return 0;
}