#include<iostream>
using namespace std;
int main(){
    char x = 'a';
    switch(x){
        case 'f':
    cout<<x;
   
    case 'b':
    cout<<x;//removed 'break' for expermient 
    
    case 'a'://here the condition is true
    cout<<x;
   
    case 'd'://blindly prints after the case matches so 'aa'-output
    cout<<x;
    break;
    }

    return 0;
}