// typecasting: converting of one datatype to another
#include<iostream>
using namespace std;
char c;
int main(){
cout<<"put the value of c here :" ;
cin>>c;
cout<<"the value of c is : "<<int(c);



    return 0;
}
/*How Does int / float Give float?
In C++, when two different data types are involved in an arithmetic expression, the lower type gets automatically promoted to the higher type → this is called implicit type conversion or type promotion.*/

/*#include<iostream>
using namespace std;
int main() {
    float f = 3.9;
    int x = (int)f + 1.1;
    cout << x;
    return 0;
}*/
//answer is 4