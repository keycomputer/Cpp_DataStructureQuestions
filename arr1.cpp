#include<bits/stdc++.h>
using namespace std;

// O(n)

void insertSorted(int[], int , int);
int main()
{
    int arr[10]={4,6,10,16,20}, n=5;
    int elem = 12;

    insertSorted(arr, n, elem );
    for(int i=0;i<n;i++)  // display 
        cout<<arr[i]<<" ";
}
void insertSorted(int arr[],int n, int elem)
{
    if (n >=10)
        cout<<"Array is full";
    else
    {
        int i;
        for( i=n-1; i>=0 && arr[i]> elem ;i--)
            arr[i+1] = arr[i];
        arr[i+1] = elem ;
    }
}
