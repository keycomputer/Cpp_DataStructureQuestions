#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[] = {4,-1,-5,-2,4,6,-5}, n=7 ;
    int max_sum = INT_MIN, max_end=0;
    for(int i=0;i<n;i++)
    {
        max_end = max_end + arr[i]; // 4 // 3         //-2           //-2    4 
        if(max_sum < max_end)             // 4 < 3 X  // 4 < -2             
            max_sum = max_end; // 4
        if (max_end < 0 )                 // 3 <0  X  // -2 <0       //
            max_end=0;                                //0              0
    }
    cout<<max_sum;
}