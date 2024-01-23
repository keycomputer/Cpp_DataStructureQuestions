#include<bits/stdc++.h>
using namespace std;

int binarySearch(int [], int , int );
void deleteSorted(int [], int , int );
int main()
{
    int arr[10]={4,6,10,12, 16,20}, n=6;
    int elem = 12;
    int result = binarySearch(arr, n, elem);
    deleteSorted(arr, n, elem );
    n--; 
    
    for(int i=0;i<n;i++)  // display 
        cout<<arr[i]<<" ";
}
int binarySearch(int arr[], int n, int elem)
{
    int l=0, h=n-1;
    while(l<=h)
    {
        int m =(l+h)/2;
        if(arr[m] == elem)
            return m; // found 
        else if(arr[m] > elem)
            h = m-1;
        else 
            l = m+1;           
    }
    return -1;  // not found 
}
void deleteSorted(int arr[], int n, int elem)
{
    int result = binarySearch(arr, n, elem );
    if (result == -1 )
        cout<<"Data Not Found ";
    else{
        for(int i=result; i<n;i++)
            arr[i] = arr[i+1];
    }
}