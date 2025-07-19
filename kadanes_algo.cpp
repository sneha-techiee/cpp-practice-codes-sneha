
// Given an array of integers, find the maximum sum of a contiguous subarray.

// Input:

// ini
// Copy
// Edit
// n = 8  
// arr = [-2, -3, 4, -1, -2, 1, 5, -3]#include <iostream>

#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i =0; i<n ; i++){
    cin>>arr[i];
    }
    int maxsum = INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];

if(sum>maxsum){
    maxsum = sum;
}
if(sum<0){
    sum=0;
}
    }
cout<<maxsum;
return 0;
}