//continue
#include<iostream>
using namespace std;

int main() {
    for(int i = 0; i < 43; i++) {
        if(i == 5)
            continue;  // skip i = 5
        cout << i << " ";
    }
    return 0;
}
