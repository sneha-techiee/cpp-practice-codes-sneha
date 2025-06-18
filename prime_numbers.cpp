// 1 Print all prime numbers between 1 and 100
#include<iostream>
using namespace std;
int main(){
    int i;
    int j;
    for(i=2; i<=100; i++){
        int count = 0;
        for(j=1; j<=i; j++){
            if(i%j == 0){
                count++;
            }
        }
        if(count == 2){
    cout<<i<<endl;
 }
    }
return 0;
}