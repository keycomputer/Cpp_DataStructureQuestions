#include<bits/stdc++.h>
using namespace std;
//Find the missing number in an array
//Given an array of n-1 distinct integers in the range of 1 to n, find the missing number in it in linear time.

//For example, consider array {1, 2, 3, 4, 5, 7, 8, 9, 10} whose elements are distinct and within the range of 1 to 10. The missing number is 6.
int main()
{
    int arr[6]={1,3,7,5,6,2}, n = sizeof(arr)/sizeof(int);
    int sum =0; 
    for(int i=0; i<n; i++)
        sum += arr[i]; // sum = sum + arr[i];
    n=n+1;
    int total = n * (n+1)/2;  // 7 * 8 /2   = 7 * 4 = 28 
    cout<<total <<"  "<<sum <<endl;
    cout<<total - sum;
}