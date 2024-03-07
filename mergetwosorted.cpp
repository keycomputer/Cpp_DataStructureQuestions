#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr1[] = {5,8,10,26,36}, arr2[]={4,8,15, 40};
    int n1 = 5, n2 = 4;
    int arr3[n1+n2];
    int i, j, k;
    for(i=0,j=0,k=0; i<n1 && j<n2 ; )
    {
        if(arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    while(i<n1)
        arr3[k++] = arr1[i++];
    while(j<n2)
        arr3[k++] = arr2[j++];
    for(int i=0;i<k;i++)
        cout<<arr3[i]<<" ";
}