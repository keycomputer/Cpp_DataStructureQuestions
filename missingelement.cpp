#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6]={1,3,7,5,6,2}, n = sizeof(arr)/sizeof(int);
    int sum =0; 
    for(int i=0; i<n; i++)
        sum += arr[i]; // sum = sum + arr[i];
    n=n+1;
    int total = n * (n+1)/2;
    cout<<total <<"  "<<sum <<endl;
    cout<<total - sum;
}