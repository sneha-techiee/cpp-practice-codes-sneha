#include<iostream>
using namespace std;
int *marks[5];
int i;
int main(){
    for(i=0;i<5;i++){
        cin>>*marks[i];
        cout<<*marks[i]<<endl;

    }

    return 0;
}